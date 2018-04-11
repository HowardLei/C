#ifndef HanoiTower_h
#define HanoiTower_h
/*
 在汉诺塔中，涉及到两个函数，第一个是用于移动的，一个是用于显示移动过程
 */
#include <stdio.h>
// MARK: Move 函数，用于显示移动过程
void Move(int x, char a, char b);
// MARK: Hanoi 函数，用于移动圆盘
void Hanoi(int x, char a, char b, char c);
#endif /* HanoiTower_h */
