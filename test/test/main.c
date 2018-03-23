#include <stdio.h>
#include <math.h>
//MARK: 5.1
void demo1(){
    double a = 0;
    printf("请输入一个实数:");
    scanf("%lf",&a);
    if (a < 0) {
        a = -a;
    }
    printf("他的绝对值为：%g\n",a);
}
//MARK: 5.2
void demo2(){
    int a = 0;
    printf("请输入一个数，用来判断其奇偶性：");
    scanf("%d",&a);
    if (a % 2 == 0) {
        printf("它是偶数\n");
    }else{
        printf("他是奇数\n");
    }
}
//MARK: 5.3
void demo3(){
    double width[3];
    int i;
    for (i = 0; i < 3; i++) {
        printf("请输入第%d个边长：",i + 1);
        scanf("%lf", &width[i]);
    }
    if (width[1] + width[2] > width[0] && width[2] + width[0] > width[1] && width[1] + width[0] > width[2]) {
        float s = (width[0] + width[1] +width[2])/2;
        float area = sqrt(s * (s - width[0]) * (s - width[1]) * (s - width[2]));
        printf("这个三角形的面积是：%g\n",area);
    } else {
        printf("这个不是三角形\n");
    }
}
//MARK: 5.4
void demo4(){
    int year = 1;
    double money = 0, allMoney = 0;
    printf("请输入您所需要存款的本金：");
    scanf("%lf",&money);
    printf("请输入您所需要存储的时间：");
    scanf("%d",&year);
    switch (year) {
        case 1:
            allMoney = money * (1 + 0.0225);
            printf("%g\n",allMoney);
            break;
        case 2:
            allMoney = money * pow((1 + 0.0243), 2);
            printf("%g\n",allMoney);
            break;
        case 3:
            allMoney = money * pow((1 + 0.0227), 3);
            printf("%g\n",allMoney);
            break;
        case 5:
            allMoney = money * pow((1 + 0.0288), 5);
            printf("%g\n",allMoney);
            break;
        case 8:
            allMoney = money * pow((1 + 0.03), 8);
            printf("%g\n",allMoney);
            break;
        default:
            printf("无法计算\n");
            break;
    }
}
//MARK: 5.5
void demo5(){
    int year = 0,flag = 0;
    printf("Enter year:");
    scanf("%d",&year);
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        flag = 1;
    } else {
        flag = 0;
    }
    if (flag == 1) {
        printf("%d是闰年\n",year);
    } else {
        printf("%d不是闰年\n",year);
    }
}
int main(int argc, const char * argv[]) {
    demo1();
    printf("------\n");
    demo2();
    printf("------\n");
    demo3();
    printf("------\n");
    demo4();
    printf("------\n");
    demo5();
    return 0;
}
