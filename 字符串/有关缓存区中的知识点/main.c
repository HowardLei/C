#include <stdio.h>
#include <string.h>
#define N 8
/*
 需求：设计一个登陆程序。密码是:secert（已初始化）
 */
// MARK: 缓存区溢出攻击例子
void demo1(){
    char *rightPasscode = "secret", input[N];
    while (1) {
        printf("请输入密码:");
        gets(input); // 这块使用 gets() 函数读取字符串不安全，因为在读取字符串的时候如果超过数组中的内容的时候，会造成缓存区内存溢出，破坏内存其他区域的数据。导致密码错误。
        if (strcmp(input, rightPasscode) == 0) {
            printf("welcome!\n");
            break;
        } else {
            printf("sorry\n");
        }
    }
}
// MARK: 修改后的代码
void demo2(){
    char *rightPasscode = "secret", input[N];
    while (1) {
        printf("请输入密码:");
        scanf("%7s", input); // 这个地方的设置是让系统每次只从缓存区读取7个字符，防止破坏其他地方的内存的空间。但是在输入超过多余 7 个字符的时候，就会弹出多余的（请输入密码:sorry）。
        if (strcmp(input, rightPasscode) == 0) {
            printf("welcome!\n");
            break;
        } else {
            printf("sorry\n");
        }
    }
}
// MARK: 更加限制严格的方法
void demo3(){
    char rightPasscode[N] = "secret", input[N];
    while (1) {
        printf("请输入密码:");
        fgets(input, sizeof(input), stdin); // FIXME: 在这个地方的 sizeof(input) 如果不等于 7 的话，输入 secret 永远不通过。因为 input 数组的第 6 号元素为 '\n'
        if (strcmp(input, rightPasscode) == 0) {
            printf("Welcome!\n");
            break;
        } else {
            printf("Sorry\n");
        }
    }
}
// MARK: 再次修改的代码
void demo4(){
    char rightCode[N] = "Secret", input[N];
    while (1) {
        printf("请输入密码：");
        fgets(input, (int)(strlen(rightCode) + 1), stdin);
        if (strcmp(rightCode, input) == 0) {
            printf("Welcome.\n");
            break;
        } else {
            printf("Sorry.\n");
        }
    }
}
int main(int argc, const char * argv[]) {
//    demo1();
//    demo2();
    demo4();
    return 0;
}
