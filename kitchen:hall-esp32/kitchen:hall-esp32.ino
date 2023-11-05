#include "HomeSpan.h"

void setup() {

Serial.begin(115200);

homeSpan.setPairingCode("12345678");
homeSpan.begin(Catergory::Bridges,"Kitchen/Hall Relays");

// Kitchen Relay
new SpanAccessory();
  new Service::AccessoryInformation();
    new Characteristic::Identify();
  new my_relay(13); // input pin number here


// Hall Relay
new SpanAccessory();
  new Service::AccessoryInformation();
    new Characteristic::Identify();
  new my_relay(15); // input pin number here
}

void loop() {

  homespan.poll();
}
