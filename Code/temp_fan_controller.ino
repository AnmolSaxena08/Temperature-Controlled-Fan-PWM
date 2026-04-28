#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// LCD address (try 0x27 or 0x3F)
LiquidCrystal_I2C lcd(0x27, 16, 2);

const int tempSensorPin = A0;
const int relayPin = 8;
const int fanPWM = 9;

const float TEMP_MIN = 25.0;
const float TEMP_MAX = 45.0;

void setup() {
  pinMode(relayPin, OUTPUT);
  pinMode(fanPWM, OUTPUT);

  lcd.init();
  lcd.backlight();

  Serial.begin(9600);

  lcd.setCursor(0, 0);
  lcd.print("Temp Fan System");
  delay(2000);
  lcd.clear();
}

void loop() {
  // Read temperature
  int sensorValue = analogRead(tempSensorPin);
  float voltage = sensorValue * (5.0 / 1023.0);
  float temperature = (voltage - 0.5) * 100;

  int fanSpeed = 0;

  // Control logic
  if (temperature >= TEMP_MIN) {
    digitalWrite(relayPin, HIGH);

    fanSpeed = (int)((temperature - TEMP_MIN) * 255.0 / (TEMP_MAX - TEMP_MIN));
    fanSpeed = constrain(fanSpeed, 80, 255);

    analogWrite(fanPWM, fanSpeed);
  } else {
    digitalWrite(relayPin, LOW);
    analogWrite(fanPWM, 0);
    fanSpeed = 0;
  }

  // LCD Display
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(temperature);
  lcd.print((char)223); // degree symbol
  lcd.print("C   ");

  lcd.setCursor(0, 1);
  lcd.print("Fan: ");
  lcd.print(fanSpeed);
  lcd.print("     ");

  // Serial debug
  Serial.print("Temp: ");
  Serial.print(temperature);
  Serial.print(" | Fan: ");
  Serial.println(fanSpeed);

  delay(1000);
}