char INBYTE;

void setup() {
  Serial.begin(9600);
  Serial.print("Init..");
  Serial.println();
}

void loop() {

  
  Serial.print(Serial.available());
  
  if (Serial.available() >0) {
        
        Serial.print("Connected..");
        Serial.println();
       
        INBYTE = Serial.read();        // read next available byte
      
      if( INBYTE == '1' ){
          Serial.print("Value is : 1");
          Serial.println();
      }  
       
      if( INBYTE == '2' ){
          Serial.print("Value is : 2");
          Serial.println();
      }
  
     
  }
  else {
      Serial.print("Is not connected....");
      Serial.println();
  }
  
  delay(1000); 
}


