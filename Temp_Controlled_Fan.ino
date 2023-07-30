#include <dht.h> // Including library for dht

#define dht_dpin 12 

dht DHT;

#define pwm 9

void setup()
{
  Serial.begin(9600); // Initialize Serial Monitor

  pinMode(pwm, OUTPUT); // Set PWM pin as OUTPUT

  analogWrite(pwm, 255); // Start the fan at 100% speed

  Serial.println("Fan Speed Control System");
  
  delay(2000);
}

void loop()
{
  DHT.read11(dht_dpin);
  int temp = DHT.temperature;

  Serial.print("Temperature: ");
  Serial.print(temp); // Printing temperature on Serial Monitor
  Serial.write(176); // Degree symbol
  Serial.println("C");

  if (temp < 26)
  {
    analogWrite(pwm, 0);
    Serial.println("Fan OFF");
    delay(100);
  }
  else if (temp == 26)
  {
    analogWrite(pwm, 51);
    Serial.println("Fan Speed: 20%");
    delay(100);
  }
  else if (temp == 27)
  {
    analogWrite(pwm, 102);
    Serial.println("Fan Speed: 40%");
    delay(100);
  }
  else if (temp == 28)
  {
    analogWrite(pwm, 153);
    Serial.println("Fan Speed: 60%");
    delay(100);
  }
  else if (temp == 29)
  {
    analogWrite(pwm, 204);
    Serial.println("Fan Speed: 80%");
    delay(100);
  }
  else if (temp > 29)
  {
    analogWrite(pwm, 255);
    Serial.println("Fan Speed: 100%");
    delay(100);
  }

  delay(3000);
}
