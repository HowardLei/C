#include <stdio.h>
#include <stdlib.h>
#include "HanoiTower.h"
// MARK: 一般递归问题：求n！（注意：求解过大会超过范围）
long demo1(int n){
    // 对递归条件进行判断
    if (n < 0) {
        return 0;
    }else if (n == 0 || n == 1){
        return 1;
    }else{
        return n * demo1(n - 1);
    }
}
// MARK: 斐波那契数列（用递归算法实现，但是内存消耗过大，且相对效率偏低）
long Fibonacci1(int n){
    // 注意：这里必须定义 n = 0 时的返回值，因为当 n = 2 时如果不定义 n = 0 时候的值将会没有返回值。函数出现错误。
    if (n == 0){
        return 0;
    } else if (n == 1) {
        return 1;
    }else{
        return Fibonacci1(n - 1) + Fibonacci1(n - 2);
    }
}
// MARK: 斐波那契数列（不用递归算法，用一维数组解决，但是他的顺序是 1、2、3、5、8 依次类推）
long Fibonacci2(int n){
    int i = 2;
    long u = 1, v = 1;
    long * p = malloc(sizeof(long) * n);
    p[0] = u;
    p[1] = v;
    for (i = 2; i <= n; i++) {
        long temp = p[i - 1] + p[i - 2];
        p[i] = temp;
    }
    free(p);
    return p[n];
}
int main(int argc, const char * argv[]) {
    int x = 1;
//    printf("请输入您想要计算的阶乘：");
//    scanf("%d", &x);
//    // y 是 demo1 的返回值
//    long y = demo1(x);
//    if (y) {
//        printf("%d的阶乘是%ld\n", x, y);
//    } else {
//        printf("无法计算\n");
//    }
//    printf("--------\n");
    printf("请输入移动汉诺塔上圆盘的个数：");
    scanf("%d", &x);
    Hanoi(x, 'A', 'B', 'C');
//    long f = Fibonacci1(x);
//    long f = Fibonacci2(x);
//    printf("第%d项的值是：%ld\n", x, f);
    return 0;
}

/*
 总结：递归的宗旨就是寻找到递归两层之间的交接，以及最后终结的条件！！！
 */
