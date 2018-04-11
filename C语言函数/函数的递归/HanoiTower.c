#include "HanoiTower.h"
void Move(int x, char a, char b){
    printf("将第%d个圆盘从%c柱移动到%c柱\n", x, a, b);
}
void Hanoi(int x, char a, char b, char c){
    if (x == 1) {
        Move(1, a, b);
    } else {
        Hanoi(x - 1, a, c, b);
        Move(x, a, b);
        Hanoi(x - 1, c, b, a);
    }
}
