# Commands parser and Xmodem for ESP32 
---
#### Features
* Cmd commands parser for Cooler eye project. The avaliable commands are avaliable in "Cooler Eye commands v1_April 2020.odt" file.
* Enables original **Xmodem** protocol file transfer over UART interface 
* Transmit and receive function included 
* Used terminal application must support Xmodem file transfer. The function has been tested with minicom application 
* CRC-8 check sum was used to verify errors of packeges. 

Initial the buffer size of incoming data is 2 Mb and can be change in the #define configuration in the <uart_cfg.c>file 
