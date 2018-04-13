#include "CalcLCM.h"
int i;
int Max(int x, int y){
    if (x >= y) {
        return x;
    }else{
        return y;
    }
}
int Min(int x, int y){
    if (x <= y) {
        return x;
    } else {
        return y;
    }
}
int LCM(int x, int y){
    if (x < 0 || y < 0) {
        return -1;
    }else if (x == 0 || y == 0){
        return 0;
    }else{
        int a = Max(x, y);
        for (i = 0; i < Min(x, y); i++) {
            if (i * a % Min(x, y) == 0) {
                return i * x;
            }
        }
         return a * Min(x, y);
    }
}
int CalcLCM(int a, int b){
    if (a <= 0 || b <= 0) {
        return -1;
    }
    for (i = 0; i < b; i++) {
        if (i * a % b == 0) {
            return i * a;
        }
    }
    return b * a;
}
