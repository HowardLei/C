#include <stdio.h>
/*
循环定义：从某一处开始，连续不断的做一件事，叫循环
 for循环用于已知循环次数的循环
 for循环语法：for (initialization（赋初值）; condition（条件：啥时候这个程序结束）; increment（增值的赋值语句，看这个程序一次性增加多少）) {
                        statements（循环里要做的事情）
                }
 如果在程序运行的过程中找不到程序的错误可以尝试breakpoint
 在for循环中，有两个关键词：continue;(结束本次循环，开始下一次循环)
                        break;（直接跳出循环）
 */
//MARK:嵌套循环
//在for循环进行嵌套的时候，外层循环执行1次，内层循环执行一周
void demo1(){
    for (int a = 10; a >= 1; --a) {
        printf("%d\n",a);
        for (int j = 0; j < 5; j += 2) {
            printf("%d\n",j);
        }
    }
}
//需求：从1到100全部都显示一遍
int main(int argc, const char * argv[]) {
//    for (int i = 1; i <= 100; i++) {
//        printf("%d\n",i);
//    }
    demo1();
    return 0;
}
