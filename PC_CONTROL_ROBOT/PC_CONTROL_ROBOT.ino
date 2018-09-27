void setup()
{
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);
pinMode(13,OUTPUT);
Serial.begin(9600);
Serial.println("START");
}

void loop()
{
if(Serial.available()>0)
{
char c = Serial.read();
if(c=='f' || c=='F'){                         //Forward
Serial.println("FORWARD");
digitalWrite(10,HIGH);
digitalWrite(11,LOW);
digitalWrite(12,HIGH);
digitalWrite(13,LOW);
}

if(c=='B' || c=='b'){                         //Backward
Serial.println("BACKWARD");

digitalWrite(10,LOW);
digitalWrite(11,HIGH);
digitalWrite(12,LOW);
digitalWrite(13,HIGH);
}
if(c=='L' || c=='l'){
Serial.println("TURN LEFT");
digitalWrite(10,LOW);
digitalWrite(11,HIGH);
digitalWrite(12,HIGH);
digitalWrite(13,LOW);
}
if(c=='R' || c=='r'){
Serial.println("TURN RIGHT");
digitalWrite(10,HIGH);
digitalWrite(11,LOW);
digitalWrite(12,LOW);
digitalWrite(13,HIGH); 
}
}
}



