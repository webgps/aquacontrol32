void webServerTask ( void * pvParameters )
{
  while (1)
  {
    server.handleClient();
    vTaskDelay( 2 / portTICK_PERIOD_MS);
  }
}

//https://stackoverflow.com/questions/8707183/script-tool-to-convert-file-to-c-c-source-code-array/8707241#8707241

//https://github.com/esp8266/ESPWebServer/blob/master/examples/SDWebServer/SDWebServer.ino

//https://github.com/copercini/arduino-esp32-SPIFFS

static const char index_html[] = {
  0x3c, 0x21, 0x64, 0x6f, 0x63, 0x74, 0x79, 0x70, 0x65, 0x20, 0x48, 0x54,
  0x4d, 0x4c, 0x3e, 0x0a, 0x3c, 0x68, 0x74, 0x6d, 0x6c, 0x20, 0x6c, 0x61,
  0x6e, 0x67, 0x3d, 0x22, 0x65, 0x6e, 0x22, 0x3e, 0x0a, 0x3c, 0x68, 0x65,
  0x61, 0x64, 0x3e, 0x0a, 0x3c, 0x74, 0x69, 0x74, 0x6c, 0x65, 0x3e, 0x41,
  0x71, 0x75, 0x61, 0x63, 0x6f, 0x6e, 0x74, 0x72, 0x6f, 0x6c, 0x3c, 0x2f,
  0x74, 0x69, 0x74, 0x6c, 0x65, 0x3e, 0x0a, 0x3c, 0x6d, 0x65, 0x74, 0x61,
  0x20, 0x63, 0x68, 0x61, 0x72, 0x73, 0x65, 0x74, 0x3d, 0x22, 0x75, 0x74,
  0x66, 0x2d, 0x38, 0x22, 0x3e, 0x0a, 0x3c, 0x6c, 0x69, 0x6e, 0x6b, 0x20,
  0x72, 0x65, 0x6c, 0x3d, 0x22, 0x69, 0x63, 0x6f, 0x6e, 0x22, 0x20, 0x68,
  0x72, 0x65, 0x66, 0x3d, 0x22, 0x64, 0x61, 0x74, 0x61, 0x3a, 0x3b, 0x62,
  0x61, 0x73, 0x65, 0x36, 0x34, 0x2c, 0x69, 0x56, 0x42, 0x4f, 0x52, 0x77,
  0x30, 0x4b, 0x47, 0x67, 0x6f, 0x3d, 0x22, 0x3e, 0x20, 0x20, 0x3c, 0x21,
  0x2d, 0x2d, 0x70, 0x72, 0x65, 0x76, 0x65, 0x6e, 0x74, 0x20, 0x66, 0x61,
  0x76, 0x69, 0x63, 0x6f, 0x6e, 0x20, 0x72, 0x65, 0x71, 0x75, 0x65, 0x73,
  0x74, 0x73, 0x2d, 0x2d, 0x3e, 0x0a, 0x3c, 0x73, 0x74, 0x79, 0x6c, 0x65,
  0x3e, 0x0a, 0x68, 0x74, 0x6d, 0x6c, 0x2c, 0x20, 0x62, 0x6f, 0x64, 0x79,
  0x7b, 0x0a, 0x20, 0x20, 0x6d, 0x61, 0x72, 0x67, 0x69, 0x6e, 0x3a, 0x30,
  0x20, 0x61, 0x75, 0x74, 0x6f, 0x3b, 0x0a, 0x20, 0x20, 0x62, 0x61, 0x63,
  0x6b, 0x67, 0x72, 0x6f, 0x75, 0x6e, 0x64, 0x2d, 0x63, 0x6f, 0x6c, 0x6f,
  0x72, 0x3a, 0x67, 0x72, 0x65, 0x79, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x65,
  0x78, 0x74, 0x2d, 0x61, 0x6c, 0x69, 0x67, 0x6e, 0x3a, 0x63, 0x65, 0x6e,
  0x74, 0x65, 0x72, 0x3b, 0x0a, 0x20, 0x20, 0x77, 0x69, 0x64, 0x74, 0x68,
  0x3a, 0x31, 0x30, 0x32, 0x34, 0x70, 0x78, 0x3b, 0x0a, 0x09, 0x66, 0x6f,
  0x6e, 0x74, 0x2d, 0x76, 0x61, 0x72, 0x69, 0x61, 0x6e, 0x74, 0x3a, 0x20,
  0x73, 0x6d, 0x61, 0x6c, 0x6c, 0x2d, 0x63, 0x61, 0x70, 0x73, 0x3b, 0x0a,
  0x20, 0x20, 0x66, 0x6f, 0x6e, 0x74, 0x2d, 0x73, 0x69, 0x7a, 0x65, 0x3a,
  0x32, 0x30, 0x70, 0x78, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x61, 0x20, 0x7b,
  0x0a, 0x20, 0x20, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x3a, 0x20, 0x62, 0x6c,
  0x61, 0x63, 0x6b, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x65, 0x78, 0x74, 0x2d,
  0x64, 0x65, 0x63, 0x6f, 0x72, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x3a, 0x20,
  0x6e, 0x6f, 0x6e, 0x65, 0x3b, 0x0a, 0x20, 0x20, 0x6d, 0x61, 0x72, 0x67,
  0x69, 0x6e, 0x3a, 0x20, 0x30, 0x20, 0x31, 0x30, 0x70, 0x78, 0x3b, 0x0a,
  0x7d, 0x0a, 0x0a, 0x68, 0x33, 0x7b, 0x0a, 0x20, 0x20, 0x6d, 0x61, 0x72,
  0x67, 0x69, 0x6e, 0x3a, 0x30, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x2e, 0x73,
  0x79, 0x73, 0x74, 0x65, 0x6d, 0x4c, 0x69, 0x6e, 0x6b, 0x7b, 0x0a, 0x20,
  0x20, 0x70, 0x61, 0x64, 0x64, 0x69, 0x6e, 0x67, 0x3a, 0x20, 0x33, 0x70,
  0x78, 0x20, 0x31, 0x30, 0x70, 0x78, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x2e,
  0x73, 0x79, 0x73, 0x74, 0x65, 0x6d, 0x4c, 0x69, 0x6e, 0x6b, 0x3a, 0x68,
  0x6f, 0x76, 0x65, 0x72, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x62, 0x61, 0x63,
  0x6b, 0x67, 0x72, 0x6f, 0x75, 0x6e, 0x64, 0x3a, 0x67, 0x72, 0x65, 0x79,
  0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x70, 0x7b, 0x0a, 0x20, 0x20, 0x6d, 0x61,
  0x72, 0x67, 0x69, 0x6e, 0x3a, 0x30, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x23,
  0x77, 0x72, 0x61, 0x70, 0x70, 0x65, 0x72, 0x7b, 0x0a, 0x20, 0x20, 0x62,
  0x61, 0x63, 0x6b, 0x67, 0x72, 0x6f, 0x75, 0x6e, 0x64, 0x2d, 0x63, 0x6f,
  0x6c, 0x6f, 0x72, 0x3a, 0x20, 0x62, 0x6c, 0x61, 0x63, 0x6b, 0x3b, 0x0a,
  0x20, 0x20, 0x68, 0x65, 0x69, 0x67, 0x68, 0x74, 0x3a, 0x20, 0x33, 0x35,
  0x30, 0x70, 0x78, 0x3b, 0x0a, 0x20, 0x20, 0x70, 0x6f, 0x73, 0x69, 0x74,
  0x69, 0x6f, 0x6e, 0x20, 0x3a, 0x20, 0x72, 0x65, 0x6c, 0x61, 0x74, 0x69,
  0x76, 0x65, 0x3b, 0x0a, 0x20, 0x20, 0x6d, 0x61, 0x72, 0x67, 0x69, 0x6e,
  0x3a, 0x61, 0x75, 0x74, 0x6f, 0x3b, 0x0a, 0x20, 0x20, 0x63, 0x75, 0x72,
  0x73, 0x6f, 0x72, 0x3a, 0x20, 0x64, 0x65, 0x66, 0x61, 0x75, 0x6c, 0x74,
  0x3b, 0x0a, 0x20, 0x20, 0x2f, 0x2f, 0x75, 0x6e, 0x73, 0x65, 0x6c, 0x65,
  0x63, 0x74, 0x61, 0x62, 0x6c, 0x65, 0x0a, 0x20, 0x20, 0x2d, 0x77, 0x65,
  0x62, 0x6b, 0x69, 0x74, 0x2d, 0x74, 0x6f, 0x75, 0x63, 0x68, 0x2d, 0x63,
  0x61, 0x6c, 0x6c, 0x6f, 0x75, 0x74, 0x3a, 0x20, 0x6e, 0x6f, 0x6e, 0x65,
  0x3b, 0x0a, 0x20, 0x20, 0x2d, 0x77, 0x65, 0x62, 0x6b, 0x69, 0x74, 0x2d,
  0x75, 0x73, 0x65, 0x72, 0x2d, 0x73, 0x65, 0x6c, 0x65, 0x63, 0x74, 0x3a,
  0x20, 0x6e, 0x6f, 0x6e, 0x65, 0x3b, 0x0a, 0x20, 0x20, 0x2d, 0x6b, 0x68,
  0x74, 0x6d, 0x6c, 0x2d, 0x75, 0x73, 0x65, 0x72, 0x2d, 0x73, 0x65, 0x6c,
  0x65, 0x63, 0x74, 0x3a, 0x20, 0x6e, 0x6f, 0x6e, 0x65, 0x3b, 0x0a, 0x20,
  0x20, 0x2d, 0x6d, 0x6f, 0x7a, 0x2d, 0x75, 0x73, 0x65, 0x72, 0x2d, 0x73,
  0x65, 0x6c, 0x65, 0x63, 0x74, 0x3a, 0x20, 0x6e, 0x6f, 0x6e, 0x65, 0x3b,
  0x0a, 0x20, 0x20, 0x2d, 0x6d, 0x73, 0x2d, 0x75, 0x73, 0x65, 0x72, 0x2d,
  0x73, 0x65, 0x6c, 0x65, 0x63, 0x74, 0x3a, 0x20, 0x6e, 0x6f, 0x6e, 0x65,
  0x3b, 0x0a, 0x20, 0x20, 0x75, 0x73, 0x65, 0x72, 0x2d, 0x73, 0x65, 0x6c,
  0x65, 0x63, 0x74, 0x3a, 0x20, 0x6e, 0x6f, 0x6e, 0x65, 0x3b, 0x0a, 0x7d,
  0x0a, 0x0a, 0x0a, 0x2e, 0x73, 0x68, 0x61, 0x64, 0x6f, 0x77, 0x65, 0x64,
  0x42, 0x6f, 0x78, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x62, 0x6f, 0x78, 0x2d,
  0x73, 0x68, 0x61, 0x64, 0x6f, 0x77, 0x3a, 0x20, 0x30, 0x70, 0x78, 0x20,
  0x30, 0x70, 0x78, 0x20, 0x31, 0x33, 0x70, 0x78, 0x20, 0x30, 0x70, 0x78,
  0x20, 0x72, 0x67, 0x62, 0x61, 0x28, 0x30, 0x2c, 0x30, 0x2c, 0x30, 0x2c,
  0x31, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x62, 0x6f, 0x72, 0x64, 0x65, 0x72,
  0x3a, 0x73, 0x6f, 0x6c, 0x69, 0x64, 0x20, 0x31, 0x70, 0x78, 0x20, 0x62,
  0x6c, 0x61, 0x63, 0x6b, 0x3b, 0x0a, 0x20, 0x20, 0x62, 0x6f, 0x72, 0x64,
  0x65, 0x72, 0x2d, 0x72, 0x61, 0x64, 0x69, 0x75, 0x73, 0x3a, 0x20, 0x31,
  0x35, 0x70, 0x78, 0x3b, 0x0a, 0x20, 0x20, 0x6d, 0x61, 0x72, 0x67, 0x69,
  0x6e, 0x3a, 0x31, 0x30, 0x70, 0x78, 0x20, 0x30, 0x3b, 0x0a, 0x7d, 0x0a,
  0x0a, 0x2e, 0x62, 0x61, 0x72, 0x7b, 0x0a, 0x20, 0x20, 0x70, 0x6f, 0x73,
  0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x3a, 0x20, 0x61, 0x62, 0x73, 0x6f,
  0x6c, 0x75, 0x74, 0x65, 0x3b, 0x0a, 0x20, 0x20, 0x77, 0x69, 0x64, 0x74,
  0x68, 0x3a, 0x20, 0x31, 0x38, 0x25, 0x3b, 0x0a, 0x20, 0x20, 0x62, 0x6f,
  0x74, 0x74, 0x6f, 0x6d, 0x3a, 0x20, 0x33, 0x34, 0x70, 0x78, 0x3b, 0x0a,
  0x20, 0x20, 0x6c, 0x65, 0x66, 0x74, 0x3a, 0x30, 0x3b, 0x0a, 0x20, 0x20,
  0x68, 0x65, 0x69, 0x67, 0x68, 0x74, 0x3a, 0x30, 0x25, 0x3b, 0x0a, 0x20,
  0x20, 0x6d, 0x61, 0x72, 0x67, 0x69, 0x6e, 0x3a, 0x20, 0x20, 0x31, 0x25,
  0x3b, 0x0a, 0x20, 0x20, 0x64, 0x69, 0x73, 0x70, 0x6c, 0x61, 0x79, 0x20,
  0x3a, 0x20, 0x69, 0x6e, 0x6c, 0x69, 0x6e, 0x65, 0x2d, 0x62, 0x6c, 0x6f,
  0x63, 0x6b, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x65, 0x78, 0x74, 0x2d, 0x61,
  0x6c, 0x69, 0x67, 0x6e, 0x3a, 0x63, 0x65, 0x6e, 0x74, 0x65, 0x72, 0x3b,
  0x0a, 0x20, 0x20, 0x62, 0x61, 0x63, 0x6b, 0x67, 0x72, 0x6f, 0x75, 0x6e,
  0x64, 0x2d, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x3a, 0x20, 0x77, 0x68, 0x69,
  0x74, 0x65, 0x3b, 0x0a, 0x20, 0x20, 0x62, 0x6f, 0x72, 0x64, 0x65, 0x72,
  0x2d, 0x74, 0x6f, 0x70, 0x3a, 0x20, 0x73, 0x6f, 0x6c, 0x69, 0x64, 0x20,
  0x31, 0x70, 0x78, 0x20, 0x72, 0x67, 0x62, 0x61, 0x28, 0x32, 0x35, 0x35,
  0x2c, 0x32, 0x35, 0x35, 0x2c, 0x32, 0x35, 0x35, 0x2c, 0x31, 0x29, 0x20,
  0x3b, 0x0a, 0x20, 0x20, 0x62, 0x6f, 0x72, 0x64, 0x65, 0x72, 0x2d, 0x62,
  0x6f, 0x74, 0x74, 0x6f, 0x6d, 0x3a, 0x20, 0x73, 0x6f, 0x6c, 0x69, 0x64,
  0x20, 0x31, 0x70, 0x78, 0x20, 0x72, 0x67, 0x62, 0x61, 0x28, 0x32, 0x35,
  0x35, 0x2c, 0x32, 0x35, 0x35, 0x2c, 0x32, 0x35, 0x35, 0x2c, 0x31, 0x29,
  0x20, 0x3b, 0x0a, 0x20, 0x20, 0x62, 0x6f, 0x72, 0x64, 0x65, 0x72, 0x2d,
  0x72, 0x61, 0x64, 0x69, 0x75, 0x73, 0x3a, 0x20, 0x31, 0x30, 0x70, 0x78,
  0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x2e, 0x70, 0x63, 0x74, 0x2c, 0x20, 0x2e,
  0x6e, 0x61, 0x6d, 0x65, 0x7b, 0x0a, 0x20, 0x20, 0x70, 0x6f, 0x73, 0x69,
  0x74, 0x69, 0x6f, 0x6e, 0x20, 0x3a, 0x20, 0x61, 0x62, 0x73, 0x6f, 0x6c,
  0x75, 0x74, 0x65, 0x3b, 0x0a, 0x20, 0x20, 0x77, 0x69, 0x64, 0x74, 0x68,
  0x3a, 0x20, 0x31, 0x38, 0x25, 0x3b, 0x0a, 0x20, 0x20, 0x6d, 0x61, 0x72,
  0x67, 0x69, 0x6e, 0x3a, 0x20, 0x31, 0x25, 0x3b, 0x0a, 0x20, 0x20, 0x64,
  0x69, 0x73, 0x70, 0x6c, 0x61, 0x79, 0x20, 0x3a, 0x20, 0x69, 0x6e, 0x6c,
  0x69, 0x6e, 0x65, 0x2d, 0x62, 0x6c, 0x6f, 0x63, 0x6b, 0x3b, 0x0a, 0x20,
  0x20, 0x74, 0x65, 0x78, 0x74, 0x2d, 0x61, 0x6c, 0x69, 0x67, 0x6e, 0x3a,
  0x63, 0x65, 0x6e, 0x74, 0x65, 0x72, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x2e,
  0x70, 0x63, 0x74, 0x20, 0x70, 0x2c, 0x20, 0x2e, 0x6e, 0x61, 0x6d, 0x65,
  0x20, 0x70, 0x7b, 0x0a, 0x20, 0x20, 0x62, 0x61, 0x63, 0x6b, 0x67, 0x72,
  0x6f, 0x75, 0x6e, 0x64, 0x2d, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x3a, 0x20,
  0x67, 0x72, 0x65, 0x79, 0x3b, 0x0a, 0x20, 0x20, 0x77, 0x69, 0x64, 0x74,
  0x68, 0x3a, 0x20, 0x39, 0x30, 0x25, 0x3b, 0x0a, 0x20, 0x20, 0x6d, 0x61,
  0x72, 0x67, 0x69, 0x6e, 0x3a, 0x20, 0x61, 0x75, 0x74, 0x6f, 0x3b, 0x0a,
  0x20, 0x20, 0x62, 0x6f, 0x72, 0x64, 0x65, 0x72, 0x2d, 0x72, 0x61, 0x64,
  0x69, 0x75, 0x73, 0x3a, 0x20, 0x34, 0x70, 0x78, 0x3b, 0x0a, 0x20, 0x20,
  0x62, 0x6f, 0x72, 0x64, 0x65, 0x72, 0x3a, 0x20, 0x73, 0x6f, 0x6c, 0x69,
  0x64, 0x20, 0x31, 0x70, 0x78, 0x20, 0x62, 0x6c, 0x61, 0x63, 0x6b, 0x3b,
  0x0a, 0x7d, 0x0a, 0x0a, 0x23, 0x68, 0x6f, 0x73, 0x74, 0x4e, 0x61, 0x6d,
  0x65, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x74, 0x65, 0x78, 0x74, 0x2d, 0x74,
  0x72, 0x61, 0x6e, 0x73, 0x66, 0x6f, 0x72, 0x6d, 0x3a, 0x20, 0x75, 0x70,
  0x70, 0x65, 0x72, 0x63, 0x61, 0x73, 0x65, 0x3b, 0x0a, 0x7d, 0x0a, 0x3c,
  0x2f, 0x73, 0x74, 0x79, 0x6c, 0x65, 0x3e, 0x0a, 0x3c, 0x73, 0x63, 0x72,
  0x69, 0x70, 0x74, 0x20, 0x73, 0x72, 0x63, 0x3d, 0x22, 0x68, 0x74, 0x74,
  0x70, 0x73, 0x3a, 0x2f, 0x2f, 0x63, 0x6f, 0x64, 0x65, 0x2e, 0x6a, 0x71,
  0x75, 0x65, 0x72, 0x79, 0x2e, 0x63, 0x6f, 0x6d, 0x2f, 0x6a, 0x71, 0x75,
  0x65, 0x72, 0x79, 0x2d, 0x33, 0x2e, 0x32, 0x2e, 0x31, 0x2e, 0x6a, 0x73,
  0x22, 0x3e, 0x3c, 0x2f, 0x73, 0x63, 0x72, 0x69, 0x70, 0x74, 0x3e, 0x0a,
  0x3c, 0x2f, 0x68, 0x65, 0x61, 0x64, 0x3e, 0x0a, 0x3c, 0x62, 0x6f, 0x64,
  0x79, 0x3e, 0x0a, 0x3c, 0x73, 0x63, 0x72, 0x69, 0x70, 0x74, 0x3e, 0x0a,
  0x66, 0x75, 0x6e, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x75, 0x70, 0x64,
  0x61, 0x74, 0x65, 0x42, 0x61, 0x72, 0x67, 0x72, 0x61, 0x70, 0x68, 0x28,
  0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x24, 0x2e, 0x67, 0x65, 0x74, 0x28,
  0x20, 0x27, 0x2f, 0x61, 0x70, 0x69, 0x2f, 0x73, 0x74, 0x61, 0x74, 0x75,
  0x73, 0x27, 0x2c, 0x20, 0x66, 0x75, 0x6e, 0x63, 0x74, 0x69, 0x6f, 0x6e,
  0x28, 0x20, 0x64, 0x61, 0x74, 0x61, 0x20, 0x29, 0x20, 0x7b, 0x0a, 0x20,
  0x20, 0x20, 0x20, 0x76, 0x61, 0x72, 0x20, 0x63, 0x68, 0x61, 0x6e, 0x6e,
  0x65, 0x6c, 0x56, 0x61, 0x6c, 0x75, 0x65, 0x20, 0x3d, 0x20, 0x64, 0x61,
  0x74, 0x61, 0x2e, 0x73, 0x70, 0x6c, 0x69, 0x74, 0x28, 0x20, 0x27, 0x2c,
  0x27, 0x20, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6f, 0x72,
  0x20, 0x28, 0x20, 0x69, 0x3d, 0x30, 0x3b, 0x20, 0x69, 0x20, 0x3c, 0x20,
  0x35, 0x3b, 0x20, 0x69, 0x2b, 0x2b, 0x20, 0x29, 0x20, 0x7b, 0x0a, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x24, 0x28, 0x20, 0x27, 0x2e, 0x62, 0x61,
  0x72, 0x3a, 0x65, 0x71, 0x28, 0x27, 0x20, 0x2b, 0x20, 0x69, 0x20, 0x2b,
  0x20, 0x27, 0x29, 0x27, 0x20, 0x29, 0x2e, 0x63, 0x73, 0x73, 0x28, 0x20,
  0x27, 0x68, 0x65, 0x69, 0x67, 0x68, 0x74, 0x27, 0x2c, 0x20, 0x53, 0x74,
  0x72, 0x69, 0x6e, 0x67, 0x28, 0x20, 0x63, 0x68, 0x61, 0x6e, 0x6e, 0x65,
  0x6c, 0x56, 0x61, 0x6c, 0x75, 0x65, 0x5b, 0x69, 0x5d, 0x2a, 0x2e, 0x37,
  0x35, 0x29, 0x20, 0x2b, 0x20, 0x27, 0x25, 0x27, 0x20, 0x29, 0x2e, 0x63,
  0x73, 0x73, 0x28, 0x20, 0x27, 0x6f, 0x70, 0x61, 0x63, 0x69, 0x74, 0x79,
  0x27, 0x2c, 0x20, 0x4d, 0x61, 0x74, 0x68, 0x2e, 0x6d, 0x61, 0x78, 0x28,
  0x20, 0x63, 0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x56, 0x61, 0x6c, 0x75,
  0x65, 0x5b, 0x69, 0x5d, 0x2f, 0x31, 0x30, 0x30, 0x2c, 0x20, 0x30, 0x2e,
  0x31, 0x35, 0x20, 0x29, 0x20, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x20, 0x63, 0x68, 0x61, 0x6e, 0x6e,
  0x65, 0x6c, 0x56, 0x61, 0x6c, 0x75, 0x65, 0x5b, 0x69, 0x5d, 0x20, 0x3c,
  0x3d, 0x20, 0x30, 0x2e, 0x30, 0x30, 0x20, 0x29, 0x20, 0x7b, 0x0a, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x63, 0x68, 0x61, 0x6e, 0x6e,
  0x65, 0x6c, 0x56, 0x61, 0x6c, 0x75, 0x65, 0x5b, 0x69, 0x5d, 0x20, 0x3d,
  0x20, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x0a,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x20, 0x63,
  0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x56, 0x61, 0x6c, 0x75, 0x65, 0x5b,
  0x69, 0x5d, 0x20, 0x3e, 0x3d, 0x20, 0x31, 0x30, 0x30, 0x2e, 0x30, 0x30,
  0x20, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x63, 0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x56, 0x61, 0x6c, 0x75,
  0x65, 0x5b, 0x69, 0x5d, 0x20, 0x3d, 0x20, 0x31, 0x30, 0x30, 0x3b, 0x0a,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x0a, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x24, 0x28, 0x20, 0x27, 0x2e, 0x70, 0x63, 0x74, 0x20, 0x70,
  0x3a, 0x65, 0x71, 0x28, 0x27, 0x20, 0x2b, 0x20, 0x69, 0x20, 0x2b, 0x20,
  0x27, 0x29, 0x27, 0x20, 0x29, 0x2e, 0x68, 0x74, 0x6d, 0x6c, 0x28, 0x20,
  0x53, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x28, 0x20, 0x63, 0x68, 0x61, 0x6e,
  0x6e, 0x65, 0x6c, 0x56, 0x61, 0x6c, 0x75, 0x65, 0x5b, 0x69, 0x5d, 0x20,
  0x29, 0x20, 0x2b, 0x27, 0x25, 0x27, 0x20, 0x29, 0x3b, 0x0a, 0x20, 0x20,
  0x20, 0x20, 0x7d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x24, 0x28, 0x20, 0x27,
  0x23, 0x73, 0x79, 0x73, 0x54, 0x69, 0x6d, 0x65, 0x27, 0x20, 0x29, 0x2e,
  0x68, 0x74, 0x6d, 0x6c, 0x28, 0x20, 0x63, 0x68, 0x61, 0x6e, 0x6e, 0x65,
  0x6c, 0x56, 0x61, 0x6c, 0x75, 0x65, 0x5b, 0x35, 0x5d, 0x20, 0x29, 0x3b,
  0x0a, 0x20, 0x20, 0x20, 0x20, 0x24, 0x28, 0x20, 0x27, 0x23, 0x6c, 0x69,
  0x67, 0x68, 0x74, 0x53, 0x74, 0x61, 0x74, 0x75, 0x73, 0x27, 0x20, 0x29,
  0x2e, 0x68, 0x74, 0x6d, 0x6c, 0x28, 0x20, 0x63, 0x68, 0x61, 0x6e, 0x6e,
  0x65, 0x6c, 0x56, 0x61, 0x6c, 0x75, 0x65, 0x5b, 0x36, 0x5d, 0x20, 0x29,
  0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x2f, 0x2f, 0x6d, 0x61, 0x6b, 0x65,
  0x20, 0x74, 0x68, 0x65, 0x20, 0x62, 0x61, 0x63, 0x6b, 0x67, 0x72, 0x6f,
  0x75, 0x6e, 0x64, 0x20, 0x72, 0x67, 0x62, 0x20, 0x76, 0x61, 0x6c, 0x75,
  0x65, 0x20, 0x74, 0x68, 0x65, 0x20, 0x61, 0x76, 0x65, 0x72, 0x61, 0x67,
  0x65, 0x20, 0x69, 0x6e, 0x74, 0x65, 0x6e, 0x73, 0x69, 0x74, 0x79, 0x20,
  0x6f, 0x66, 0x20, 0x61, 0x6c, 0x6c, 0x20, 0x63, 0x68, 0x61, 0x6e, 0x6e,
  0x65, 0x6c, 0x73, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x76, 0x61, 0x72, 0x20,
  0x74, 0x6f, 0x74, 0x61, 0x6c, 0x20, 0x3d, 0x20, 0x30, 0x3b, 0x0a, 0x20,
  0x20, 0x20, 0x20, 0x76, 0x61, 0x72, 0x20, 0x61, 0x76, 0x65, 0x72, 0x61,
  0x67, 0x65, 0x43, 0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x56, 0x61, 0x6c,
  0x75, 0x65, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6f, 0x72, 0x28,
  0x20, 0x76, 0x61, 0x72, 0x20, 0x74, 0x68, 0x69, 0x73, 0x43, 0x68, 0x61,
  0x6e, 0x6e, 0x65, 0x6c, 0x20, 0x3d, 0x20, 0x30, 0x3b, 0x20, 0x74, 0x68,
  0x69, 0x73, 0x43, 0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x20, 0x3c, 0x20,
  0x35, 0x3b, 0x20, 0x74, 0x68, 0x69, 0x73, 0x43, 0x68, 0x61, 0x6e, 0x6e,
  0x65, 0x6c, 0x2b, 0x2b, 0x20, 0x29, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x74, 0x6f, 0x74, 0x61, 0x6c, 0x20, 0x2b, 0x3d, 0x20, 0x70,
  0x61, 0x72, 0x73, 0x65, 0x46, 0x6c, 0x6f, 0x61, 0x74, 0x28, 0x20, 0x63,
  0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x56, 0x61, 0x6c, 0x75, 0x65, 0x5b,
  0x74, 0x68, 0x69, 0x73, 0x43, 0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x5d,
  0x20, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x0a, 0x20, 0x20,
  0x20, 0x20, 0x61, 0x76, 0x65, 0x72, 0x61, 0x67, 0x65, 0x43, 0x68, 0x61,
  0x6e, 0x6e, 0x65, 0x6c, 0x56, 0x61, 0x6c, 0x75, 0x65, 0x20, 0x3d, 0x20,
  0x28, 0x20, 0x74, 0x6f, 0x74, 0x61, 0x6c, 0x20, 0x2f, 0x20, 0x35, 0x29,
  0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x61, 0x76, 0x65, 0x72, 0x61, 0x67,
  0x65, 0x43, 0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x56, 0x61, 0x6c, 0x75,
  0x65, 0x20, 0x3d, 0x20, 0x70, 0x61, 0x72, 0x73, 0x65, 0x49, 0x6e, 0x74,
  0x28, 0x20, 0x61, 0x76, 0x65, 0x72, 0x61, 0x67, 0x65, 0x43, 0x68, 0x61,
  0x6e, 0x6e, 0x65, 0x6c, 0x56, 0x61, 0x6c, 0x75, 0x65, 0x20, 0x2a, 0x20,
  0x32, 0x20, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x24, 0x28, 0x20,
  0x22, 0x64, 0x69, 0x76, 0x23, 0x77, 0x72, 0x61, 0x70, 0x70, 0x65, 0x72,
  0x22, 0x20, 0x29, 0x2e, 0x63, 0x73, 0x73, 0x28, 0x20, 0x27, 0x62, 0x61,
  0x63, 0x6b, 0x67, 0x72, 0x6f, 0x75, 0x6e, 0x64, 0x2d, 0x63, 0x6f, 0x6c,
  0x6f, 0x72, 0x27, 0x2c, 0x20, 0x27, 0x72, 0x67, 0x62, 0x61, 0x28, 0x27,
  0x20, 0x2b, 0x20, 0x61, 0x76, 0x65, 0x72, 0x61, 0x67, 0x65, 0x43, 0x68,
  0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x56, 0x61, 0x6c, 0x75, 0x65, 0x20, 0x2b,
  0x20, 0x22, 0x2c, 0x22, 0x20, 0x2b, 0x20, 0x61, 0x76, 0x65, 0x72, 0x61,
  0x67, 0x65, 0x43, 0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x56, 0x61, 0x6c,
  0x75, 0x65, 0x20, 0x2b, 0x20, 0x22, 0x2c, 0x22, 0x20, 0x20, 0x2b, 0x20,
  0x61, 0x76, 0x65, 0x72, 0x61, 0x67, 0x65, 0x43, 0x68, 0x61, 0x6e, 0x6e,
  0x65, 0x6c, 0x56, 0x61, 0x6c, 0x75, 0x65, 0x20, 0x2b, 0x20, 0x22, 0x2c,
  0x22, 0x20, 0x20, 0x2b, 0x20, 0x32, 0x35, 0x35, 0x20, 0x2b, 0x20, 0x27,
  0x29, 0x27, 0x20, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x24, 0x28,
  0x20, 0x27, 0x61, 0x27, 0x20, 0x29, 0x2e, 0x75, 0x6e, 0x62, 0x69, 0x6e,
  0x64, 0x28, 0x20, 0x27, 0x63, 0x6c, 0x69, 0x63, 0x6b, 0x27, 0x20, 0x29,
  0x3b, 0x20, 0x2f, 0x2f, 0x72, 0x65, 0x2d, 0x65, 0x6e, 0x61, 0x62, 0x6c,
  0x65, 0x20, 0x74, 0x68, 0x65, 0x20, 0x6c, 0x69, 0x6e, 0x6b, 0x73, 0x20,
  0x77, 0x68, 0x69, 0x63, 0x68, 0x20, 0x61, 0x72, 0x65, 0x20, 0x62, 0x6f,
  0x75, 0x6e, 0x64, 0x20, 0x74, 0x6f, 0x20, 0x65, 0x2e, 0x70, 0x72, 0x65,
  0x76, 0x65, 0x6e, 0x74, 0x64, 0x65, 0x66, 0x61, 0x75, 0x6c, 0x74, 0x28,
  0x29, 0x0a, 0x20, 0x20, 0x7d, 0x29, 0x0a, 0x7d, 0x0a, 0x3c, 0x2f, 0x73,
  0x63, 0x72, 0x69, 0x70, 0x74, 0x3e, 0x0a, 0x3c, 0x70, 0x20, 0x63, 0x6c,
  0x61, 0x73, 0x73, 0x3d, 0x22, 0x73, 0x68, 0x61, 0x64, 0x6f, 0x77, 0x65,
  0x64, 0x42, 0x6f, 0x78, 0x22, 0x20, 0x73, 0x74, 0x79, 0x6c, 0x65, 0x3d,
  0x22, 0x62, 0x61, 0x63, 0x6b, 0x67, 0x72, 0x6f, 0x75, 0x6e, 0x64, 0x2d,
  0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x3a, 0x62, 0x65, 0x69, 0x67, 0x65, 0x3b,
  0x22, 0x3e, 0x3c, 0x61, 0x20, 0x63, 0x6c, 0x61, 0x73, 0x73, 0x3d, 0x22,
  0x73, 0x79, 0x73, 0x74, 0x65, 0x6d, 0x4c, 0x69, 0x6e, 0x6b, 0x22, 0x20,
  0x68, 0x72, 0x65, 0x66, 0x3d, 0x22, 0x2f, 0x22, 0x3e, 0x48, 0x4f, 0x4d,
  0x45, 0x3c, 0x2f, 0x61, 0x3e, 0x3c, 0x61, 0x20, 0x63, 0x6c, 0x61, 0x73,
  0x73, 0x3d, 0x22, 0x73, 0x79, 0x73, 0x74, 0x65, 0x6d, 0x4c, 0x69, 0x6e,
  0x6b, 0x22, 0x20, 0x68, 0x72, 0x65, 0x66, 0x3d, 0x22, 0x63, 0x68, 0x61,
  0x6e, 0x6e, 0x65, 0x6c, 0x73, 0x22, 0x3e, 0x43, 0x48, 0x41, 0x4e, 0x4e,
  0x45, 0x4c, 0x53, 0x3c, 0x2f, 0x61, 0x3e, 0x3c, 0x61, 0x20, 0x63, 0x6c,
  0x61, 0x73, 0x73, 0x3d, 0x22, 0x73, 0x79, 0x73, 0x74, 0x65, 0x6d, 0x4c,
  0x69, 0x6e, 0x6b, 0x22, 0x20, 0x68, 0x72, 0x65, 0x66, 0x3d, 0x22, 0x73,
  0x65, 0x74, 0x75, 0x70, 0x22, 0x3e, 0x53, 0x45, 0x54, 0x55, 0x50, 0x3c,
  0x2f, 0x61, 0x3e, 0x3c, 0x61, 0x20, 0x63, 0x6c, 0x61, 0x73, 0x73, 0x3d,
  0x22, 0x73, 0x79, 0x73, 0x74, 0x65, 0x6d, 0x4c, 0x69, 0x6e, 0x6b, 0x22,
  0x20, 0x68, 0x72, 0x65, 0x66, 0x3d, 0x22, 0x65, 0x64, 0x69, 0x74, 0x6f,
  0x72, 0x22, 0x3e, 0x45, 0x44, 0x49, 0x54, 0x4f, 0x52, 0x3c, 0x2f, 0x61,
  0x3e, 0x3c, 0x61, 0x20, 0x63, 0x6c, 0x61, 0x73, 0x73, 0x3d, 0x22, 0x73,
  0x79, 0x73, 0x74, 0x65, 0x6d, 0x4c, 0x69, 0x6e, 0x6b, 0x22, 0x20, 0x68,
  0x72, 0x65, 0x66, 0x3d, 0x22, 0x66, 0x69, 0x6c, 0x65, 0x6d, 0x61, 0x6e,
  0x61, 0x67, 0x65, 0x72, 0x22, 0x3e, 0x46, 0x49, 0x4c, 0x45, 0x20, 0x4d,
  0x41, 0x4e, 0x41, 0x47, 0x45, 0x52, 0x3c, 0x2f, 0x61, 0x3e, 0x3c, 0x2f,
  0x70, 0x3e, 0x0a, 0x3c, 0x64, 0x69, 0x76, 0x20, 0x69, 0x64, 0x3d, 0x22,
  0x74, 0x69, 0x74, 0x6c, 0x65, 0x42, 0x6f, 0x78, 0x22, 0x20, 0x63, 0x6c,
  0x61, 0x73, 0x73, 0x3d, 0x22, 0x73, 0x68, 0x61, 0x64, 0x6f, 0x77, 0x65,
  0x64, 0x42, 0x6f, 0x78, 0x22, 0x3e, 0x0a, 0x20, 0x20, 0x3c, 0x68, 0x33,
  0x20, 0x69, 0x64, 0x3d, 0x22, 0x68, 0x6f, 0x73, 0x74, 0x4e, 0x61, 0x6d,
  0x65, 0x22, 0x3e, 0x4c, 0x6f, 0x61, 0x64, 0x69, 0x6e, 0x67, 0x2e, 0x2e,
  0x2e, 0x3c, 0x2f, 0x68, 0x33, 0x3e, 0x0a, 0x20, 0x20, 0x3c, 0x70, 0x3e,
  0x4c, 0x69, 0x67, 0x68, 0x74, 0x20, 0x61, 0x6e, 0x64, 0x20, 0x74, 0x65,
  0x6d, 0x70, 0x65, 0x72, 0x61, 0x74, 0x75, 0x72, 0x65, 0x20, 0x73, 0x74,
  0x61, 0x74, 0x75, 0x73, 0x2e, 0x3c, 0x2f, 0x70, 0x3e, 0x0a, 0x3c, 0x2f,
  0x64, 0x69, 0x76, 0x3e, 0x0a, 0x3c, 0x70, 0x20, 0x63, 0x6c, 0x61, 0x73,
  0x73, 0x3d, 0x22, 0x73, 0x68, 0x61, 0x64, 0x6f, 0x77, 0x65, 0x64, 0x42,
  0x6f, 0x78, 0x22, 0x20, 0x73, 0x74, 0x79, 0x6c, 0x65, 0x3d, 0x22, 0x62,
  0x61, 0x63, 0x6b, 0x67, 0x72, 0x6f, 0x75, 0x6e, 0x64, 0x2d, 0x63, 0x6f,
  0x6c, 0x6f, 0x72, 0x3a, 0x62, 0x65, 0x69, 0x67, 0x65, 0x3b, 0x22, 0x3e,
  0x3c, 0x73, 0x70, 0x61, 0x6e, 0x20, 0x69, 0x64, 0x3d, 0x22, 0x73, 0x79,
  0x73, 0x54, 0x69, 0x6d, 0x65, 0x22, 0x3e, 0x3c, 0x2f, 0x73, 0x70, 0x61,
  0x6e, 0x3e, 0x20, 0x2d, 0x20, 0x3c, 0x73, 0x70, 0x61, 0x6e, 0x20, 0x69,
  0x64, 0x3d, 0x22, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x53, 0x74, 0x61, 0x74,
  0x75, 0x73, 0x22, 0x3e, 0x3c, 0x2f, 0x73, 0x70, 0x61, 0x6e, 0x3e, 0x3c,
  0x2f, 0x70, 0x3e, 0x0a, 0x3c, 0x64, 0x69, 0x76, 0x20, 0x69, 0x64, 0x3d,
  0x22, 0x77, 0x72, 0x61, 0x70, 0x70, 0x65, 0x72, 0x22, 0x20, 0x63, 0x6c,
  0x61, 0x73, 0x73, 0x3d, 0x22, 0x73, 0x68, 0x61, 0x64, 0x6f, 0x77, 0x65,
  0x64, 0x42, 0x6f, 0x78, 0x22, 0x3e, 0x3c, 0x64, 0x69, 0x76, 0x20, 0x63,
  0x6c, 0x61, 0x73, 0x73, 0x3d, 0x22, 0x62, 0x61, 0x72, 0x22, 0x3e, 0x3c,
  0x2f, 0x64, 0x69, 0x76, 0x3e, 0x0a, 0x20, 0x20, 0x3c, 0x64, 0x69, 0x76,
  0x20, 0x63, 0x6c, 0x61, 0x73, 0x73, 0x3d, 0x22, 0x62, 0x61, 0x72, 0x22,
  0x20, 0x73, 0x74, 0x79, 0x6c, 0x65, 0x3d, 0x22, 0x6c, 0x65, 0x66, 0x74,
  0x3a, 0x32, 0x30, 0x25, 0x3b, 0x68, 0x65, 0x69, 0x67, 0x68, 0x74, 0x3a,
  0x30, 0x25, 0x3b, 0x22, 0x3e, 0x3c, 0x2f, 0x64, 0x69, 0x76, 0x3e, 0x0a,
  0x20, 0x20, 0x3c, 0x64, 0x69, 0x76, 0x20, 0x63, 0x6c, 0x61, 0x73, 0x73,
  0x3d, 0x22, 0x62, 0x61, 0x72, 0x22, 0x20, 0x73, 0x74, 0x79, 0x6c, 0x65,
  0x3d, 0x22, 0x6c, 0x65, 0x66, 0x74, 0x3a, 0x34, 0x30, 0x25, 0x3b, 0x68,
  0x65, 0x69, 0x67, 0x68, 0x74, 0x3a, 0x30, 0x25, 0x3b, 0x22, 0x3e, 0x3c,
  0x2f, 0x64, 0x69, 0x76, 0x3e, 0x0a, 0x20, 0x20, 0x3c, 0x64, 0x69, 0x76,
  0x20, 0x63, 0x6c, 0x61, 0x73, 0x73, 0x3d, 0x22, 0x62, 0x61, 0x72, 0x22,
  0x20, 0x73, 0x74, 0x79, 0x6c, 0x65, 0x3d, 0x22, 0x6c, 0x65, 0x66, 0x74,
  0x3a, 0x36, 0x30, 0x25, 0x3b, 0x68, 0x65, 0x69, 0x67, 0x68, 0x74, 0x3a,
  0x30, 0x25, 0x3b, 0x22, 0x3e, 0x3c, 0x2f, 0x64, 0x69, 0x76, 0x3e, 0x0a,
  0x20, 0x20, 0x3c, 0x64, 0x69, 0x76, 0x20, 0x63, 0x6c, 0x61, 0x73, 0x73,
  0x3d, 0x22, 0x62, 0x61, 0x72, 0x22, 0x20, 0x73, 0x74, 0x79, 0x6c, 0x65,
  0x3d, 0x22, 0x6c, 0x65, 0x66, 0x74, 0x3a, 0x38, 0x30, 0x25, 0x3b, 0x68,
  0x65, 0x69, 0x67, 0x68, 0x74, 0x3a, 0x30, 0x25, 0x3b, 0x22, 0x3e, 0x3c,
  0x2f, 0x64, 0x69, 0x76, 0x3e, 0x0a, 0x20, 0x20, 0x3c, 0x64, 0x69, 0x76,
  0x20, 0x63, 0x6c, 0x61, 0x73, 0x73, 0x3d, 0x22, 0x70, 0x63, 0x74, 0x22,
  0x20, 0x73, 0x74, 0x79, 0x6c, 0x65, 0x3d, 0x22, 0x6c, 0x65, 0x66, 0x74,
  0x3a, 0x30, 0x3b, 0x62, 0x6f, 0x74, 0x74, 0x6f, 0x6d, 0x3a, 0x30, 0x3b,
  0x22, 0x3e, 0x3c, 0x70, 0x3e, 0x30, 0x25, 0x3c, 0x2f, 0x70, 0x3e, 0x3c,
  0x2f, 0x64, 0x69, 0x76, 0x3e, 0x0a, 0x20, 0x20, 0x3c, 0x64, 0x69, 0x76,
  0x20, 0x63, 0x6c, 0x61, 0x73, 0x73, 0x3d, 0x22, 0x70, 0x63, 0x74, 0x22,
  0x20, 0x73, 0x74, 0x79, 0x6c, 0x65, 0x3d, 0x22, 0x6c, 0x65, 0x66, 0x74,
  0x3a, 0x32, 0x30, 0x25, 0x3b, 0x62, 0x6f, 0x74, 0x74, 0x6f, 0x6d, 0x3a,
  0x30, 0x3b, 0x22, 0x3e, 0x3c, 0x70, 0x3e, 0x30, 0x25, 0x3c, 0x2f, 0x70,
  0x3e, 0x3c, 0x2f, 0x64, 0x69, 0x76, 0x3e, 0x0a, 0x20, 0x20, 0x3c, 0x64,
  0x69, 0x76, 0x20, 0x63, 0x6c, 0x61, 0x73, 0x73, 0x3d, 0x22, 0x70, 0x63,
  0x74, 0x22, 0x20, 0x73, 0x74, 0x79, 0x6c, 0x65, 0x3d, 0x22, 0x6c, 0x65,
  0x66, 0x74, 0x3a, 0x34, 0x30, 0x25, 0x3b, 0x62, 0x6f, 0x74, 0x74, 0x6f,
  0x6d, 0x3a, 0x30, 0x3b, 0x22, 0x3e, 0x3c, 0x70, 0x3e, 0x30, 0x25, 0x3c,
  0x2f, 0x70, 0x3e, 0x3c, 0x2f, 0x64, 0x69, 0x76, 0x3e, 0x0a, 0x20, 0x20,
  0x3c, 0x64, 0x69, 0x76, 0x20, 0x63, 0x6c, 0x61, 0x73, 0x73, 0x3d, 0x22,
  0x70, 0x63, 0x74, 0x22, 0x20, 0x73, 0x74, 0x79, 0x6c, 0x65, 0x3d, 0x22,
  0x6c, 0x65, 0x66, 0x74, 0x3a, 0x36, 0x30, 0x25, 0x3b, 0x62, 0x6f, 0x74,
  0x74, 0x6f, 0x6d, 0x3a, 0x30, 0x3b, 0x22, 0x3e, 0x3c, 0x70, 0x3e, 0x30,
  0x25, 0x3c, 0x2f, 0x70, 0x3e, 0x3c, 0x2f, 0x64, 0x69, 0x76, 0x3e, 0x0a,
  0x20, 0x20, 0x3c, 0x64, 0x69, 0x76, 0x20, 0x63, 0x6c, 0x61, 0x73, 0x73,
  0x3d, 0x22, 0x70, 0x63, 0x74, 0x22, 0x20, 0x73, 0x74, 0x79, 0x6c, 0x65,
  0x3d, 0x22, 0x6c, 0x65, 0x66, 0x74, 0x3a, 0x38, 0x30, 0x25, 0x3b, 0x62,
  0x6f, 0x74, 0x74, 0x6f, 0x6d, 0x3a, 0x30, 0x3b, 0x22, 0x3e, 0x3c, 0x70,
  0x3e, 0x30, 0x25, 0x3c, 0x2f, 0x70, 0x3e, 0x3c, 0x2f, 0x64, 0x69, 0x76,
  0x3e, 0x0a, 0x20, 0x20, 0x3c, 0x64, 0x69, 0x76, 0x20, 0x63, 0x6c, 0x61,
  0x73, 0x73, 0x3d, 0x22, 0x6e, 0x61, 0x6d, 0x65, 0x22, 0x20, 0x73, 0x74,
  0x79, 0x6c, 0x65, 0x3d, 0x22, 0x6c, 0x65, 0x66, 0x74, 0x3a, 0x30, 0x3b,
  0x74, 0x6f, 0x70, 0x3a, 0x30, 0x3b, 0x22, 0x3e, 0x3c, 0x70, 0x3e, 0x31,
  0x3c, 0x2f, 0x70, 0x3e, 0x3c, 0x2f, 0x64, 0x69, 0x76, 0x3e, 0x0a, 0x20,
  0x20, 0x3c, 0x64, 0x69, 0x76, 0x20, 0x63, 0x6c, 0x61, 0x73, 0x73, 0x3d,
  0x22, 0x6e, 0x61, 0x6d, 0x65, 0x22, 0x20, 0x73, 0x74, 0x79, 0x6c, 0x65,
  0x3d, 0x22, 0x6c, 0x65, 0x66, 0x74, 0x3a, 0x32, 0x30, 0x25, 0x3b, 0x74,
  0x6f, 0x70, 0x3a, 0x30, 0x3b, 0x22, 0x3e, 0x3c, 0x70, 0x3e, 0x32, 0x3c,
  0x2f, 0x70, 0x3e, 0x3c, 0x2f, 0x64, 0x69, 0x76, 0x3e, 0x0a, 0x20, 0x20,
  0x3c, 0x64, 0x69, 0x76, 0x20, 0x63, 0x6c, 0x61, 0x73, 0x73, 0x3d, 0x22,
  0x6e, 0x61, 0x6d, 0x65, 0x22, 0x20, 0x73, 0x74, 0x79, 0x6c, 0x65, 0x3d,
  0x22, 0x6c, 0x65, 0x66, 0x74, 0x3a, 0x34, 0x30, 0x25, 0x3b, 0x74, 0x6f,
  0x70, 0x3a, 0x30, 0x3b, 0x22, 0x3e, 0x3c, 0x70, 0x3e, 0x33, 0x3c, 0x2f,
  0x70, 0x3e, 0x3c, 0x2f, 0x64, 0x69, 0x76, 0x3e, 0x0a, 0x20, 0x20, 0x3c,
  0x64, 0x69, 0x76, 0x20, 0x63, 0x6c, 0x61, 0x73, 0x73, 0x3d, 0x22, 0x6e,
  0x61, 0x6d, 0x65, 0x22, 0x20, 0x73, 0x74, 0x79, 0x6c, 0x65, 0x3d, 0x22,
  0x6c, 0x65, 0x66, 0x74, 0x3a, 0x36, 0x30, 0x25, 0x3b, 0x74, 0x6f, 0x70,
  0x3a, 0x30, 0x3b, 0x22, 0x3e, 0x3c, 0x70, 0x3e, 0x34, 0x3c, 0x2f, 0x70,
  0x3e, 0x3c, 0x2f, 0x64, 0x69, 0x76, 0x3e, 0x0a, 0x20, 0x20, 0x3c, 0x64,
  0x69, 0x76, 0x20, 0x63, 0x6c, 0x61, 0x73, 0x73, 0x3d, 0x22, 0x6e, 0x61,
  0x6d, 0x65, 0x22, 0x20, 0x73, 0x74, 0x79, 0x6c, 0x65, 0x3d, 0x22, 0x6c,
  0x65, 0x66, 0x74, 0x3a, 0x38, 0x30, 0x25, 0x3b, 0x74, 0x6f, 0x70, 0x3a,
  0x30, 0x3b, 0x22, 0x3e, 0x3c, 0x70, 0x3e, 0x35, 0x3c, 0x2f, 0x70, 0x3e,
  0x3c, 0x2f, 0x64, 0x69, 0x76, 0x3e, 0x0a, 0x3c, 0x73, 0x63, 0x72, 0x69,
  0x70, 0x74, 0x3e, 0x0a, 0x0a, 0x76, 0x61, 0x72, 0x20, 0x63, 0x68, 0x61,
  0x6e, 0x6e, 0x65, 0x6c, 0x4e, 0x61, 0x6d, 0x65, 0x73, 0x3b, 0x0a, 0x76,
  0x61, 0x72, 0x20, 0x63, 0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x43, 0x6f,
  0x6c, 0x6f, 0x72, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x20, 0x72, 0x65, 0x70,
  0x65, 0x61, 0x74, 0x54, 0x69, 0x6d, 0x65, 0x72, 0x3b, 0x0a, 0x0a, 0x66,
  0x75, 0x6e, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x67, 0x65, 0x74, 0x43,
  0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x4e, 0x61, 0x6d, 0x65, 0x73, 0x28,
  0x29, 0x7b, 0x0a, 0x20, 0x20, 0x24, 0x2e, 0x67, 0x65, 0x74, 0x28, 0x20,
  0x22, 0x2f, 0x63, 0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x6e, 0x61, 0x6d,
  0x65, 0x73, 0x2e, 0x74, 0x78, 0x74, 0x22, 0x20, 0x29, 0x0a, 0x20, 0x20,
  0x20, 0x20, 0x2e, 0x64, 0x6f, 0x6e, 0x65, 0x28, 0x66, 0x75, 0x6e, 0x63,
  0x74, 0x69, 0x6f, 0x6e, 0x28, 0x20, 0x64, 0x61, 0x74, 0x61, 0x20, 0x29,
  0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x76, 0x61, 0x72, 0x20,
  0x63, 0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x4e, 0x61, 0x6d, 0x65, 0x73,
  0x20, 0x3d, 0x20, 0x64, 0x61, 0x74, 0x61, 0x2e, 0x73, 0x70, 0x6c, 0x69,
  0x74, 0x28, 0x22, 0x5c, 0x6e, 0x22, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x63, 0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x4e, 0x61,
  0x6d, 0x65, 0x73, 0x2e, 0x66, 0x6f, 0x72, 0x45, 0x61, 0x63, 0x68, 0x28,
  0x20, 0x66, 0x75, 0x6e, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x28, 0x20, 0x69,
  0x74, 0x65, 0x6d, 0x2c, 0x20, 0x69, 0x6e, 0x64, 0x65, 0x78, 0x20, 0x29,
  0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x24, 0x28,
  0x27, 0x2e, 0x6e, 0x61, 0x6d, 0x65, 0x20, 0x70, 0x27, 0x29, 0x2e, 0x65,
  0x71, 0x28, 0x69, 0x6e, 0x64, 0x65, 0x78, 0x29, 0x2e, 0x68, 0x74, 0x6d,
  0x6c, 0x28, 0x20, 0x69, 0x74, 0x65, 0x6d, 0x2e, 0x74, 0x72, 0x69, 0x6d,
  0x28, 0x29, 0x20, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x7d, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x29, 0x0a, 0x20, 0x20,
  0x20, 0x20, 0x2e, 0x66, 0x61, 0x69, 0x6c, 0x28, 0x66, 0x75, 0x6e, 0x63,
  0x74, 0x69, 0x6f, 0x6e, 0x28, 0x29, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x63, 0x6f, 0x6e, 0x73, 0x6f, 0x6c, 0x65, 0x2e, 0x6c, 0x6f,
  0x67, 0x28, 0x22, 0x66, 0x61, 0x69, 0x6c, 0x65, 0x64, 0x20, 0x67, 0x65,
  0x74, 0x74, 0x69, 0x6e, 0x67, 0x20, 0x63, 0x68, 0x61, 0x6e, 0x6e, 0x65,
  0x6c, 0x6e, 0x61, 0x6d, 0x65, 0x73, 0x22, 0x29, 0x3b, 0x0a, 0x20, 0x20,
  0x20, 0x20, 0x7d, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x2e, 0x61, 0x6c,
  0x77, 0x61, 0x79, 0x73, 0x28, 0x66, 0x75, 0x6e, 0x63, 0x74, 0x69, 0x6f,
  0x6e, 0x28, 0x29, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x75,
  0x70, 0x64, 0x61, 0x74, 0x65, 0x42, 0x61, 0x72, 0x67, 0x72, 0x61, 0x70,
  0x68, 0x28, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x72,
  0x65, 0x70, 0x65, 0x61, 0x74, 0x54, 0x69, 0x6d, 0x65, 0x72, 0x20, 0x3d,
  0x20, 0x73, 0x65, 0x74, 0x49, 0x6e, 0x74, 0x65, 0x72, 0x76, 0x61, 0x6c,
  0x28, 0x20, 0x75, 0x70, 0x64, 0x61, 0x74, 0x65, 0x42, 0x61, 0x72, 0x67,
  0x72, 0x61, 0x70, 0x68, 0x2c, 0x20, 0x31, 0x30, 0x30, 0x30, 0x20, 0x29,
  0x3b, 0x20, 0x20, 0x2f, 0x2f, 0x64, 0x6f, 0x6e, 0x65, 0x20, 0x77, 0x69,
  0x74, 0x68, 0x20, 0x67, 0x65, 0x74, 0x74, 0x69, 0x6e, 0x67, 0x20, 0x73,
  0x74, 0x75, 0x66, 0x66, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x29, 0x3b,
  0x0a, 0x7d, 0x0a, 0x0a, 0x66, 0x75, 0x6e, 0x63, 0x74, 0x69, 0x6f, 0x6e,
  0x20, 0x67, 0x65, 0x74, 0x43, 0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x43,
  0x6f, 0x6c, 0x6f, 0x72, 0x73, 0x28, 0x29, 0x7b, 0x0a, 0x20, 0x20, 0x24,
  0x2e, 0x67, 0x65, 0x74, 0x28, 0x20, 0x22, 0x2f, 0x63, 0x68, 0x61, 0x6e,
  0x6e, 0x65, 0x6c, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x73, 0x2e, 0x74, 0x78,
  0x74, 0x22, 0x20, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x2e, 0x64, 0x6f,
  0x6e, 0x65, 0x28, 0x66, 0x75, 0x6e, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x28,
  0x20, 0x64, 0x61, 0x74, 0x61, 0x20, 0x29, 0x7b, 0x0a, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x63, 0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x43, 0x6f,
  0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x64, 0x61, 0x74, 0x61, 0x2e, 0x73,
  0x70, 0x6c, 0x69, 0x74, 0x28, 0x22, 0x5c, 0x6e, 0x22, 0x29, 0x3b, 0x0a,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x63, 0x68, 0x61, 0x6e, 0x6e, 0x65,
  0x6c, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x2e, 0x66, 0x6f, 0x72, 0x45, 0x61,
  0x63, 0x68, 0x28, 0x20, 0x66, 0x75, 0x6e, 0x63, 0x74, 0x69, 0x6f, 0x6e,
  0x28, 0x20, 0x69, 0x74, 0x65, 0x6d, 0x2c, 0x20, 0x69, 0x6e, 0x64, 0x65,
  0x78, 0x20, 0x29, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x24, 0x28, 0x27, 0x2e, 0x62, 0x61, 0x72, 0x27, 0x29, 0x2e, 0x65,
  0x71, 0x28, 0x69, 0x6e, 0x64, 0x65, 0x78, 0x29, 0x2e, 0x63, 0x73, 0x73,
  0x28, 0x20, 0x7b, 0x20, 0x27, 0x62, 0x61, 0x63, 0x6b, 0x67, 0x72, 0x6f,
  0x75, 0x6e, 0x64, 0x2d, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x27, 0x3a, 0x20,
  0x69, 0x74, 0x65, 0x6d, 0x2c, 0x20, 0x27, 0x62, 0x6f, 0x78, 0x2d, 0x73,
  0x68, 0x61, 0x64, 0x6f, 0x77, 0x27, 0x3a, 0x20, 0x22, 0x30, 0x70, 0x78,
  0x20, 0x30, 0x70, 0x78, 0x20, 0x34, 0x33, 0x70, 0x78, 0x20, 0x30, 0x70,
  0x78, 0x20, 0x22, 0x20, 0x2b, 0x20, 0x69, 0x74, 0x65, 0x6d, 0x20, 0x7d,
  0x20, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x29,
  0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20,
  0x2e, 0x66, 0x61, 0x69, 0x6c, 0x28, 0x66, 0x75, 0x6e, 0x63, 0x74, 0x69,
  0x6f, 0x6e, 0x28, 0x29, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x63, 0x6f, 0x6e, 0x73, 0x6f, 0x6c, 0x65, 0x2e, 0x6c, 0x6f, 0x67, 0x28,
  0x22, 0x66, 0x61, 0x69, 0x6c, 0x65, 0x64, 0x20, 0x67, 0x65, 0x74, 0x74,
  0x69, 0x6e, 0x67, 0x20, 0x63, 0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x63,
  0x6f, 0x6c, 0x6f, 0x72, 0x73, 0x22, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20,
  0x20, 0x7d, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x2e, 0x61, 0x6c, 0x77,
  0x61, 0x79, 0x73, 0x28, 0x66, 0x75, 0x6e, 0x63, 0x74, 0x69, 0x6f, 0x6e,
  0x28, 0x29, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x67, 0x65,
  0x74, 0x43, 0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x4e, 0x61, 0x6d, 0x65,
  0x73, 0x28, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x29, 0x3b,
  0x0a, 0x7d, 0x0a, 0x0a, 0x24, 0x28, 0x20, 0x64, 0x6f, 0x63, 0x75, 0x6d,
  0x65, 0x6e, 0x74, 0x20, 0x29, 0x2e, 0x72, 0x65, 0x61, 0x64, 0x79, 0x28,
  0x20, 0x66, 0x75, 0x6e, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x28, 0x29, 0x20,
  0x7b, 0x0a, 0x0a, 0x20, 0x20, 0x2f, 0x2f, 0x64, 0x69, 0x73, 0x61, 0x62,
  0x6c, 0x65, 0x20, 0x74, 0x68, 0x65, 0x20, 0x6c, 0x69, 0x6e, 0x6b, 0x73,
  0x0a, 0x20, 0x20, 0x24, 0x28, 0x20, 0x27, 0x61, 0x27, 0x20, 0x29, 0x2e,
  0x62, 0x69, 0x6e, 0x64, 0x28, 0x20, 0x27, 0x63, 0x6c, 0x69, 0x63, 0x6b,
  0x27, 0x2c, 0x20, 0x66, 0x75, 0x6e, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x28,
  0x20, 0x65, 0x20, 0x29, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x65, 0x2e,
  0x70, 0x72, 0x65, 0x76, 0x65, 0x6e, 0x74, 0x44, 0x65, 0x66, 0x61, 0x75,
  0x6c, 0x74, 0x28, 0x29, 0x3b, 0x20, 0x2f, 0x2f, 0x77, 0x69, 0x6c, 0x6c,
  0x20, 0x62, 0x65, 0x20, 0x75, 0x6e, 0x62, 0x6f, 0x75, 0x6e, 0x64, 0x20,
  0x62, 0x79, 0x20, 0x66, 0x69, 0x72, 0x73, 0x74, 0x20, 0x63, 0x61, 0x6c,
  0x6c, 0x20, 0x74, 0x6f, 0x20, 0x75, 0x70, 0x64, 0x61, 0x74, 0x65, 0x42,
  0x61, 0x72, 0x47, 0x72, 0x61, 0x70, 0x68, 0x0a, 0x20, 0x20, 0x7d, 0x29,
  0x3b, 0x0a, 0x0a, 0x20, 0x20, 0x2f, 0x2f, 0x20, 0x67, 0x65, 0x74, 0x20,
  0x74, 0x68, 0x65, 0x20, 0x68, 0x6f, 0x73, 0x74, 0x6e, 0x61, 0x6d, 0x65,
  0x2c, 0x20, 0x74, 0x68, 0x65, 0x6e, 0x20, 0x74, 0x68, 0x65, 0x20, 0x63,
  0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x73,
  0x20, 0x61, 0x6e, 0x64, 0x20, 0x66, 0x69, 0x6e, 0x61, 0x6c, 0x6c, 0x79,
  0x20, 0x74, 0x68, 0x65, 0x20, 0x63, 0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c,
  0x6e, 0x61, 0x6d, 0x65, 0x73, 0x0a, 0x20, 0x20, 0x24, 0x2e, 0x67, 0x65,
  0x74, 0x28, 0x20, 0x22, 0x2f, 0x61, 0x70, 0x69, 0x2f, 0x68, 0x6f, 0x73,
  0x74, 0x6e, 0x61, 0x6d, 0x65, 0x22, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20,
  0x2e, 0x64, 0x6f, 0x6e, 0x65, 0x28, 0x66, 0x75, 0x6e, 0x63, 0x74, 0x69,
  0x6f, 0x6e, 0x28, 0x20, 0x64, 0x61, 0x74, 0x61, 0x20, 0x29, 0x7b, 0x0a,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x24, 0x28, 0x20, 0x22, 0x23, 0x68,
  0x6f, 0x73, 0x74, 0x4e, 0x61, 0x6d, 0x65, 0x22, 0x20, 0x29, 0x2e, 0x68,
  0x74, 0x6d, 0x6c, 0x28, 0x20, 0x64, 0x61, 0x74, 0x61, 0x20, 0x2b, 0x20,
  0x22, 0x20, 0x48, 0x4f, 0x4d, 0x45, 0x20, 0x50, 0x41, 0x47, 0x45, 0x22,
  0x20, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x64, 0x6f,
  0x63, 0x75, 0x6d, 0x65, 0x6e, 0x74, 0x2e, 0x74, 0x69, 0x74, 0x6c, 0x65,
  0x20, 0x3d, 0x20, 0x64, 0x61, 0x74, 0x61, 0x2e, 0x74, 0x6f, 0x55, 0x70,
  0x70, 0x65, 0x72, 0x43, 0x61, 0x73, 0x65, 0x28, 0x29, 0x3b, 0x0a, 0x20,
  0x20, 0x20, 0x20, 0x7d, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x2e, 0x66,
  0x61, 0x69, 0x6c, 0x28, 0x66, 0x75, 0x6e, 0x63, 0x74, 0x69, 0x6f, 0x6e,
  0x28, 0x29, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x63, 0x6f,
  0x6e, 0x73, 0x6f, 0x6c, 0x65, 0x2e, 0x6c, 0x6f, 0x67, 0x28, 0x22, 0x66,
  0x61, 0x69, 0x6c, 0x65, 0x64, 0x20, 0x67, 0x65, 0x74, 0x74, 0x69, 0x6e,
  0x67, 0x20, 0x68, 0x6f, 0x73, 0x74, 0x6e, 0x61, 0x6d, 0x65, 0x22, 0x29,
  0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x29, 0x0a, 0x20, 0x20, 0x20,
  0x20, 0x2e, 0x61, 0x6c, 0x77, 0x61, 0x79, 0x73, 0x28, 0x66, 0x75, 0x6e,
  0x63, 0x74, 0x69, 0x6f, 0x6e, 0x28, 0x29, 0x7b, 0x0a, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x67, 0x65, 0x74, 0x43, 0x68, 0x61, 0x6e, 0x6e, 0x65,
  0x6c, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x73, 0x28, 0x29, 0x3b, 0x0a, 0x20,
  0x20, 0x20, 0x20, 0x7d, 0x29, 0x3b, 0x0a, 0x0a, 0x2f, 0x2f, 0x65, 0x76,
  0x65, 0x6e, 0x74, 0x20, 0x68, 0x61, 0x6e, 0x64, 0x6c, 0x65, 0x72, 0x73,
  0x0a, 0x20, 0x20, 0x24, 0x28, 0x20, 0x22, 0x23, 0x77, 0x72, 0x61, 0x70,
  0x70, 0x65, 0x72, 0x22, 0x20, 0x29, 0x2e, 0x6f, 0x6e, 0x28, 0x20, 0x22,
  0x63, 0x6f, 0x6e, 0x74, 0x65, 0x78, 0x74, 0x6d, 0x65, 0x6e, 0x75, 0x22,
  0x2c, 0x20, 0x22, 0x64, 0x69, 0x76, 0x2e, 0x6e, 0x61, 0x6d, 0x65, 0x20,
  0x70, 0x22, 0x2c, 0x20, 0x66, 0x75, 0x6e, 0x63, 0x74, 0x69, 0x6f, 0x6e,
  0x28, 0x20, 0x65, 0x20, 0x29, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x65,
  0x2e, 0x70, 0x72, 0x65, 0x76, 0x65, 0x6e, 0x74, 0x44, 0x65, 0x66, 0x61,
  0x75, 0x6c, 0x74, 0x28, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x63,
  0x6f, 0x6e, 0x73, 0x6f, 0x6c, 0x65, 0x2e, 0x6c, 0x6f, 0x67, 0x28, 0x20,
  0x24, 0x28, 0x20, 0x74, 0x68, 0x69, 0x73, 0x20, 0x29, 0x2e, 0x68, 0x74,
  0x6d, 0x6c, 0x28, 0x29, 0x20, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x29,
  0x3b, 0x0a, 0x7d, 0x29, 0x3b, 0x0a, 0x0a, 0x3c, 0x2f, 0x73, 0x63, 0x72,
  0x69, 0x70, 0x74, 0x3e, 0x0a, 0x3c, 0x2f, 0x62, 0x6f, 0x64, 0x79, 0x3e,
  0x0a, 0x3c, 0x2f, 0x68, 0x74, 0x6d, 0x6c, 0x3e, 0x0a
};
static const unsigned int index_html_len = 5949;

