BluetoothConnection
===================

Testing Bluetooth connection between Android and Arduino. There's a Arduino Project and and Andriod Studio project.


=======================================================================
Μάζεψα ότι δοκίμαζα σε έναν φάκελο.
Εχω έναν για το Android (σε android studio) και έναν για το arduino.
Δοκιμάζω και στέλνω 1 ή 2 απο το android αλλά δεν παίζει.
Βασικά δεν συνδέεται απο την μεριά του arduino.
Δεν παίζει η σειριακή.

Τα ανέβασα στο 

https://github.com/Tsiftelis-Thanasis/BluetoothConnection/

Ο κώδικας συγκεκριμένα ειναι ο παρακάτω:

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


​Στις φωτογραφίες έχω και το Setup που δοκίμασα.
=======================================================================
