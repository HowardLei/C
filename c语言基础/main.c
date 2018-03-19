#include <stdio.h>
//MARK:无条件转向语句：goto 标签,现在基本不再使用。因为写起来容易错乱
void test1(){
    printf("1\n");
    goto l;
    printf("2\n");
l:
    printf("3\n");
}
//MARK:条件转向语句：if语句
void test2(){
    /* 格式
     if (condition:在里面可以写：常量，变量，运算式，比较式) {
     statements：条件成立时要做的事情
     }*/
    //需求:判断数是不是奇数，条件就是变量
    int a;
    scanf("%d",&a);
    if (a % 2 == 1) {
        printf("%d是奇数\n",a);
    } else {
        printf("%d不是奇数\n",a);
    }
    printf("--------\n");
    //当他作为常量的时候，条件非0即真
    if (-678686) {
        printf("a\n");
    }
    //运算式
    int x;
    printf("请问什么数加5等于10？\n");
    scanf("%d",&x);
    if (x + 5 == 10) {
        printf("正确\n");
    }else{
        printf("错误\n");
    }
}
//MARK:多重条件判断
//代码实现顺序：先看if里的是否成立，再看else if中的有没有符合的，如果都没有最后统一执行else里的代码
void test3(){
    //需求：根据分数判断学生的优良差
    printf("请输入成绩\n");
    int a = 0;
    scanf("%d",&a);
    if (a < 60) {
        printf("他不及格\n");
    }else if (a < 80){
        printf("刚好及格\n");
    }else if (a < 90){
        printf("成绩良好\n");
    }else if (a < 100){
        printf("优秀\n");
    }else{
        printf("你输入的数不成立\n");
    }
}
void test4(){
    //需求：输入一个字母，让其显示一个名字
    char asa = "a";
    printf("请输入一个字母：");
    scanf("%c",&asa);
    switch (asa) {
        case a:
            printf("张三\n");
            break;
        case b:
            printf("李四\n");
            break;
        default:
            printf("对不起，现在只能输入一个字母\n");
            break;
    }
}
int main(int argc, const char * argv[]) {
    //c语言程序结构为：顺序和分支
//    test1();
//    test2();
//    test3();
    test4();
    return 0;
}
