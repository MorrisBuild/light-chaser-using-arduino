int leds[] = {2,3,4,5,6,7,8,9,10,11,12,13};

void setup() {
  for(int i=0;i<12;i++) pinMode(leds[i], OUTPUT);
}

void loop() {

  for(int i=5;i>=0;i--) {

    digitalWrite(leds[i], HIGH);
    digitalWrite(leds[11-i], HIGH);

    delay(120);
  }

  delay(250);

  for(int i=0;i<12;i++)
    digitalWrite(leds[i], LOW);
}
