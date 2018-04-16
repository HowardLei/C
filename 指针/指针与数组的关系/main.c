#include <stdio.h>
/*
 指针与数组之间的关系
    因为数组的名称与函数的名称本身就是指针。（函数的名称本身也是一种指针。）
    数组名单独拿出来就是一个地址。
 */
int * p;
void demo1(){
    int a[10];
    for (int i = 0; i < sizeof(a) / sizeof(int); i++) {
        a[i] = i + 1;
    }
    // 在这里面，指针变量 p 保存的是数组 a 的首地址。
//    int * p = a;
    p = a;
    for (int i = 0; i < sizeof(a) / sizeof(int); i++) {
        // 在输出数组的数值的时候，有两种方法：1、通过数组的下标寻找；2、通过地址寻找。因为数组是在内存中开辟了连续的空间。所以可以直接通过地址的加减即可。（这也就是为啥指针还需要在前面声明数据类型）
        printf("a[%d] = %d\n", i, *(p + i));
    }
}
// MARK: 函数传递一维数组的问题
void demo2(int * p){
    printf("%d\n", p[9]);
}
// MARK: 函数传递二位数组
// 在二维数组中，也可以通过指针来定位数组里的数据
void demo3(int * s){
    printf("%d\n", *(s + 5) );
}
// MARK: 指针与字符串之间的关系
void demo4(){
    char ch[] = "Hello";
    char * p = "Hello";
    printf("%s\n", p);
}
int main(int argc, const char * argv[]) {
    demo1();
    int b[2][3] = {{1, 2, 3}, {4, 5, 6}};
    demo2(p);// 注意：地址是固定的，但是指针是变量，在函数中有其作用域，所以说 demo1 中的数组不能直接通过函数内的指针变量来进行调用的。需要从外界来创建全局指针变量才能被调用。
    demo3(*b);
    demo4();
    return 0;
}
