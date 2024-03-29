void relay_config() {
  Serial.println("Function relay_config is Start...");
  
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
  
  delay(1000);
  digitalWrite(relayPin1, LOW); //เปิดน้ำ 10 นาที
  Serial.println("relayPin1 is LOW");
  delay(420000);//420000
  digitalWrite(relayPin1, HIGH); //ปิดน้ำ 10 นาที
  Serial.println("relayPin1 is HIGH");
  delay(1000);//1000
  Serial.print("\n");

  delay(1000);
  digitalWrite(relayPin2, LOW); //เปิดน้ำ 10 นาที
  Serial.println("relayPin2 is LOW");
  delay(420000);//420000
  digitalWrite(relayPin2, HIGH); //ปิดน้ำ
  Serial.println("relayPin2 is HIGH");
  delay(1000);//1000
  Serial.print("\n");

  delay(1000);
  digitalWrite(relayPin3, LOW); //เปิดน้ำ 10 นาที
  Serial.println("relayPin3 is LOW");
  delay(420000);//420000
  digitalWrite(relayPin3, HIGH); //ปิดน้ำ
  Serial.println("relayPin3 is HIGH");
  delay(1000);//1000
  Serial.print("\n");

  delay(1000);
  digitalWrite(relayPin4, LOW); //เปิดน้ำ 10 นาที
  Serial.println("relayPin4 is LOW");
  delay(420000);//420000
  digitalWrite(relayPin4, HIGH); //ปิดน้ำ
  Serial.println("relayPin4 is HIGH");
  delay(1000);//1000
  Serial.print("\n");

  digitalWrite(relayPin1, HIGH); //ปิดน้ำ
  digitalWrite(relayPin2, HIGH); //ปิดน้ำ
  digitalWrite(relayPin3, HIGH); //ปิดน้ำ
  digitalWrite(relayPin4, HIGH); //ปิดน้ำ
}

void on_sum() {
  Serial.println("Function on_sun is Start...");
  
  int relayPin1 = 6;

  pinMode(relayPin1, OUTPUT);
  digitalWrite(relayPin1, HIGH);
  
  delay(1000);
  digitalWrite(relayPin1, LOW); //เปิดน้ำ 10 นาที
  Serial.println("relayPin1 is LOW");
  delay(420000);//420000
  digitalWrite(relayPin1, HIGH); //ปิดน้ำ 10 นาที
  Serial.println("relayPin1 is HIGH");
  delay(1000);//1000
  Serial.print("\n");

  digitalWrite(relayPin1, HIGH); //ปิดน้ำ
}

void lastday() {
  Serial.println("Function relay_config is Start...");
  
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
  
  delay(1000);
  digitalWrite(relayPin1, LOW); //เปิดน้ำ 1 นาที
  Serial.println("relayPin1 is LOW");
  delay(60000);
  digitalWrite(relayPin1, HIGH); //ปิดน้ำ 1 นาที
  Serial.println("relayPin1 is HIGH");
  delay(1000);//1000
  Serial.print("\n");

  delay(1000);
  digitalWrite(relayPin2, LOW); //เปิดน้ำ 1 นาที
  Serial.println("relayPin2 is LOW");
  delay(60000);
  digitalWrite(relayPin2, HIGH); //ปิดน้ำ
  Serial.println("relayPin2 is HIGH");
  delay(1000);//1000
  Serial.print("\n");

  delay(1000);
  digitalWrite(relayPin3, LOW); //เปิดน้ำ 1 นาที
  Serial.println("relayPin3 is LOW");
  delay(60000);
  digitalWrite(relayPin3, HIGH); //ปิดน้ำ
  Serial.println("relayPin3 is HIGH");
  delay(1000);//1000
  Serial.print("\n");

  delay(1000);
  digitalWrite(relayPin4, LOW); //เปิดน้ำ 1 นาที
  Serial.println("relayPin4 is LOW");
  delay(60000);
  digitalWrite(relayPin4, HIGH); //ปิดน้ำ
  Serial.println("relayPin4 is HIGH");
  delay(1000);//1000
  Serial.print("\n");

  digitalWrite(relayPin1, HIGH); //ปิดน้ำ
  digitalWrite(relayPin2, HIGH); //ปิดน้ำ
  digitalWrite(relayPin3, HIGH); //ปิดน้ำ
  digitalWrite(relayPin4, HIGH); //ปิดน้ำ
}
