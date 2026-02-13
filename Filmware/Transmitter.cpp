#include <RadioLib.h>


#define PIN_DIO1 17
#define PIN_NSS  21
#define PIN_BUSY 22
#define PIN_NRST 35


SX1262 radio = new Module(PIN_NSS, PIN_DIO1, PIN_NRST, PIN_BUSY);

void setup() {
  Serial.begin(115200);
  delay(2000); 


  int state = radio.begin(868.0, 125.0, 7, 5, 0x12, 14);

  if(state != RADIOLIB_ERR_NONE) {
    Serial.println("Radio initialization failed!");
    while(true); 
  }

  Serial.println("Transmitter ready");
}

void loop() {

  Serial.println("Sending message...");

  int state = radio.transmit("Hello world to the second module");

  if(state == RADIOLIB_ERR_NONE) {
    Serial.println("Message sent successfully");
  } else {
    Serial.print("TX error, code: ");
    Serial.println(state);
  }

  delay(30000);
}