#include <stdio.h>
#include <stdlib.h>
#define N 40
#define A 10
// MARK: 8.4
// 获得不及格人数
int GetFailNum(int score[], int n){
    int i,count = 0;
    for (i = 0; i < n; i++) {
        if (score[i] < 60) {
            count++;
        }
    }
    return count;
}
// MARK: 8.5
// 读出成绩 返回值是学生人数
int ReadScore(int score[]){
    int i = -1;
    do {
        i++;
        printf("请输入第%d名同学的成绩", i + 1);
        scanf("%d", &score[i]);
    } while (score[i] >= 0);
    return i;
}
// 计算平均分
int Average(int score[], int n){
    int sum = 0, i, people = 0;
    if (n <= 0) {
        return 0;
    }
    for (i = 0; i < n; i++) {
        sum += score[i];
    }
    double average = sum / n;
    for (i = 0; i < n; i++) {
        if ((double)score[i] > average) {
            people++;
        }
    }
    printf("%g\n", average);
    return people;
}
// MARK: 8.6
// 读成绩函数
int demo1(int score[], long num[]){
    int i = -1;
    do {
        i++;
        printf("请输入学生的ID以及他的成绩");
        scanf("%ld,%d", &num[i], &score[i]);
    } while (score[i] >= 0 && num[i] >= 0);
    return i;
}
// 计算最高分函数
int FindMax(int score[], int n){
    int max = score[0], i, maxNum = 0;
    for (i = 1; i < n; i++) {
        if (score[i] > max) {
            max = score[i];
            maxNum = i;
        }
    }
    return maxNum;
}
// MARK: 8.7
// 存储数组
int * array(){
    int i = 0;
    int *p = malloc(A * sizeof(int));
    for (i = 0 ; i < A; i++) {
        printf("请输入数组的元素（共10个）");
        scanf("%d", p + i);
    }
    free(p);
    return p;
}
// 计算最大值
int Max(int array[]){
    int j = 0, k = 0;
    for (j = 1; j < A; j++) {
        if (array[k] < array[j]) {
            k = j;
        }
    }
    for (j = 0; j < A; j++) {
        printf("%d", array[j]);
    }
    return array[k];
}
// 计算最小值
int Min(int array[]){
    int j = 0, k = 0;
    for (j = 1; j < A; j++) {
        if (array[k] > array[j]) {
            k = j;
        }
    }
    for (j = 0; j < A; j++) {
        printf("%d", array[j]);
    }
    return array[k];
}
int main(int argc, const char * argv[]) {
    // 8.4 main 函数
//    int i, n, fail, score[N];
//    printf("How many students?");
//    scanf("%d", &n);
//    for (i = 0; i < n; i++) {
//        scanf("%d", &score[i]);
//    }
//    fail = GetFailNum(score, n);
//    printf("Fail students = %d\n", fail);
    // 8.5 main 函数
//    int Score[] = {0};
//    int allScore = ReadScore(Score);
//    int people = Average(Score, allScore);
//    printf("超过平均分的人数为：%d\n", people);
    // 8.6 main 函数
//    int SCORE[N], maxNum, n;
//    long num[N];
//    n = demo1(SCORE, num);
//    printf("班里一共有%d个学生。", n);
//    maxNum = FindMax(SCORE, n);
//    printf("最高分是%d，ID是%ld\n", SCORE[maxNum], num[maxNum]);
    // 8.7 main 函数
    int *p = array();
    int MAX = Max(p);
    int MIN = Min(p);
    printf("最大值为%d，最小值为%d", MAX, MIN);
    return 0;
}
