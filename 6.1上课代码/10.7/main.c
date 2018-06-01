#include <stdio.h>
#include <string.h>
#define N 80
void Inverse(char *pStr) {
    unsigned long len;
    char temp;
    char *pStart, *pEnd;
    len = strlen(pStr);
    for (pStart = pStr, pEnd = pStr + len - 1; pStart < pEnd; pStart++, pEnd--) {
        temp = *pStart;
        *pStart = *pEnd;
        *pEnd = temp;
    }
}
int main(int argc, const char * argv[]) {
    char a[N];
    printf("Input a string:");
    gets(a);
    Inverse(a);
    printf("Inversed results: %s\n", a);
    return 0;
}
