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
    }
    for (int i = 'A'; i <= 'Z'; i++) {
        fputc(i, fp);
        fprintf(fp, "\t");
    }
    fputs("abc", fp);
    fprintf(fp, "123");
    fclose(fp);
}
/*
 在C语言中，对文件进行读取同样很简单
 1、通过文件指针打开文件
 2、
 */
// MARK: 读文件方式
void fileRead(){
    // 1、创建一个文件指针
    FILE *fp = NULL;
    if (fp == NULL) {
        printf("打开文件失败");
    }

}
int main(int argc, const char * argv[]) {
    fileWrite();
    fileRead();
    return 0;
}
