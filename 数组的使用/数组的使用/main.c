//  main.c
//  数组的使用
//  Created by jyz on 2018/3/21.
#include <stdio.h>
//需求：输入十个数，对其进行排序
int main(int argc, const char * argv[]) {
    int score[10];//创建存这10个数的数组
    int i = 0,j = 0;
    for (i = 0; i < 10; i++) {
        scanf("%d",&score[i]);
    }
    for (i = 0; i < 10; i++) {
        for (j = 1; j < 10; j++) {
            if (score[i] > score[j]) {
                int temp = score[i];
                
            }
        }
    }
    return 0;
}
