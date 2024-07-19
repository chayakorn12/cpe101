// C++ code
int dt, temp;
void setup()
{
  pinMode(A0, INPUT);
  pinMode(2, OUTPUT),
  Serial.begin(9600);
}

void loop()
{
  dt = analogRead(A0);
  temp = map( dt , 20, 358, -40, 125);
  Serial.print("temp = ");
  Serial.print(temp);
   if(temp>40){
    digitalWrite(2,HIGH);
  }else{
    digitalWrite(2,LOW);
  }
 
  
  delay(1000);
}