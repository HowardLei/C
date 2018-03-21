#include <stdio.h>
/*
 有关数组的概念
 1、数组是一组具有相同类型的变量的集合
 2、一维数组语法：数据类型 数组名[元素个数(常量)]。其中数组的下标都是从0开始的.
    在定义数组的时候，最好对元素个数单独创建一个宏常量或者是const常量进行定义。
    记得对数组也进行初始化
 3、C语言编译器不会对数组进行越界检查，使用的时候需要特别小心，对于越界的数组中的数据，C会输出乱码。
 4、[]有几个就是几维数组
 */
#define numbers 5
int main(int argc, const char * argv[]) {
    int score[numbers] = {0};
    score[1] = 20;
    for (int i = 0; i <= numbers ; i++) {
        score[i] = 60 + i;
    }
    printf("%d\n",score[4]);
    return 0;
}
