//
//  5.c
//  First
//
//  Created by jyz on 2018/3/23.
//  Copyright © 2018年 jyz. All rights reserved.
//

#include "5.h"
void 5-1(){
    double a = 0;
    printf("请输入一个实数");
    scanf("%l",&a);
    if (a < 0) {
        a = -a;
    }
    printf("%f",a);
}
