#define LED_PIN 8
#define buttonpin 2
int buttonState=0;
   void setup() {
    Serial.begin(9600);
   pinMode(buttonpin , INPUT_PULLUP);
   pinMode(LED_PIN , OUTPUT); 
    
}
void loop() {
  buttonState =digitalRead(buttonpin);
     //Serial.println(buttonState);
   if(  buttonState == HIGH){
    digitalWrite(LED_PIN, HIGH);
    Serial.println("Led on");
  }
   else {              
   digitalWrite(LED_PIN, LOW); 
   Serial.println("Led off");
     }
 }             
   
 
  
  
