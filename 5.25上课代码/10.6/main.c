#include <stdio.h>
#include <string.h>
#define N 100
void insert(char s[]){
    char t[N];
    int i, j;
    strcpy(t, s);
    for (i = 0, j = 0; t[i] != '\0'; i++, j++) {
        s[j] = t[i];
        j++;
        s[j] = ' ';
    }
    s[j] = '\0';
}
int main(int argc, const char * argv[]) {
    char str[N];
    printf("输入一个字符串:");
    scanf("%s", str);
    insert(str);
    printf("结果是：%s\n", str);
    return 0;
}
