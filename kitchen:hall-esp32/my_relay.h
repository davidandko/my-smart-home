struct my_relay : Service::Switch {
  int relay_pin;
  SpanCharacteristic *power;


  my_relay(int relay_pin) : Service::Switch() { // constructor for inputing pin number
    power = new Characteristic::On();
    this->relay_pin = relay_pin;
    pinMode(relay_pin,OUTPUT);
    }
  bool update_state(){
    digitalWrite(relay_pin,power->getNewVal());
    return(true);
  }

}