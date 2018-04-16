#include <stdio.h>
#include <string.h>
/*
 有关字符串的基础知识
 1、在C语言中。字符串的保存是通过数组的方式去保存(不要忘了数组名同样也是指针名)
 2、字符串的长度计算有2种方法
    （1）通过遍历得到
    （2）通过strlen得到。注意：这个函数是在 String.h 头文件中。
 */
// MARK: 字符串的长度
void demo1(){
    int t = 0;
    char * str1 = "王尼玛";
    char * str2 = "Hello";
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
    char * str1 = "Hello";
    for (unsigned long i = 0; i < strlen(str1); i++) {
        if (str1[i] != '\0') {
            printf("%c\n",str1[i]);
        } else {
            break;
        }
    }
}
// MARK: 字符串的比较（用 strcmp 函数）
/*
strcmp 函数值 = 0 时为两个字符串相等
             < 0 时为 str1 比 str2 短
             > 0 时为 str1 比 str2 长
*/
void demo3(){
    char * str = "129047839579";
    printf("%d\n", strcmp("12904783957", str));
}
// MARK: 字符串的拼接
int main(int argc, const char * argv[]) {
//    demo1();
//    printf("--------\n");
//    demo2();
    demo3();
    return 0;
}
