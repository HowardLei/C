#include <stdio.h>
#define ROW 2
#define COL 3
#define N 5
// MARK: 8.1.(1)
void demo1(int x){
    x = 20;
}
// MARK: 8.1.(2)
void demo2(int b[]){
    int j;
    for (j = 0; j < 4; j++) {
        b[j] = j;
    }
}
// MARK: 8.2.(1)
int PositiveNum(int a[], int n){
    int i, count = 0;
    for (i = 0; i < n; i++) {
        if (a[i] > 0) {
            count++;
        }
    }
    return count;
}
// MARK: 8.2.(2)
void Fib(long f[],int n){
    int i;
    f[0] = 0;
    f[1] = 1;
    for (i = 2; i < n; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }
}
// MARK: 8.2.(3)
void demo3(){
    int a[10], n, max, min, maxPos, minPos;
    for (n = 0; n < 10; n++) {
        scanf("%d", a + n);
    }
    max = min = a[0];
    maxPos = minPos = 0;
    for (n = 0; n < 10; n++) {
        if (a[n] > max) {
            max = a[n];
            maxPos = n;
        } else if (a[n] < min) {
            min = a[n];
            minPos = n;
        }
    }
    printf("max = %d, pos = %d\n", max, maxPos);
    printf("min = %d, pos = %d\n", min, minPos);
}
// MARK: 8.2.(4)
// 计算矩阵函数
void MutiplyMatrix(int a[ROW][COL], int b[COL][ROW], int c[ROW][ROW]){
    int i, j, k;
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < ROW; j++) {
            c[i][j] = 0;
            for (k = 0; k < COL; k++) {
                c[i][j] += (a[i][k] * b[k][j]);
            }
        }
    }
}
// 显示矩阵中的元素
void PrintMatrix(int a[ROW][ROW]){
    int i, j;
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < ROW; j++) {
            printf("%6d", a[i][j]);
        }
        printf("\n");
    }
}
// 总调用函数
void implemetation(){
    int a[ROW][COL], b[COL][ROW], c[ROW][ROW], i, j;
    printf("Input 2 * 3 matrix a: \n");
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Input 3 * 2 matrix b: \n");
    for (i = 0; i < COL; i++) {
        for (j = 0; j < ROW; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    MutiplyMatrix(a, b, c);
    printf("Results:\n");
    PrintMatrix(c);
}
// MARK: 8.3
void DivArray(int *pArray, int n){
    int i;
    for (i = n - 1; i > 0; i--) {
        pArray[i] /= pArray[0];
    }
}
// MARK: 8.4
// 获得不及格人数
int GetFailNum(int score[], int n){
    int i,count = 0;
    for (i = 0; i < n; i++) {
        if (score[i] < 60) {
            count++;
        }
    }
    return count;
}
int main(int argc, const char * argv[]) {
    int x = 10;
    demo1(x);
    printf("%d\n", x);
    printf("-------\n");
    int a[] = {5, 6, 7, 8}, i;
    demo2(a);
    for (i = 0; i < 4; i++) {
        printf("%d\t",  a[i]);
    }
    printf("-------\n");
    implemetation();
    printf("-------\n");
    int n, fail, score[N];
    printf("How many students?");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", score + i);
    }
    fail = GetFailNum(score, n);
    printf("Fail students = %d\n", fail);
    return 0;
}
