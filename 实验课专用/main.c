#include <stdio.h>
#include "Square.h"
#include "Time.h"
#include "CompareNumber.h"
#include "CalcLCM.h"
#include "GCD.h"
// MARK: 7.1代码
void demo1(){
    int i = 0;
    i = Square(i);
    for ( ; i < 3; i++) {
        static int i = 1;
        i += Square(i);
        printf("%d,", i);
    }
    printf("%d\n", i);
}
// MARK: 7.2代码（用全局变量进行编程）
void demo2(){
    int i = 0;
    extern int hour, minute, second;
    hour = minute = second;
    for (i = 0; i < 1000000; i++) {
        Update();
        Display();
        Delay();
    }
}
// MARK: 7.3代码
void demo3(){
    int a, b;
    printf("请输入要比较的数的值：(输入的时候用逗号隔开)");
    scanf("%d,%d", &a, &b);
    CompareNumber(a, b);
    printf("最大值为：%d",CompareNumber(a, b));
}
// MARK: 7.4代码
void demo4(){
    int a, b;
    printf("请输入需要计算最小公倍数的数:");
    scanf("%d,%d", &a, &b);
    int u = CalcLCM(a, b);
    if (u != -1) {
        printf("%d与%d的最小公倍数为：%d\n", a, b, u);
    } else {
        printf("无法计算\n");
    }
}
// MARK: 7.7代码
void demo7(){
    int a = 1, b = 1;
    printf("请输入需要计算最大公因数的数：");
    scanf("%d,%d", &a, &b);
    int c = test3(a, b);
    printf("%d与%d的最大公因数为：%d\n", a, b, c);
}
// MARK: 7.8代码
void demo8(){
     
}
int main(int argc, const char * argv[]) {
//    demo1();
//    demo2();
//    demo3();
//    demo4();
    demo7();
    return 0;
}
