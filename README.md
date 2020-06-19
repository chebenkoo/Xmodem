# Xmodem for ESP32 
---
#### Features
* Enables original **Xmodem** protocol file transfer over UART interface 
* Transmit and receive function included 
* Used terminal application must support Xmodem file transfer. The function has been tested with minicom application 
* CRC-8 check sum was used to verify errors of packeges. 

Initial the buffer size of incoming data is 2 MB and can be change in the #define configureation in the <uart_cfg.c>file 
