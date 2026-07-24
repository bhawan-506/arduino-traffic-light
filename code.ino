// ── Pin Definitions ───────────────────────
int redPin    = 13;
int yellowPin = 12;
int greenPin  = 11;

// ── Setup ─────────────────────────────────
void setup() {
  pinMode(redPin,    OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin,  OUTPUT);
  Serial.begin(9600);
  Serial.println("Traffic Light Ready");
}

// ── LED Control Functions ──────────────────
void allOff() {
  digitalWrite(redPin,    LOW);
  digitalWrite(yellowPin, LOW);
  digitalWrite(greenPin,  LOW);
}

void greenPhase() {
  allOff();
  digitalWrite(greenPin, HIGH);
  Serial.println("GREEN  - Go");
  delay(5000);              // 5 seconds
}

void yellowPhase() {
  allOff();
  digitalWrite(yellowPin, HIGH);
  Serial.println("YELLOW - Slow Down");
  delay(2000);              // 2 seconds
}

void redPhase() {
  allOff();
  digitalWrite(redPin, HIGH);
  Serial.println("RED    - Stop");
  delay(5000);              // 5 seconds
}

// ── Main Loop ─────────────────────────────
void loop() {
  greenPhase();
  yellowPhase();
  redPhase();
}