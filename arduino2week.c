int start_pin=3;
int end_pin=7;
void setup()
{for(int led=end_pin;led>=start_pin;led--)
  pinMode(led, OUTPUT);
}

void loop(){
  for(int led=end_pin;led>=start_pin;led--){
  digitalWrite(led, HIGH);
  delay(1000);
  }
  
 // Wait for 1000 millisecond(s)
  for(int led=end_pin;led>=start_pin;led--){
  digitalWrite(led, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
}
