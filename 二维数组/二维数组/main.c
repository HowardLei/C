#include <stdio.h>
//MARK: 1、字符数组与字符串之间的关系
void demo1(){
    char c[] = {'s','e','e'};
    char d[] = "HelloWorld";//这个字符串等价数组为：char d[] = {'H','e','l','l','o','W','o','r','l','d','\0'}; 注意\0在这里面代表的是字符串结束符
    //所以d这个字符数组中共有11个字符--10个字母，一个\0结束字符
    //在for循环中，用%c输出的是字符数组里的各个字符的值
    //但是在C语言中，字符串就是利用字符数组来保存的，只不过如果直接输出会在后边会输出一些没用的东西。
    printf("%s\n",c);
    printf("%s\n",d);
}
//MARK: 2、二维数组
void demo2(){
    //创建了一个二维数组，3行3列
    //1、直接赋值
    int i[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    /*
     赋值方法：
        1、定义的时候直接赋值
        2、通过一个个输入进行赋值
        3、通过for循环进行赋值
     */
    //2、通过一个个输入进行赋值
    i[2][2] = 10;
    //3、通过for循环进行赋值
    for (int j = 0; j < 3; j++) {
        for (int z = 0; z < 3; z++) {
            scanf("%d",&i[j][z]);
        }
    }
    /*
     根据所需要的效果，使用不同的数组类型。
     例如：如果记录一个班级的成绩，可以使用一维数组
          如果记录两个班级的成绩，可以使用二维数组（一个维度记录班级，一个维度记录成绩）
     如果记录一个学校各个班的成绩，可以使用三维数组（一个维度记录，一个维度记录班级，一个维度记录成绩）
     */
}
int main(int argc, const char * argv[]) {
//    demo1();
    demo2();
    return 0;
}
