#include "HomeSpan.h"

void setup() {

Serial.begin(115200);

homeSpan.setPairingCode("12345678");
homeSpan.begin(Catergory::Bridges,"Kitchen/Hall Relays");

// Kitchen Relay
new SpanAccessory();
  new Service::AccessoryInformation();
    new Characteristic::Identify();
  new my_relay(32); // input pin number here


// Hall Relay
new SpanAccessory();
  new Service::AccessoryInformation();
    new Characteristic::Identify();
  new my_relay(25); // input pin number here
}

void loop() {

  homespan.poll();
}
