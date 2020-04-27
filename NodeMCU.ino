#include "SerialTransfer.h"
#include <SoftwareSerial.h>


SoftwareSerial mySerial(D1, D2); // RX, TX
SerialTransfer myTransfer;

uint8_t data[2] = {}; // untuk nampung data array yg diterima

void setup(){
  Serial.begin(115200);
  mySerial.begin(9600);
  myTransfer.begin(mySerial);
}

void loop(){
if (myTransfer.available()){
    
    uint8_t recSize = 0;

    myTransfer.rxObj(data, sizeof(data), recSize);
    Serial.println();
    Serial.print("Data 1= ");
    Serial.print(data[0]);
    Serial.println();
    Serial.print("Data 2 = ");
    Serial.print(data[1]);
    }else if (myTransfer.status < 0){
    Serial.print("ERROR: ");
    if (myTransfer.status == -1)
      Serial.println(F("CRC_ERROR"));
    else if (myTransfer.status == -2)
      Serial.println(F("PAYLOAD_ERROR"));
    else if (myTransfer.status == -3)
      Serial.println(F("STOP_BYTE_ERROR"));
  }
}
