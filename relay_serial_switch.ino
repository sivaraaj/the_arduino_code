int siva1 = 13;
int siva2 = 12;
int val = 0;

void setup()
{
  Serial.begin (9600);
  pinMode(siva1, OUTPUT);
  pinMode(siva2, OUTPUT);
}

void loop()
{
  if(Serial.available() > 0)
  {
    val = Serial.read();
  {
  if(val == '1')
  {
  digitalWrite(siva1, HIGH);
  }
  else if(val == '2')
  {
  digitalWrite(siva1, LOW);
  }
  
  if(val == '3')
  {
    digitalWrite(siva2, HIGH);
  }
  else if(val == '4')
  {
  digitalWrite(siva2, LOW);
  }
  }
  }
}
