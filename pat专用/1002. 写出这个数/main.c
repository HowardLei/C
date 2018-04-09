#include <stdio.h>
//MARK: 第一种方法（不用数组，但是崩了）
void demo1(){
    // a 为需要计算的数
    long a = 0;
    // b 为求10余的数
    int b = 0, c = 0, d = 0;
    scanf("%ld",&a);
    do {
        b = a % 10;
        a /= 10;
        c += b;
    } while (a / 1 > 0);
    printf("%d\n",c);
    //FIXME: 这个循环输出的顺序是倒着的，不知道怎么办了
    do {
        d = c % 10;
        switch (d) {
            case 0:
                printf("ning\t");
                break;
            case 1:
                printf("yi\t");
                break;
            case 2:
                printf("er\t");
                break;
            case 3:
                printf("san\t");
                break;
            case 4:
                printf("si\t");
                break;
            case 5:
                printf("wu\t");
                break;
            case 6:
                printf("liu\t");
                break;
            case 7:
                printf("qi\t");
                break;
            case 8:
                printf("ba\t");
                break;
            case 9:
                printf("jiu\t");
                break;
            default:
                break;
        }
        if (c / 10 == 0) {
            break;
        }
        c /= 10;
    } while (d / 1 > 0);
}
//MARK: 第二种方法（用数组）
void demo2(){
    char * a = {"100"};
    scanf("%s", a);
    int sum = 0;
    for (int i = 0; i < 100; i++) {
        int temp = a[i];
        sum += temp;
    }
    printf("%d", sum);
}
int main(int argc, const char * argv[]) {
    demo2();
    return 0;
}
