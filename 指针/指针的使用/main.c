/*
 关于指针的使用场景
 1、在一个函数里想访问或调用另外一个函数里的变量
 2、动态内存申请（当你不知道需要申请多大的内存空间的时候，就需要进行动态内存分配）
 */
#include <stdio.h>
#include <stdlib.h>
//MARK: 一个函数调用另外一个函数里的变量
#include "exchangeNumber.h"
//MARK: 动态内存申请
void demo1(){
    int a = 0;
    printf("请输入班级人数:");
    scanf("%d",&a);
    // 下面这行的等价代码就是: int students[a]; malloc是在栈区分配内存空间。由于栈区的内存空间需要自行管理，所以需要配合free函数进行操作。堆区的内存是由系统自行分配的
    int * students = malloc(sizeof(int) * a);
    students[1] = 20;
    printf("%d\n",students[1]);
    free(students);
}
int main(int argc, const char * argv[]) {
    demo1();
    int a = 0;
    int b = 1;
    printf("%d,%d\n",a,b);
    exchangeNumber(&a, &b);
    printf("%d,%d\n",a,b);
    return 0;
}
