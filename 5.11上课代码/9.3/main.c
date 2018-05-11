#include <stdio.h>
#define M 10
void Swap(int a[]){
    int i = 0, j = i, k = i;
    for (i = 0; i < M; i++) {
        // 找最大值
        if (a[i] > a[j] && j != i) {
            j = i;
        }
        // 找最小值
        if (a[i] < a[k] && k != i) {
            k = i;
        }
    }
    int temp = a[j];
    a[j] = a[k];
    a[k] = temp;
    for (i = 0; i < M; i++) {
        printf("%d\t", a[i]);
    }
}
int main(int argc, const char * argv[]) {
    int a[M] = {0};
    int i = 0;
    for (i = 0 ; i < M; i++) {
        printf("请输入第%d个元素", i + 1);
        scanf("%d", a + i);
    }
    Swap(a);
    return 0;
}
