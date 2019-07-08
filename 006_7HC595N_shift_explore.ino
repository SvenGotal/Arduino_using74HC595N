#define LATCH_PIN 8
#define CLOCK_PIN 12
#define DATA_PIN 11


void setup() {
  // put your setup code here, to run once:
  pinMode(LATCH_PIN, OUTPUT);
  pinMode(CLOCK_PIN, OUTPUT);
  pinMode(DATA_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LATCH_PIN, LOW);
  delay(1000);
  shiftOut(DATA_PIN, CLOCK_PIN, LSBFIRST, 5);

  digitalWrite(LATCH_PIN, HIGH);
  delay(1000);
}
