#define SENSOR 7
#define LED 4
#define BUZZER 8

void setup() {
  pinMode(SENSOR, OUTPUT);
  pinMode(LED, OUTPUT);
  pinMode(BUZZER, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  pinMode(SENSOR, OUTPUT);
  digitalWrite(SENSOR, LOW);
  delayMicroseconds(2);
  digitalWrite(SENSOR, HIGH);
  delayMicroseconds(5);
  digitalWrite(SENSOR, LOW);

  pinMode(SENSOR, INPUT);
  long duration = pulseIn(SENSOR, HIGH);
  int distance = duration * 0.034 / 2;

  Serial.println(distance);

  if (distance < 50) {
    digitalWrite(LED, HIGH);
    tone(BUZZER, 1000);
  } else {
    digitalWrite(LED, LOW);
    noTone(BUZZER);
  }

  delay(100);
}