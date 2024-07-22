// C++ code
int dt = 0;
void setup()
{
  pinMode(2, INPUT);
  pinMode(4, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  dt = digitalRead(2);
  Serial.print("motion = ");
  Serial.println(dt);
  if(dt == 1){
    digitalWrite(4,HIGH);
  }else{
    digitalWrite(4,LOW);
  }
  
  delay(500);
}
