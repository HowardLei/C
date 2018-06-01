#include <stdio.h>
#include <string.h>
#define N 80
void MyStrcat(char *dstStr, char *srcStr) {
    while (*dstStr != '\0') {
        dstStr++;
    }
    while (*srcStr != '\0') {
        *dstStr = *srcStr;
        srcStr++;
        dstStr++;
    }
    *dstStr = '\0';
}
int main(int argc, const char * argv[]) {
    char S[N], T[N];
    printf("Input a string:");
    gets(S);
    printf("Input another string:");
    gets(T);
    MyStrcat(S, T);
    printf("Concatenate results:%s\n", S);
    return 0;
}
