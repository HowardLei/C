#include <stdio.h>
#include <stdlib.h>
/*
 需求；2.要求实现功能：
    键盘输入一篇英语文章（120词左右）；
    输入一个字母查找以该字母为首字母的所有单词并显示（不区分大小写）；
 */
int main(int argc, const char * argv[]) {
    char t, y;
    int i = 0;
    char *essay = malloc(150 * 64 * sizeof(char));
    fgets(essay, 150 * 64, stdin);
    scanf("%c", &t);
    if (t >= 'A' && t <= 'Z') {
        y = t + ('a' - 'A');
    } else if (t >= 'a' && t <= 'z'){
        y = t - ('a' - 'A');
    } else {
        printf("输入有误\n");
        return -1;
    }
    for (i = 0; i < 150 * 64; i += 64) {
        if ((essay + i) == t || (essay + i) == t) {
            printf("%s\t", essay + i);
        }
    }
    free(essay);
    return 0;
}

