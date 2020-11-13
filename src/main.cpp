#include <Arduino.h>

extern "C" {
  #include "user_interface.h"
}

void setup() {
  Serial.begin(115200);

  byte _rtcStore;

  Serial.print("Vor 1Read: ");
  Serial.println((_rtcStore));
  system_rtc_mem_read(64, _rtcStore, 1);
  Serial.print("Nach 2Read: ");
  Serial.println(_rtcStore);
  _rtcSore = 33
  system_rtc_mem_write(64, _rtcStore, 1);
  Serial.print("Vor 2Read: ");
  Serial.println(_rtcStore);
  system_rtc_mem_read(64, _rtcStore, 1);
    Serial.print("Nach 2Read: ");
  Serial.println(_rtcStore);

 _rtcStore = 66
  system_rtc_mem_write(64, _rtcStore, 1);
  

}

void loop() {}




