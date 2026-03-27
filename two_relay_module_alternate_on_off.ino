int relay1 = 26;
int relay2 = 27;

void setup() {
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  Serial.begin(115200);
}

void loop() {

  // Condition 1
  digitalWrite(relay1, LOW);   // ON
  digitalWrite(relay2, HIGH);  // OFF
  Serial.println("Relay1 ON | Relay2 OFF");
  delay(2000);

  // Condition 2
  digitalWrite(relay1, HIGH);  // OFF
  digitalWrite(relay2, LOW);   // ON
  Serial.println("Relay1 OFF | Relay2 ON");
  delay(2000);
}