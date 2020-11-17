#include "Check_relay.h" //Add Other Function File
#include "relay_config.h"

#include <Wire.h>
#include <Time.h>
#include <TimeLib.h>
#include <DS1307RTC.h>

#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 // pixel ความกว้าง
#define SCREEN_HEIGHT 32 // pixel ความสูง 

// กำหนดขาต่อ I2C กับจอ OLED
#define OLED_RESET     4 // Reset pin # (or -1 if sharing Arduino reset pin)
Adafruit_SSD1306 OLED(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

int relayPin1 = 6;
int relayPin2 = 7;
int relayPin3 = 8;
int relayPin4 = 9;

int var = 0; // ตัวแปรสำหรับทดสอบแสดงผล
void setup() {
  Serial.begin(9600);

  pinMode(relayPin1, OUTPUT);
  pinMode(relayPin2, OUTPUT);
  pinMode(relayPin3, OUTPUT);
  pinMode(relayPin4, OUTPUT);

  digitalWrite(relayPin1, HIGH);
  digitalWrite(relayPin2, HIGH);
  digitalWrite(relayPin3, HIGH);
  digitalWrite(relayPin4, HIGH);

  check_relay(); //เรียกใช้ Function check_relay(); จาก check_relay.h

  if (!OLED.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { // สั่งให้จอ OLED เริ่มทำงานที่ Address 0x3C
    Serial.println("SSD1306 allocation failed");
  } else {
    Serial.println("System Start");
  }

}

void loop() {

  tmElements_t tm;

  OLED.clearDisplay(); // ลบภาพในหน้าจอทั้งหมด
  OLED.setTextColor(WHITE, BLACK);  //กำหนดข้อความสีขาว ฉากหลังสีดำ
  OLED.setCursor(0, 0); // กำหนดตำแหน่ง x,y ที่จะแสดงผล
  OLED.setTextSize(2); // กำหนดขนาดตัวอักษร
  OLED.print(tm.Hour);
  OLED.print(':');
  OLED.print(tm.Minute);
  OLED.print(':');
  OLED.print(tm.Second);

  //  if (tm.Hour == 6 and tm.Minute == 0) {
  //    relay_config();
  //  }

  if (tm.Hour == 7 and tm.Minute == 0) {
    relay_config();
  } else {

    OLED.setCursor(0, 16); // กำหนดตำแหน่ง x,y ที่จะแสดงผล
    OLED.setTextSize(1); // กำหนดขนาดตัวอักษร
    OLED.print("water >> ");
  }

  if (tm.Hour == 9 and tm.Minute == 0) {
    on_sum();
  } else {
  }
  if (tm.Hour == 10 and tm.Minute == 0) {
    on_sum();
  } else {
  }
  if (tm.Hour == 11 and tm.Minute == 0) {
    on_sum();
  } else {
  }
  if (tm.Hour == 13 and tm.Minute == 0) {
    on_sum();
  } else {
  }
  if (tm.Hour == 14 and tm.Minute == 0) {
    on_sum();
  } else {
  }
  if (tm.Hour == 15 and tm.Minute == 0) {
    on_sum();
  } else {
  }

  if (tm.Hour == 16 and tm.Minute == 0) {
    relay_config();
  } else {

    OLED.setCursor(0, 16); // กำหนดตำแหน่ง x,y ที่จะแสดงผล
    OLED.setTextSize(1); // กำหนดขนาดตัวอักษร
    OLED.print("water >> ");

  }

  //  if (tm.Hour == 17 and tm.Minute == 0) {
  //    relay_config();
  //  }

  if (RTC.read(tm)) {
    Serial.print("Ok, Time = ");
    print2digits(tm.Hour);
    Serial.write(':');
    print2digits(tm.Minute);
    Serial.write(':');
    print2digits(tm.Second);
    Serial.print(", Date (D/M/Y) = ");
    Serial.print(tm.Day);
    Serial.write('/');
    Serial.print(tm.Month);
    Serial.write('/');
    Serial.print(tmYearToCalendar(tm.Year));
    Serial.println();
  } else {
    if (RTC.chipPresent()) {
      Serial.println("The DS1307 is stopped.  Please run the SetTime");
      Serial.println("example to initialize the time and begin running.");
      Serial.println();
    } else {
      Serial.println("DS1307 read error!  Please check the circuitry.");
      Serial.println();
    }
    delay(9000);
  }
  OLED.display(); // สั่งให้จอแสดงผล
  delay(1000);
}

void print2digits(int number) {
  if (number >= 0 && number < 10) {
    Serial.write('0');
  }
  Serial.print(number);
}
