#include <stdio.h>
#define N 12
// MARK: 输入年月日，判断这一年第几天
int DayOfYear(int year, int month, int day){
    int Month1[N] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int Month2[N] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i = 0, allDays = 0;
    // 判读闰年
    if ((year % 4 == 0 && year % 100 != 0 )|| year % 400 == 0) {
        for (i = 0; i < month - 1; i++) {
            allDays += Month2[i];
        }
        allDays += day;
    } else {
        for (i = 0; i < month - 1; i++) {
            allDays += Month1[i];
        }
        allDays += day;
    }
    return allDays;
}
typedef struct year {
    int year;
    int month;
    int day;
} Canlendar;
// MARK: 输入某一年的第几天，输出他是几月几号
void Monthday(int year, int yearDay, int *pMonth, int *pDay){
    int dayTab[2][13] = {{0, 31, 28, 31, 30, 31, 30, 31, 31, 30 , 31, 30, 31},{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
    int i, leap;
    leap = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
    for (i = 1; yearDay > dayTab[leap][i]; i++) {
        yearDay -= dayTab[leap][i];
    }
    *pMonth = i;
    *pDay = yearDay;
}
int main(int argc, const char * argv[]) {
    Canlendar new;
    printf("请输入年:");
    scanf("%d", &new.year);
    printf("请输入月:");
    scanf("%d", &new.month);
    printf("请输入日:");
    scanf("%d", &new.day);
    int day = DayOfYear(new.year, new.month, new.day);
    printf("一共有%d天\n",day);
    int year, month, yearDay;
    printf("请输入年份以及总天数");
    scanf("%d,%d", &year, &yearDay);
    Monthday(year, yearDay, &month, &day);
    printf("那天是%d月%d日", month, day);
    return 0;
}