static const char textplainHEADER[]  = "text/plain";
static const char texthtmlHEADER[]  = "text/html";

void setupWebServer()
{
  // Set up the web server

  //home page or 'index.html'
  server.on( "/", []()
  {
    server.send_P( 200, texthtmlHEADER, index_html, index_html_len );
  });

  server.on( "/api/hostname", []()
  {
    String response = WiFi.getHostname();
    size_t response_length = response.length();
    server.setContentLength( response_length );
    server.send( 200, texthtmlHEADER, response );
  });

  server.on( "/api/setchannelcolor", []() {
    int thisChannel;
    if ( server.hasArg( "channel" ) ) {
      thisChannel = server.arg( "channel" ).toInt();
      Serial.println(thisChannel);
      if ( thisChannel < 0 || thisChannel > NUMBER_OF_CHANNELS ) {
        server.send( 400,  textplainHEADER, "Invalid channel." );
        return;
      }
    }
    if ( server.hasArg( "newcolor" ) ) {
      String newColor = "#" + server.arg( "newcolor" );
      newColor.trim();
      channel[thisChannel].color = newColor;
      saveChannelColors();
      server.send( 200, textplainHEADER , "Success" );
      return;
    }
    server.send( 400, textplainHEADER , "Invalid input." );
  });

  server.on( "/api/status", []()
  {
    String HTML;
    for ( byte thisChannel = 0; thisChannel < NUMBER_OF_CHANNELS; thisChannel++ )
    {
      HTML += String( channel[thisChannel].currentPercentage ) + ",";
    }
    time_t now;
    struct tm timeinfo;
    time(&now);
    localtime_r(&now, &timeinfo);
    HTML +=  String( timeinfo.tm_hour) + ":" + String( timeinfo.tm_min ) + ":" + String( timeinfo.tm_sec ) + ",debug unit";
    server.setContentLength( HTML.length() );
    server.send( 200, textplainHEADER, HTML );
  });

  server.on( "/channelcolors.txt", []()
  {
    String response = "red\ngreen\nblue\n\white\nwhite-blue\n";
    server.setContentLength( response.length() );
    server.send( 200, textplainHEADER, response );
  });

  server.on( "/channelnames.txt", []()
  {
    String response = "rood\ngroen\nblauw\n\wit\nwit-blauw\n";
    server.setContentLength( response.length()  );
    server.send( 200, textplainHEADER, response );
  });

  //start the web server
  server.begin();
  Serial.println("TCP server started");
}


