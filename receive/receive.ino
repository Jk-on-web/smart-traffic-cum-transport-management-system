#include <RH_ASK.h>
#include <SPI.h>

RH_ASK driver;

const int ledPin = 13;
unsigned long lastReceivedTime = 0;
const unsigned long signalTimeout = 1000; // 1 second

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  if (!driver.init()) {
    Serial.println("Receiver init failed");
  }
}

void loop() {
  uint8_t buf[10];
  uint8_t buflen = sizeof(buf);

  if (driver.recv(buf, &buflen)) {
    buf[buflen] = '\0';  // Null-terminate the received message
    String msg = String((char*)buf);
    Serial.print("Received: ");
    Serial.println(msg);

    if (msg == "ok") {
      lastReceivedTime = millis();
    }
  }

  // Check if "ok" was received recently
  if (millis() - lastReceivedTime < signalTimeout) {
    digitalWrite(ledPin, HIGH);  // Transmitter in range
  } else {
    digitalWrite(ledPin, LOW);   // Transmitter out of range
  }
}
