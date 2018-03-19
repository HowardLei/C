#include <stdio.h>
/*
 while语句：一般用于解决不知道循环次数的问题
 语法：while (condition(即达到啥条件时，进入这个循环，未达到条件，退出这个循环)) {
            statements（循环里面的表达式）
        }
 do-while语句：也是一种解决不知道循环次数的问题的方法
 语法：do {
            statements（先做循环体的事情）
        } while (condition)（在对条件进行判断， 如果成立的话就继续进入循环体，否则跳出循环）;
 */
//MARK: 求从1叠加，加到多少才是3003
void demo1(){
    int i = 0, sum = 0;
    while (sum != 3003) {
        i++;
        sum += i;
    }
    printf("当i=%d时，他的等差数列的和为3003\n",i);
}
//MARK:计算一个班级的平均分，for循环方法
void demo2(){
    int students = 0;
    double score = 0;
    double sum = 0;
    double average = 0;
    printf("请输入班级总人数：");
    scanf("%d",&students);
    for (int i = 1; i <= students; i++) {
        printf("请输入第%d个学生的成绩：",i);
        scanf("%lf",&score);
        sum += score;
    }
    average = sum / students;
    printf("这个班的平均分为：%g\n",average);
}
//MARK:计算一个班级的平均分，while循环方法（我写的）（输入负的成绩即停止计入）
void demo3(){
    int i = 1;
    double score = 0;
    double sum = 0;
    double average = 0;
    while (score >= 0) {
        printf("请输入第%d个同学的成绩：",i);
        scanf("%lf",&score);
        score >= 0 ? sum += score : 0;
        i++;
    }
    average = sum / (i - 2);//因为上面的地方i为i+2,所以在求求平均的时候需要减去多余的2项
    printf("本班的平均分为%g\n",average);
}
//MARK:计算一个班级的平均分，while循环方法（演示代码）
void demo4(){
    int n = 0;
    int sum = 0;
    int temp = 0;
    printf("请输入第%d名同学的成绩：",n + 1);
    scanf("%d",&temp);
    while (temp > 0) {
        n++;
        sum += temp;
        printf("请输入第%d名同学的成绩：",n + 1);
        scanf("%d",&temp);
    }
    printf("本班的平均分为%g\n",sum * 1.0 / n);
}
void demo5(){
    int i = 1;
    int sum = 0;
    while (i != 10) {
        sum += i;
        i++;
    }
    printf("%d\n",sum);
}
/*
 对比demo3与demo4：可得出
 程序的实现不只是有一种方法，但是有的方法想的东西逻辑简单，有的逻辑复杂。
 */
int main(int argc, const char * argv[]) {
    //demo2();
    //demo3();
//    demo4();
    demo5();
}
