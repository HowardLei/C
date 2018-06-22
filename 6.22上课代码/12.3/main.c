#include <stdio.h>
typedef struct clock {
    int hour;
    int minute;
    int second;
}CLOCK;
void update(CLOCK *t) {
    static long m = 1;
    t->hour = m / 3600;
    t->minute = (m - 3600 * t->hour) / 60;
    t->second = m % 60;
    m++;
    if (t->hour == 24) {
        m = 1;
    }
}
void display(CLOCK *t) {
    printf("%2d:%2d:%2d\r", t->hour, t->minute, t->second);
}
void delay() {
    long t;
    for (t = 0; t < 5000000000; t++) {
    }
}
int main(int argc, const char * argv[]) {
    long i;
    CLOCK myclock;
    myclock.hour = myclock.minute = myclock.second = 0;
    for (i = 0; i < 100000; i++) {
        update(&myclock);
        display(&myclock);
        delay();
    }
    return 0;
}
