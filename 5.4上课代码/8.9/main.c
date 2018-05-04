#include <stdio.h>
#include <stdlib.h>
// MARK: 创建并存储数组
int * Array(int n){
    int i = 0;
    // 创建一个 n 维数组
    int * a = malloc((n * n) * sizeof(int));
    for (i = 0; i < (n * n); i++) {
        printf("请输入元素");
        scanf("%d", a + i);
    }
    free(a);
    return a;
}
// MARK: 计算主对角元素和
int sumForMatrixMainDiagonalLine(int * array, int n){
    int i = 0, sum = 0;
    for (i = 0 ; i < (n * n); i += (n + 1)) {
        sum += *(array + i);
    }
    return sum;
}
// MARK: 计算副对角线元素和
int sumForMatrixSubDiagonalLine(int * array, int n){
    int i = 0, sum = 0;
    for (i = n - 1; i < (n * n) - 1; i += (n - 1)) {
        sum += *(array + i);
    }
    return sum;
}
int main(int argc, const char * argv[]) {
    int n = 1;
    printf("请输入你所需要计算数组的阶数");
    scanf("%d", &n);
    int * p = Array(n);
    int sum1 = sumForMatrixMainDiagonalLine(p, n);
    int sum2 = sumForMatrixSubDiagonalLine(p, n);
    printf("两个对角线之和为%d\n", sum1 + sum2);
    return 0;
}
