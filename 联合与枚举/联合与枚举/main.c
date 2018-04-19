#include <stdio.h>
/*
 联合与枚举
 一、联合本身语法结构与结构体相同，唯一的不同点是：结构体里面的各个成员占用不同的内存空间
    而在联合中所有的数据成员共用一个空间，同一时间只能储存其中一个数据成员，所有的数据成员具有相同的起始地址。所以说：一般在存储不同成员的不同变量的情况下用联合。而且：共用体不能进行比较操作，也不能作为函数参数。
    注意：在内存分配的时候，如果里面的数据很多，在查看内存分配的时候，一定要注意内存对齐。在不同的系统中，内存对齐的原则也不太相同。
 二、枚举：即一一列举
    枚举数据类型：描述的是一组整形数的集合。
    '{}'里面的标识符是有值的。默认情况下第一个值为0，后边的值一次依次加1。
 */
// MARK: 学生的联合
typedef union MEStudent{
    int number;
    char name[18];
} Student;
// MARK: 人的结构体
typedef struct MEPeople{
    int number;
    char name[18];
} People;
// MARK: 四季的枚举
enum Seasons{spring, summer, fall, winter};
int main(int argc, const char * argv[]) {
    Student zhangsan;
    People lisi;
    printf("%ld\n", sizeof(zhangsan));
    enum Seasons xiatian;
    xiatian = summer;
    printf("%d\n",xiatian);
    return 0;
}
