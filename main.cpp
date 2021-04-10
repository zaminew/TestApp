#include <libr.h>

uint32_t millis = 0;
uint32_t timer = 0;
uint32_t period = 1000;

void Delay(uint16_t millis){
    //todo
}

void main(){
    uint8_t localByte = 124;
    while(1){
        localByte++;
        Delay(1000);
    }
}
