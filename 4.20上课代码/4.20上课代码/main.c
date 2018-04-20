#include <stdio.h>
#define ROW 2
#define COL 3
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
        if (<#condition#>) {
            max = a[n];
            maxPos = n;
        } else if (<#expression#>) {
            min = a[n];
            minPos = n;
        }
    }
    printf("max = %d, pos = %d\n", max, maxPos);
    printf("min = %d, pos = %d\n", min, minPos);
}
// MARK: 8.2.(4)
void MutiplyMatrix(int a[ROW][])
int main(int argc, const char * argv[]) {
    int x = 10;
    demo1(x);
    printf("%d\n", x);
    printf("-------\n");
    static int a[] = {5, 6, 7, 8}, i;
    demo2(a);
    for (i = 0; i < 4; i++) {
        printf("%d\t",  a[i]);
    }
    return 0;
}
