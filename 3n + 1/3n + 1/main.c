#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n = 0;
    int step = 1;
    int p = 0;
    printf("请输入第一个数:");
    scanf("%d",&n);
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = (3 * n + 1) / 2;
        }
        p = step++;
    }
    printf("%d\n",p);
}
