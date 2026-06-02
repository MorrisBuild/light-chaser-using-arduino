int leds[] = {2,3,4,5,6,7,8,9,10,11,12,13};

void setup() {
  randomSeed(analogRead(A0));

  for(int i=0;i<12;i++)
    pinMode(leds[i], OUTPUT);
}

void loop() {

  int r = random(0,12);

  digitalWrite(leds[r], HIGH);

  delay(100);

  digitalWrite(leds[r], LOW);
}
