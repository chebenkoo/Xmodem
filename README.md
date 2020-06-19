
[![Build Status](https://travis-ci.org/joemccann/dillinger.svg?branch=master)](https://travis-ci.org/joemccann/dillinger)
# Commands parser and Xmodem for ESP32 
---
#### Features
* Cmd commands parser for Cooler eye project. The available commands are described in "Cooler Eye commands v1_April 2020.odt" file.
* 3 modes are used to communicate with the device. X_up, X_down, and cc12. X_up and X_down to upload and download data respectively. CC12 to proccess the incoming data from UART port (serial terminal). 
* Enables original **Xmodem** protocol file transfer over UART interface 
* Transmit and receive function included 
* Used terminal application must support Xmodem file transfer. The function has been tested with minicom application 
* CRC-8 check sum was used to verify errors of packeges. 

Initial the buffer size of incoming data for XModem protocol is 2 Mb and can be change in the #define configuration in the <uart_cfg.c> file 

### Hardware Required

The example can be run on any commonly available ESP32 development board. You will need a USB cable to connect the
development board to a computer, and a simple one-wire cable for shorting two pins of the board.

### Setup the Hardware

The `RXD_PIN` and `TXD_PIN` which are configurable in the code (by default `GPIO4` and `GPIO5`) need to be shorted in
order to receive back the same data which were sent out.

---
#### How to build
Configure your esp32 build environment as for esp-idf examples
Clone the repository git clone git@bitbucket.org:alnicko/cooler-eye-esp32.git  
```sh
$ git pull
$ git checkout cmd_commands
```
Execute menuconfig and configure your Serial flash config and other settings. Included sdkconfig.defaults sets some defaults to be used.
Flesh and build the progrm with command
```sh
idf.py -p /dev/ttyUSB0 flash monitor
```

Then open minicom and configure the serial port  
```
minicom -s 
```
By default the X_up mode are turn on. 
Type any key to wake up the device and choose the file to transmit to the device from minicom. (Use the Ctrl+A and "s", to choose the file from minicom).
After transmission the device change the mode to X_down. To receive file use Ctrl+A and "r" and type the name of file.

### Example Output

You will receive the following repeating output from the monitoring console:
```
...
I (2231) uart_events: UART event
I (2231) uart_events: x modem receive
I (16581) uart_events: Receive is OK,  size block 87734
I (17581) uart_events: the stack value is 8528
I (17581) uart_events: UART event
I (17581) uart_events: x modem transmit
I (37251) uart_events: Transfer OK. the size block is 87734
I (37251) uart_events: the stack value is 8528
I (37251) uart_events: UART event
...
```

---
## Tests
#### Unit test 

Build & Run Unit Tests

Change to derictory /cmd_command/test. 
Build and flash 
```
idf.py -p /dev/ttyUSB0 flash monitor
```
The interactive test menu will appear to test the existing module


### Example Output
```
...
Press ENTER to see the list of tests.

Here's the test menu, pick your combo:
(1)	"Commands are equel" [equel]
(2)	"Call back cmd test" [with param]
(3)	"Commands cmd not equel" [not equel]
(4)	"Package verification" [equel]
(5)	"Crc 8 test calculation" [equel]
(6)	"Xmodem receive success read block" SUCCESS
...
```
