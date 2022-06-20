 
 int val = 0 ;  
 void setup()  
 {  
 Serial.begin(9600); // sensor buart rate  
 pinMode(7,INPUT);  // IR sensor output pin connected  
 pinMode(9,OUTPUT);  // LED  
 pinMode(8,OUTPUT);  // BUZZER  
 }  
 void loop()  
 {  
 val = digitalRead(2);  //  IR sensor output pin connected  
 Serial.println(val);  // see the value in serial monitor in Arduino IDE  
 delay(500);  
 if(val == 1 )  
 {  
 digitalWrite(9,LOW);  // LED ON  
 digitalWrite(8,LOW);  // BUZZER ON  
 }  
 else  
 {  
 digitalWrite(9,HIGH);  // LED OFF  
 digitalWrite(8,HIGH);  // BUZZER OFF  
 }  
 }  
