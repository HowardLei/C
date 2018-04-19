#include <stdio.h>
#include <stdlib.h>
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
 三、定义结构体的时候，可以同时生成几个变量
 四、简化结构体输入：1、用 define 宏定义 2、用 typedef 语句
 五、在结构体中，可以在结构体内部嵌套结构体
 六、结构体也能同样的创建数组。
 */
// MARK:第一种：创建一般的结构体
struct Student {
    char name[20];
    char sex[4];
    int age;
};
// MARK:第二种：创建结构体的同时，创建变量
struct Birthday {
    int year;
    int month;
    int day;
} me, you, his;
// MARK:用 typedef 简化结构体的名称 在这个结构体中：用 Gun 来代替 struct tagGun
typedef struct tagGun {
    char *gunName;
    int bulletNumber;
} Gun;
int main(int argc, const char * argv[]) {
    // 第一类：一般结构体的创建
    struct Student zhangsan = {"张三丰", "男", 18};
    strcpy(zhangsan.name, "张三丰");
    strcpy(zhangsan.sex, "男");
    zhangsan.age = 18;
    printf("姓名：%s ；性别：%s ；年龄：%d\n", zhangsan.name, zhangsan.sex, zhangsan.age);
    // 第二种：创建结构体指针。用动态内存分配
    struct Student * p = malloc(sizeof(struct Student));
    strcpy(p -> name, "王尼玛");
    strcpy(p -> sex, "女");
    p -> age = 18;
    printf("姓名：%s ；性别：%s ；年龄：%d\n", p->name, p->sex, p->age);
    // 第三种：用 typedef 语句创建结构体
    Gun AK47 = {"AK47", 30};
    printf("%s拿着%s，对着旁边的敌人一顿突突。\n", zhangsan.name, AK47.gunName);
    // 第四种：创建结构体数组
    struct Student ss[2] = {{"李四", "男", 80}, {"小明", "男", 23}};
    for (int i = 0; i < 2; i++) {
        printf("姓名：%s ；性别：%s ；年龄：%d\n", ss[i].name, ss[i].sex, ss[i].age);
    }
    return 0;
}
