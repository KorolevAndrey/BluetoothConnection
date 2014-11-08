struct
{
  uint32_t total;
  uint32_t ok;
  uint32_t crc_error;
  uint32_t time_out;
  uint32_t unknown;
} stat = { 0,0,0,0,0 };

char INBYTE;
int  LED = 13; // LED on pin 13

void setup() {
  Serial.begin(9600); 
  pinMode(LED, OUTPUT);
  Serial.print("Init..");
  Serial.println();
}

void loop() {

  
  delay(5000);
  
  if (Serial.available()) 
  {
      Serial.print("Connected..");
      Serial.println();
       
      INBYTE = Serial.read();        // read next available byte
      
      uint32_t start = micros();
      uint32_t stop = micros();
      
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


