//
//  forCircle.c
//  C语言函数
//
//  Created by jyz on 2018/3/15.
//  Copyright © 2018年 jyz. All rights reserved.
//

#include "forCircle.h"
int forCircle(int n){
    int i ,sum;
    for (i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}
