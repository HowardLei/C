//  数组的使用
#include <stdio.h>
void answer(){
    int score[10];//创建存这10个数的数组
    int i = 0,j = 0;
    for (i = 0; i < 10; i++) {
        scanf("%d",&score[i]);
    }
    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 10; j++) {
            if (score[i] < score[j]) {
                int temp = score[i];
                score[i] = score[j];
                score[j] = temp;
            }
        }
    }
    for (i = 0; i < 10; i++) {
        printf("%d\t",score[i]);
    }
}
//MARK:修改后的代码
void demo1(){
	int score[10];
	int i = 0,b = 0;
	for(i = 0; i < 10; i++){
		printf("请输入第%d位同学的成绩:",i + 1);
		scanf("%d",&score[i]);
	}
	for(i = 0; i < 9; i++){
		for(b = 1; b < 10; b++)//为什么这个地方写i + 1对，写1就不对？
        {
			if (score[i] < score[b]){
				int temp = score[i];
				score[i] = score[b];
				score[b] = temp;
			}
		}
	}
	for(i = 0; i <= 9; i++){
		printf("%d\n",score[i]);
	}
}
//需求：输入十个数，对其进行排序
int main(int argc, const char * argv[]) {
    answer();
    return 0;
}
