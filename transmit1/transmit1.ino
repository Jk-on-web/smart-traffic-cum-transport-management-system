#include <RH_ASK.h>
#include <SPI.h> // Required even if not used directly

RH_ASK driver;

void setup() {
  Serial.begin(9600);
  if (!driver.init()) {
    Serial.println("Transmitter init failed");
  }
}

void loop() {
  const char *msg = "E";
  driver.send((uint8_t *)msg, strlen(msg));
  driver.waitPacketSent();
  Serial.println("Sent: ok");
  delay(200);  // Send every 200ms
}
