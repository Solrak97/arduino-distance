#include "DistanceSensor.h"

const int TRIGGER = 2;
const int ECHO = 3;

const int CONFIG = 4;
uint8_t STATE = LOW;

DistanceSensor DS = DistanceSensor(TRIGGER, ECHO);

/*
To - do
Move COMM to module
... I´ll need comm methods I guess... eventually
*/
struct Packet
{
  // Set proper HEADER size for packet
  // Header Structure
  const int HEADER_SIZE = 5;
  char *header;
  char *payload;
  char *trailer;
};

int data;
double t;

void setup()
{
  Serial.begin(9600);
  pinMode(TRIGGER, OUTPUT);
  pinMode(TRIGGER, OUTPUT);
}

void loop()
{
  if (Serial.available() > 0)
  {
    int msg = Serial.read();
    if (msg == 'H')
    {
      digitalWrite(CONFIG, HIGH);
    }
    else if (msg == 'L')
    {
      digitalWrite(CONFIG, LOW);
    }
  }
}

void distance()
{
  t = DS.getDistance();

  if (t < 100)
  {
    Serial.println(t);
  }

  delay(10);
}