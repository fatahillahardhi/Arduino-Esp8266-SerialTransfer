# SENDING MULTIPLE DATA FROM ARDUINO TO NODEMCU WITH SERIALTRANSFER

ngirim multiple data dengan array dari Arduino ke ESP8266 atau nodeMCU pake library SerialTransfer, ini bagi orang yang mencoba kirim multiple data pake SoftwareSerial biasa dan ArduinoJSON tapi gagal kaya gue.

**DO THIS FIRST DUDEEEEEEEEEEEEEE!!!!!!!!!!**

1. Install library dari https://github.com/PowerBroker2/SerialTransfer atau bisa dari Arduino IDE ya coy jangan lupa.
2. Hubungin Arduino dengan NodeMcu dengan kek dibawah ini, dengan intinya RX dari NodeMCU connect dengan TX dari Uno / Mega, juga sebaliknya coey.

```
NODEMCU      ARDUINO UNO      ARDUINO MEGA         
D1 (RX)        5 (TX)          16 (TX)
D2 (TX)        6 (RX)          17 (RX)
```
