int cds=A0;
int led_idx=9;
int led_2=6;
int led_3=11;
void setup()
{Serial.begin(9000);
 pinMode(led_idx,OUTPUT);
 pinMode(led_2,OUTPUT);
 pinMode(led_3,OUTPUT);
}

void loop()
{
  int cr=analogRead(cds);
 Serial.println(cr);
 if(cr<100){
   digitalWrite(led_idx,HIGH);
 }
  else{
    digitalWrite(led_idx,LOW);
  }
 if(cr>=100&&cr<=299){
   digitalWrite(led_2,HIGH);
 }
  else{
    digitalWrite(led_2,LOW);
  }
  if(cr>=300){
    digitalWrite(led_3,HIGH);
  }
  else{
    digitalWrite(led_3,LOW);
  }
 delay(100);
}
