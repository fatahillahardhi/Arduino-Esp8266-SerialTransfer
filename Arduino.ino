#include "SerialTransfer.h"
#include <SoftwareSerial.h>

SoftwareSerial mySerial(5, 6); // RX, TX untuk UNO, kalo pake Mega gak usah pake softwareserial.
SerialTransfer myTransfer;

uint8_t data[2] = {10, 20}; //tes kirim 100 sama 200

void setup(){
  Serial.begin(115200);
  //Serial2.begin(115200); kalo pake MEGA
  mySerial.begin(9600); // hapus ini kalo pake MEGA
  myTransfer.begin(mySerial); // ganti mySerial dengan Serial2 kalo pake MEGA
}

void loop(){
  uint8_t sendSize = 0;
  myTransfer.txObj(data, sizeof(data), sendSize);
  sendSize += sizeof(data);
  myTransfer.sendData(sendSize);
}
