/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "/Users/ashleylibasci/IoTFolderLabs/Lab10/src/Lab10.ino"
void setup();
void loop();
#line 1 "/Users/ashleylibasci/IoTFolderLabs/Lab10/src/Lab10.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

void setup()
{
  Serial1.begin(9600);
  // Serial.isConnected();
  //  Serial1.available();
  //  while (!Serial.isConnected())
  //  {
  //    Serial1.println("not connected");
  //  }
  pinMode(D5, OUTPUT);
  pinMode(D3, INPUT);
}

void loop()
{

  // digitalWrite(D5, HIGH);
  if (Serial1.available() > 0)
  {
    byte value = Serial1.read();
    Serial.print(value);
    if (value == '0')
    {
      digitalWrite(D5, LOW);
    }
    else if (value == '1')
    {
      digitalWrite(D5, HIGH);
    }
    else if (value == '?')
    {
      bool valueButton = digitalRead(D3);
      Serial1.print(valueButton);
      Serial.println(valueButton);
    }
  }
}
