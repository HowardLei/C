#include "Time.h"
int hour = 0, minute = 0, second = 0;
void Update(){
    second++;
    if (second == 60) {
        second = 0;
        minute++;
    }
    if (minute == 60) {
        minute = 0;
        hour++;
    }
    if (hour == 24) {
        hour = 0;
    }
}
void Display(){
    printf("%2d:%2d:%2d\r", hour, minute, second);
}
void Delay(){
    int t;
    for (t = 0; t < 1000000; t++);
}
