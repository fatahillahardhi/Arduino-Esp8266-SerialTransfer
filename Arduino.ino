#include "SerialTransfer.h"
#include <SoftwareSerial.h>

SoftwareSerial mySerial(5, 6); // RX, TX untuk UNO, kalo pake Mega gak usah pake softwareserial.
SerialTransfer myTransfer;

uint8_t data[2] = {10, 20}; //tes kirim 100 sama 200

void setup(){
  Serial.begin(115200);
  //kalo pake MEGA tambahin Serial2.begin(115200);
  mySerial.begin(9600);
  myTransfer.begin(mySerial);
}

void loop(){
  uint8_t sendSize = 0;
  myTransfer.txObj(data, sizeof(data), sendSize);
  sendSize += sizeof(data);
  myTransfer.sendData(sendSize);
}
