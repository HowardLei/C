//  数组的使用
#include <stdio.h>
#include <stdlib.h>
//需求：输入十个数，对其进行排序
// MARK: 创建一个数组
int * Array(int n){
    int * p = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        printf("请输入第%d个元素", i + 1);
        scanf("%d", p + i);
    }
    free(p);
    return p;
}
// MARK: 交换法排序
void answer(){
    int score[10];//创建存这10个数的数组
    int i = 0,j = 0;
    for (i = 0; i < 10; i++) {
        scanf("%d",&score[i]);
    }
    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 10; j++) {
            if (score[i] < score[j]) {
                int temp = score[i];
                score[i] = score[j];
                score[j] = temp;
            }
        }
    }
    for (i = 0; i < 10; i++) {
        printf("%d\t",score[i]);
    }
}
// MARK: 选择法排序（降序）
// 原理：先找这个数组中最大的元素，然后将其筛选出来，与数组中的第零个元素进行交换，再从一个元素开始寻找，找到这个数组中最大的。依次类推，一共最多有 n - 1 个元素会进行交换
int * choose(int score[], int n){
    int i = 0, j = 0, k;
    for (i = 0; i < n - 1; i++) {
        k = i;
        for (j = i + 1; j < n; j++) {
            if (score[i] < score[j]) {
                k = j;
            }
        }
        if (k != i) {
            int temp = score[k];
            score[k] = score[i];
            score[i] = temp;
        }
    }
    return score;
}
int main(int argc, const char * argv[]) {
    int n = 0;
    printf("请输入数组的数量:");
    scanf("%d", &n);
    int *p = Array(n);
    int *s = choose(p, n);
    printf("新数组顺序为：");
    for (int i = 0; i < n; i++) {
        printf("%d\t", *(s + i));
    }
    printf("\n");
    return 0;
}
