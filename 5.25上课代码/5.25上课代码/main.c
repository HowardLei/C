#include <stdio.h>
// MARK: 统计单词数
int countWords(char a[]){
    int i, num;
    num = (a[0] != ' ') ? 1 : 0;
    for (i = 1; a[i] != '\0'; i++) {
        if (a[i] != ' ' && a[i - 1] == ' ') {
            num++;
        }
    }
    return num;
}
int main(int argc, const char * argv[]) {
    char string[20];
    printf("请输入一个字符串:");
    gets(string);
    int words = countWords(string);
    printf("字符串里一共有%d个单词\n", words);
    return 0;
}
