#include <stdio.h>
//MARK: 求自然数的立方和 >= 1000000
void demo1(){
    int i = 0;
    long sum = 0;
    while (sum < 1000000) {
        i++;
        sum += i * i * i;
    }
    printf("%d\n", i);
}
//MARK: 求 pi 的前 100 项乘积
void demo2(){
    double pi = 1;
    for (double n = 2; n <= 100; n += 2) {
        pi *= (n * n) / ((n - 1) * (n + 1));
    }
    printf("%g\n", pi * 2);
}
int main(int argc, const char * argv[]) {
    demo1();
    demo2();
    return 0;
}
