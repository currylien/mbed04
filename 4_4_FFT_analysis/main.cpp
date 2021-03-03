#include "mbed.h"

AnalogOut Aout(D7);
AnalogIn Ain(A0);

int sample = 128;
int i;
float ADCdata[128];

int main(void)
{
    for (i = 0; i < sample; i++) {
        Aout = Ain;
        ADCdata[i] = Ain;
        ThisThread::sleep_for(1000ms / smaple);
    }
    for (i = 0; i < sample; i++) {
        printf("%f\r\n", ADCdata[i]);
        ThisThread::sleep_for(100ms);
    }
}