#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 有关字符串的基础知识
 1、在C语言中。字符串的保存是通过数组的方式去保存(不要忘了数组名同样也是指针名)
 2、字符串的长度计算有2种方法
    （1）通过遍历得到
    （2）通过 strlen 得到。注意：这个函数是在 String.h 头文件中。
 */
// MARK: 字符串的长度
void demo1(){
    int t = 0;
    char *str1 = "王尼玛";
    char *str2 = "Hello";
    // 第一种方法：通过遍历的方式得到字符串的长度。
    for (int i = 0; i < 69; i++) {
        if (str2[i] != '\0') {
            t++;
        } else {
            break;
        }
    }
    printf("%d\n", t);
    // 第二种方法：通过strlen函数得到。得到的长度不包括'\0'注意：得到的长度类型为 unsigned long
    printf("%ld\n", strlen(str2));
}
// MARK: 字符串的遍历（注意：没法遍历中文）
void demo2(){
    char *str1 = "Hello";
    for (unsigned long i = 0; i < strlen(str1); i++) {
        if (str1[i] != '\0') {
            printf("%c\n",str1[i]);
        } else {
            break;
        }
    }
}
// MARK: 字符串的比较（用 strcmp 函数）
// 不能直接用这两个字符串的名称来比较字符串中的内容。因为数组名表示数组的首地址,不代表整个数组元素值!
/*
strcmp 函数值 = 0 时为两个字符串相等
             < 0 时为 str1 比 str2 短
             > 0 时为 str1 比 str2 长
*/
void demo3(){
    char *str = "z";
    char *s = malloc(sizeof(char));
    printf("请输入一个字符串：");
//    scanf("%s", p); 这句话不能调用字符指针，因为我们没有为scanf输入的指针申请存储空间，scanf输入的数据必须也只能存放到实现申请好的存储空间，不然输入的字符可能会覆盖掉代码段或者其他一些地方的数据，引发未知的错误。
    scanf("%c", s);
    if (strcmp(str, s) != 0) {
        printf("Different\n");
    } else {
        printf("Same\n");
    }
    free(s);
}
// MARK: 字符串的拼接（用 strcap ，注意：添加到的数组必须定义数组大小，让内存分配好空间）
void demo4(){
    char p[50] = "王尼玛";
    char * s = "Hello";
    strcat(p, s);
    printf("%s\n", p);
}
// MARK: 字符串的替换（用 strcpy 指针替换）。前面是被替换的字符串，后面是替换成什么字符串。
void demo5(){
    char p[50] = "王尼玛";
    char * s = "Hello";
    strcpy(p, s);
    printf("%s\n", p);
}
int main(int argc, const char * argv[]) {
//    demo1();
//    printf("--------\n");
//    demo2();
//    demo3();
    demo4();
    demo5();
    return 0;
}
