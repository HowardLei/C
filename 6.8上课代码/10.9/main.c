#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 5
int minString(char str[N][64], int n) {
    int i, minIndex = 0;
    char min[64];
    strcpy(min, str[0]);
    for (i = 1; i < n; i++) {
        if (strcpy(str[i], min) < 0) {
            strcpy(min, str[i]);
            minIndex = i;
        }
    }
    return minIndex;
}
int main(int argc, const char * argv[]) {
    char countrys[N][64];
    int i = 0, min;
    for (i = 0; i < N; i++) {
        printf("请输入第%d个国家", i + 1);
        scanf("%s", countrys[i]);
    }
    min = minString(countrys, N);
    printf("最前面的字符串为：%s\n", countrys[min]);
    return 0;
}
