#include <stdio.h>
/*
 在C语言中，最简单的对文件进行”写“操作分3步
 1、打开文件：用 fopen 函数打开（如果原来系统有这个文件，则对其进行覆盖，如果原系统中没有这个文件，则会在这个源文件编译出来的可执行文件的相同目录下创建此文件）
    在打开文件时，
 2、对文件进行操作。（现在写的文件都是文本文件）用 fputc（写入一个字符）; fputs（写一个字符串）;fprintf（用格式化的写）;
 3、关闭文件：用 fclose 函数进行操作。
 */
// MARK: 写文件方式
void fileWrite(){
    // 1、先创建一个文件指针（这个指针用来进行文件操作的），指向 NULL（即不指向内存中的任何区域）
    FILE *fp = NULL;
    // 2、打开文件，在 fopen 函数中：第一个参数是文件名及路径（如果没写则创建在可执行文件的相同目录下创建此文件）。第二个参数是文件的打开方式：主要有"w", "r", "a"
    fp = fopen("new.txt", "w");
    // 判断文件是否打开
    if (fp == NULL) {
        printf("打开文件失败");
        return; // 当函数中出现 return 的字样时，效果相当于 break;
    }
    for (int i = 'A'; i <= 'Z'; i++) {
        fputc(i, fp);
        fprintf(fp, "\t");
    }
    fclose(fp);
}
/*
 在C语言中，对文件进行读取同样很简单
 1、通过文件指针打开文件
 2、对文件中的数据用 fscanf 函数进行读取（注意：在用 fscanf 读取文件中的内容的时候，一定要注意文件里面的数据格式，如果不注意的话将会出现读取错误）
 3、用 fclose 函数关闭文件
 */
// MARK: 读文件方式
void fileRead(){
    // 1、创建一个文件指针
    FILE *fp = NULL;
    fp = fopen("new.txt", "r");
    if (fp == NULL) {
        printf("打开文件失败");
        return;
    }
    char a;
    for (int i = 0; i <= 26; i++) {
        fscanf(fp, "%c\t", &a);
        printf("%c", a);
    }
    printf("\n");
    fclose(fp);
}
int main(int argc, const char * argv[]) {
    fileWrite();
    fileRead();
    return 0;
}
