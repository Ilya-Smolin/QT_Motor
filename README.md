# GUI controlling stm32 board via UART to control motor

Send packet to STM32:

## State
```
0 - stop
1 - move forward
2 - reverse
```
## DAC
GUI controls motor angular velocity from 0...252, 252 is 100%  
DAC max is 0xFFF  
STM send dac in percents from 0 to 100

```
send_UART (0x65); //start msg	
send_UART (state); 
send_UART (dac);
send_UART (0x66); //end msg
```
## BUFFER
Using Ring buffer for recieve in STM32 and GUI
