#include <stdio.h>
#define N 10
// MARK: 交换函数
void Swap(int a[],int b[]){
    int i = 0;
    for (i = 0; i < N; i++) {
        int temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}
int main(int argc, const char * argv[]) {
    int a[N] = {0}, b[N] = {0};
    for (int s = 0; s < N; s++) {
        printf("请输入第一个数组第%d个元素：", s + 1);
        scanf("%d", &a[s]);
    }
    for (int t = 0; t < N; t++) {
        printf("请输入第二个数组第%d个元素：", t + 1);
        scanf("%d", &b[t]);
    }
    Swap(a, b);
    for (int c = 0; c < N; c++) {
        printf("a[%d] = %d\n", c, a[c]);
    }
    for (int d = 0; d < N; d++) {
        printf("b[%d] = %d\n", d, b[d]);
    }
    return 0;
}
