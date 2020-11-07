void check_relay() {
  int relayPin1 = 6;
  int relayPin2 = 7;
  int relayPin3 = 8;
  int relayPin4 = 9;

  pinMode(relayPin1, OUTPUT);
  pinMode(relayPin2, OUTPUT);
  pinMode(relayPin3, OUTPUT);
  pinMode(relayPin4, OUTPUT);

  digitalWrite(relayPin1, HIGH);
  digitalWrite(relayPin2, HIGH);
  digitalWrite(relayPin3, HIGH);
  digitalWrite(relayPin4, HIGH);

  Serial.println("function Check relay is Start");
  
  delay(1000);
  digitalWrite(relayPin1, LOW);
  delay(1000);
  digitalWrite(relayPin1, HIGH);
  Serial.println("relayPin1 [ CHECK ]");
  delay(1000);
  digitalWrite(relayPin2, LOW);
  delay(1000);
  digitalWrite(relayPin2, HIGH);
  Serial.println("relayPin2 [ CHECK ]");
  delay(1000);
  digitalWrite(relayPin3, LOW);
  delay(1000);
  digitalWrite(relayPin3, HIGH);
  Serial.println("relayPin3 [ CHECK ]");
  delay(1000);
  digitalWrite(relayPin4, LOW);
  delay(1000);
  digitalWrite(relayPin4, HIGH);
  Serial.println("relayPin4 [ CHECK ]");

  delay(1000);
  digitalWrite(relayPin1, HIGH);
  digitalWrite(relayPin2, HIGH);
  digitalWrite(relayPin3, HIGH);
  digitalWrite(relayPin4, HIGH);
}
