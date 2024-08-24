int count=0;
void setup() {
 pinMode (13,OUTPUT);
 pinMode (1,INPUT);

}
void loop() {
  if (digitalRead(1) == 1) {
    delay(500);
    if (digitalRead(1) == HIGH) {
    count++;
    }
    if ( count==1) {
    digitalWrite(13,HIGH);
    }
  else{
   digitalWrite(13,LOW);  
   count=0;
  }
 
}
}
