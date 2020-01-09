#include <SoftwareSerial.h>
SoftwareSerial mySerial(2, 3); // RX, TX
int PIN_EN_OUT = 4;
int PIN_STATE_IN = 5;


void setup() {
  // put your setup code here, to run once:
  mySerial.begin(9600);
  Serial.begin(9600);
//
//    sendCommand("AT");
  sendCommand("AT+ROLE0");
  sendCommand("AT+TYPE2");
  sendCommand("AT+MODE2");
  sendCommand("AT+UUID0xFFE0");
  sendCommand("AT+CHAR0xFFE1");
  sendCommand("AT+PIN0000");
  sendCommand("AT+NAMEroboarm");

//  
//    sendCommand("AT+RESET");
//    sendCommand("AT+DEFAULT");

    
//    sendCommand("AT+VERSION");
  
}

void sendCommand(const char * command){
  Serial.print("Command send :");
  Serial.println(command);
  mySerial.println(command);
  //wait some time
  delay(100);
  
  char reply[100];
  int i = 0;
  while (mySerial.available()) {
    reply[i] = mySerial.read();
    i += 1;
  }
  //end the string
  reply[i] = '\0';
  Serial.print(reply);
  Serial.println("Reply end");
}

void readSerial(){
  char reply[50];
  int i = 0;
  while (mySerial.available()) {
    reply[i] = mySerial.read();
    i += 1;
  }
  //end the string
  reply[i] = '\0';
  if(strlen(reply) > 0){
    Serial.println(reply);
    Serial.println("We have just read some data");
  }
}

void loop() {
  readSerial();
  delay(200);
}
