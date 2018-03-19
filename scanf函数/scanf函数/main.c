#include <stdio.h>
//输入函数scanf
//语法：scanf ("数据类型占位符",地址);
//需求：输入两个数，计算出他们的结果
int main(int argc, const char * argv[]) {
    double a,b;
    printf("欢迎使用加法计算器\n");
    printf("请输入您所需要计算的第一个数:");
    scanf("%lf",&a);
    printf("请输入您所需要计算的第二个数:");
    scanf("%lf",&b);
    printf("答案是%g\n",a + b);
    return 0;
}
