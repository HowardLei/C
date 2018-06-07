#include <stdio.h>
/*
 需求：1，创建一个数组，键盘输入20个整数，进行排序（由小到大）；
    再键盘输入一个数据进行查找，查找成功返回数据所在数组位置，查找失败返回：没有此条数据；
    排序算法要求：冒泡排序法；
    查找算法要求：折半查找法
 */
#define N 20
int search(int array[], int x, int c) {
    int low = 0, high = N - 1, mid;
    while (low <= high) {
        mid = (low + (high - low)) / 2;
        if (x > array[mid]) {
            low = mid + 1;
        } else if (x < array[mid]) {
            high = mid - 1;
        } else {
            return mid;
        }
    }
    return -1;
}
int main(int argc, const char * argv[]) {
    int a[20], i, j, c;
    for (int i = 0; i < N; i++) {
        scanf("%d", a + i);
    }
    for (i = 0; i < N - 1; i++) {
        for (j = i + 1; j < N; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("数组的顺序为:");
    for (i = 0; i < N; i++) {
        printf("%d\t",a[i]);
    }
    printf("\n");
    printf("请输入你所需要查找的数据:");
    scanf("%d", &c);
    int t = search(a, c, N);
    if (t != -1) {
        printf("%d %d\n", t, a[t]);
    } else {
        printf("此数据不存在\n");
    }
    return 0;
}
