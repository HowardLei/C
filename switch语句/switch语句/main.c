//需求：输入一个是数，显示他的大写
//如果运用if - else结构，代码会很丑陋
//需要用switch语句
//switch语句语法
//   switch (expression(表达式内容)) {
//      case constant（常量）:
//          statements（需要做的事情）
//          break;
//
//      default:（执行上面无法做的事情）
//          break;
//    }
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a;
    printf("请输入一个数，将会显示他的大写汉字\n");
    scanf("%d",&a);
    switch (a) {
        case 1:
            printf("壹\n");
            break;
        case 2:
            printf("贰\n");
            break;
        case 3:
            printf("叁\n");
            break;
        case 4:
            printf("肆\n");
            break;
        case 5:
            printf("伍\n");
            break;
        case 6:
            printf("陆\n");
            break;
        case 7:
            printf("柒\n");
            break;
        case 8:
            printf("捌\n");
            break;
        case 9:
            printf("玖\n");
            break;
        case 0:
            printf("零\n");
            break;
        default:
            printf("您所输入的数值不符合规则");
            break;
    }
}
