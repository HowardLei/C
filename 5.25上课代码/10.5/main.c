#include <stdio.h>
// MARK: 用字符数组作函数参数
void SqueezeInArray(char s[], char c){
    int i, j;
    for (i = j = 0; s[i] != '\0'; i++) {
        if (s[i] != c) {
            s[j] = s[i];
            j++;
        }
    }
    s[j] = '\0';
}
// MARK: 用字符指针作函数参数
void SqueezeInPointer(char *s, char c){
    char *t1 = s, *t2 = s;
    for (; *t1 != '\0'; t1++) {
        if (*t1 != c) {
            *t2 = *t1;
            t2++;
        }
    }
    *t2 = '\0';
}
int main(int argc, const char * argv[]) {
    char str[20], ch;
    printf("输入一个字符串");
    gets(str);
    printf("输入一个字符");
    ch = getchar();
    SqueezeInArray(str, ch);
    SqueezeInPointer(str, ch);
    printf("最后的结果是%s\n", str);
    return 0;
}
