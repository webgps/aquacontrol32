void wifiTask( void * pvParameters )
{
  /* trying last accesspoint */
  WiFi.begin();
  time_t startTime = millis();
  Serial.println( "Connecting WiFi");
  tft.println( "Connecting WiFi");
  while ( WiFi.status() != WL_CONNECTED && millis() - startTime <= 15 * 1000 ) /* 15 sec */
  {
    Serial.print( "." );
    tft.print( "." );
    vTaskDelay( 500 / portTICK_PERIOD_MS );
  }
  tft.setTextColor( ILI9341_WHITE , ILI9341_BLACK );

  /* check if we are connected */
  if ( WiFi.status() != WL_CONNECTED )
  {
    /* wait for SC */
    Serial.println( "\nNo WiFi connection.\nWaiting for SmartConfig." );
    //tft.setCursor( 0, 0 );
    tft.println( "\nNo WiFi connection.\nWaiting for SmartConfig." );
    tft.invertDisplay( true );
    WiFi.mode( WIFI_AP_STA );
    WiFi.beginSmartConfig();

    const time_t rebootTime = millis() + 60 * 1000; /* 1 min */

    while ( !WiFi.smartConfigDone() && millis() < rebootTime )
    {
      vTaskDelay( 100 / portTICK_PERIOD_MS );

      tft.setCursor( 70, 100 );
      tft.printf( "%2i seconds until reboot.", ( 100 + rebootTime - millis() ) / 1000 );
      Serial.print(".");
    }
    if ( !WiFi.smartConfigDone() )
    {
      digitalWrite( SPI_TFT_RST_PIN, LOW );
      //ESP.restart();
      esp_restart();
    }
  }
  else
  {
    //Wait for WiFi to connect to AP
    while ( WiFi.status() != WL_CONNECTED )
    {
      vTaskDelay( 500 / portTICK_PERIOD_MS );
      Serial.print( "." );
      tft.print( "." );
    }
  }


  /* We have succesfully connected */
  tft.invertDisplay( false );
  tft.println( "\nWiFi connected.\nLocal IP: " + WiFi.localIP().toString() );
  Serial.println( "\nWiFi connected to " + WiFi.SSID() );
  Serial.println( "Local IP: " + WiFi.localIP().toString() );
  Serial.println( "MAC address: " + WiFi.macAddress() );

  snprintf( hostName, sizeof( hostName ), "%s%c%c%c%c%c%c", DEFAULT_HOSTNAME_PREFIX,
            WiFi.macAddress()[9], WiFi.macAddress()[10],
            WiFi.macAddress()[12], WiFi.macAddress()[13],
            WiFi.macAddress()[15], WiFi.macAddress()[16]
          );

  if ( !MDNS.begin( readStringNVS( "hostname", hostName ).c_str() ) )
  {
    Serial.println( "Error setting up mDNS." );
    memset( hostName, 0, sizeof( hostName ) );
  }
  else
  {
    Serial.printf(  "MDNS name set to %s.\n", hostName );
  }


  /* start network dependent tasks */
  xTaskCreatePinnedToCore(
    ntpTask,                        /* Function to implement the task */
    "ntpTask",                      /* Name of the task */
    2000,                           /* Stack size in words */
    NULL,                           /* Task input parameter */
    1,                              /* Priority of the task */
    NULL,                           /* Task handle. */
    1);

  xTaskCreatePinnedToCore(
    webServerTask,                  /* Function to implement the task */
    "webServerTask",                /* Name of the task */
    1000,                           /* Stack size in words */
    NULL,                           /* Task input parameter */
    6,                              /* Priority of the task */
    NULL,                           /* Task handle. */
    1);                             /* Core where the task should run */

  while (1)
  {
    if ( !WiFi.isConnected() )
    {
      Serial.println( "No Wifi. Reconnecting.." );
      WiFi.reconnect();
    }
    vTaskDelay( 10000 / portTICK_PERIOD_MS );
  }
}