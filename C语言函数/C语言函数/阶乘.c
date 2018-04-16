#include "阶乘.h"
void demo1(){
    int n = 0;
    int i = 1;
    printf("Input n:");
    scanf("%d", &n);
    for (i = 1;i <= n; i++) {
        printf("%d!=%ld\n", i, func(i));
    }
}
long jiecheng(int n){
    static long p = 1;
    p *= n;
    return p;
}
