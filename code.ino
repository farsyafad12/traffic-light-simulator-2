// ================================
// Traffic Light 2 Arah
// Animasi seperti lampu lalu lintas asli
// ================================

const int merahA = 2;
const int kuningA = 3;
const int hijauA = 4;

const int merahB = 5;
const int kuningB = 6;
const int hijauB = 7;

void setup() {
  pinMode(merahA, OUTPUT);
  pinMode(kuningA, OUTPUT);
  pinMode(hijauA, OUTPUT);

  pinMode(merahB, OUTPUT);
  pinMode(kuningB, OUTPUT);
  pinMode(hijauB, OUTPUT);
}

void loop() {

  digitalWrite(hijauA, HIGH);
  digitalWrite(kuningA, LOW);
  digitalWrite(merahA, LOW);

  digitalWrite(merahB, HIGH);
  digitalWrite(kuningB, LOW);
  digitalWrite(hijauB, LOW);

  delay(5000);

  digitalWrite(hijauA, LOW);
  digitalWrite(kuningA, HIGH);

  delay(2000);

  digitalWrite(kuningA, LOW);
  digitalWrite(merahA, HIGH);

  digitalWrite(merahB, HIGH);
  digitalWrite(kuningB, HIGH);

  delay(1000);

  digitalWrite(merahB, LOW);
  digitalWrite(kuningB, LOW);
  digitalWrite(hijauB, HIGH);

  delay(5000);

  digitalWrite(hijauB, LOW);
  digitalWrite(kuningB, HIGH);

  delay(2000);

  digitalWrite(kuningB, LOW);
  digitalWrite(merahB, HIGH);

  digitalWrite(merahA, HIGH);
  digitalWrite(kuningA, HIGH);

  delay(1000);

  digitalWrite(merahA, LOW);
  digitalWrite(kuningA, LOW);
  digitalWrite(hijauA, HIGH);

  delay(5000);
}