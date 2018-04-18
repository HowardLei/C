#include <stdio.h>
#include <string.h>
/*
 结构体
 一、语法：struct struct name {
                struct fields
            };
    其中： struct 是结构体的名称
          struct fields 结构体里成员列表
 二、结构体的操作
    对于一般的结构体，其操作符是用点操作符
    对于指针结构体，其操作符是用'->'操作符
 */
// 第一种：创建一般的结构体
struct Student {
    char name[20];
    char sex[4];
    int age;
};
int main(int argc, const char * argv[]) {
    // 第一类：一般结构体的创建
    struct Student zhangsan;
    strcpy(zhangsan.name, "张三丰");
    strcpy(zhangsan.sex, "男");
    zhangsan.age = 18;
    printf("姓名：%s ；性别：%s ；年龄：%d\n", zhangsan.name, zhangsan.sex, zhangsan.age);
    // 第二种：创建结构体指针。用于动态内存分配
    struct Student * p;
    strcpy(p -> name, "王尼玛");
    strcpy(p -> sex, "女");
    p -> age = 18;
    printf("姓名：%s ；性别：%s ；年龄：%d\n", p->name, p->sex, p->age);
    return 0;
}
