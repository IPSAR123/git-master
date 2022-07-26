int ch;
void setup() {
 Serial.begin(9600);
}
void loop() {
 while(Serial.available()==0){}
    int ch = Serial.read();
    Serial.print("You sent me: \'");
   Serial.write(ch);
    Serial.print("\'  ASCII Value: ");
   Serial.println(ch);
   if((ch>=65&&ch<=90)||(ch>=97&&ch<=122)){
      Serial.println("Alphabet ");
     }else if(ch>=48&&ch<=57){
     Serial.println("Number");
      }else if((ch>=0&&ch<=47)||(ch>=58&&ch<=64)||(ch>=91&&ch<=96)||(ch>=123&&ch<=127)){
      Serial.println("special character ");
    }
}
   
