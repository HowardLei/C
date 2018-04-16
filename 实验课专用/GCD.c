#include "GCD.h"
// MARK: 1、枚举法
int test1(int a, int b){
    int t = a < b ? a : b;
    for (int i = t; i > 1; i--) {
        if (i % a == 0 && i % b == 0) {
            return i;
        }
    }
    return 1;
}
// MARK: 2、辗转相除法
int test2(int a, int b){
    int c;
    do {
        c = a % b;
        a = b;
        b = c;
    } while (c != 0);
    return a;
}
// MARK: 3、递归法
int test3(int a,int b){
    if (a == b) {
        return a;
    } else if (a > b) {
        int d = a - b;
        return test3(d, a);
    } else {
        int e = b - a;
        return test3(a, e);
    }
}
