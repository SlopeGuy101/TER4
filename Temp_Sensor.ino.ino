#include <dht.h>

#define dht_pin A0

dht DHT;

void setup() {
  Serial.begin(9600);
}

void loop() {
  DHT.read11(dht_pin);
  Serial.println(DHT.temperature);
  exit(0);
}
