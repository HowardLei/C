#include<stdio.h>
#include<stdarg.h>
#include<stdlib.h>
FILE *fp;
/*该函数模拟一架天平，它的第一个参数为天平某边放的砝码数，且砝码量左边等于
 右边之后的参数为各砝码，它们从左到右依次传入，必须保证总数量等于第一个参
 数×2天平的返回值只有大于0，等于0，小于0三种情况，分别表示左边重、平衡、右
 边重
 */
int flag;
int _cdecl_scale(int num,...) {
    va_list list;
    int left=0,right=0,i;

    flag++;
    if(flag>3)
    {
        printf("天平使用次数超过3次！！/n");
        _getch();
        exit(1);
    }

    va_start(list,num);
    for(i=num;i;i--)
        left+=(int)va_arg(list,int);/*天平左边总重量*/
    for(i=num;i;i--)
        right+=(int)va_arg(list,int);/*天平右边总重量*/
    va_end(list);

    return left-right;
}
/*初始化砝码*/
void iniweight(int *poise) {
    int i=1;
    static j=0;
    while(i<13)*(poise+i++)=2;/*将2作为标准砝码重量*/
    if(j<12)*(poise+j+1)=1;/*特殊小球轻的情况*/
    else *(poise+j%12+1)=3;/*特殊小球重的情况*/
    j++;
    for(i=1;i<13;i++){
        fprintf(fp,"%d(%d) ",i,*(poise+i));
    }
    fprintf(fp,"/n");
}
/*三次使用天平操作*/
void operat(int *poise)
{
    int var;
    var=scale(4,
              poise[1],poise[2],poise[3],poise[4],
              poise[5],poise[6],poise[7],poise[8]
              );
    if(var>0)
    {
        int var;
        fprintf(fp,"S1:{1.2.3.4}>{5.6.7.8}/n");
        var=scale(3,
                  poise[2],poise[3],poise[5],
                  poise[4],poise[6],poise[9]
                  );
        if(var>0)
        {
            int var;
            fprintf(fp,"S2:{2.3.5}>{4.6.9}/n");
            var=scale(1,poise[2],poise[3]);
            if(var>0)
            {
                fprintf(fp,"S3:{2}>{3}/n");
                fprintf(fp,"resule:2/n");
            }
            if(var<0)
            {
                fprintf(fp,"S3:{2}<{3}/n");
                fprintf(fp,"resule:3/n");
            }
            if(!var)
            {
                fprintf(fp,"S3:{2}=={3}/n");
                fprintf(fp,"resule:6/n");
            }
        }
        if(var<0)
        {
            int var;
            fprintf(fp,"S2:{2.3.5}<{4.6.9}/n");
            var=scale(1,poise[1],poise[4]);
            if(var)
            {
                fprintf(fp,"S3:{X}!={4}/n");
                fprintf(fp,"resule:4/n");
            }
            else
            {
                fprintf(fp,"S3:{X}=={4}/n");
                fprintf(fp,"resule:5/n");
            }
        }
        if(!var)
        {
            int var;
            fprintf(fp,"S2:{2.3.5}=={4.6.9}/n");
            var=scale(1,poise[7],poise[8]);
            if(var>0)
            {
                fprintf(fp,"S3:{7}>{8}/n");
                fprintf(fp,"resule:8/n");
            }
            if(var<0)
            {
                fprintf(fp,"S3:{7}<{8}/n");
                fprintf(fp,"resule:7/n");
            }
            if(!var)
            {
                fprintf(fp,"S3:{7}=={8}/n");
                fprintf(fp,"resule:1/n");
            }

        }

    }
    if(var<0)
    {
        int var;
        fprintf(fp,"S1:{1.2.3.4}<{5.6.7.8}/n");
        var=scale(3,
                  poise[2],poise[3],poise[5],
                  poise[4],poise[6],poise[9]
                  );
        if(var>0)
        {
            int var;
            fprintf(fp,"S2:{2.3.5}>{4.6.9}/n");
            var=scale(1,poise[1],poise[4]);
            if(var)
            {
                fprintf(fp,"S3:{X}!={4}/n");
                fprintf(fp,"resule:4/n");
            }
            else
            {
                fprintf(fp,"S3:{X}=={4}/n");
                fprintf(fp,"resule:5/n");
            }

        }
        if(var<0)
        {
            int var;
            fprintf(fp,"S2:{2.3.5}<{4.6.9}/n");
            var=scale(1,poise[2],poise[3]);
            if(var>0)
            {
                fprintf(fp,"S3:{2}>{3}/n");
                fprintf(fp,"resule:3/n");
            }
            if(var<0)
            {
                fprintf(fp,"S3:{2}<{3}/n");
                fprintf(fp,"resule:2/n");
            }
            if(!var)
            {
                fprintf(fp,"S3:{2}=={3}/n");
                fprintf(fp,"resule:6/n");
            }
        }
        if(!var)
        {
            int var;
            fprintf(fp,"S2:{2.3.5}=={4.6.9}/n");
            var=scale(1,poise[7],poise[8]);
            if(var>0)
            {
                fprintf(fp,"S3:{7}>{8}/n");
                fprintf(fp,"resule:7/n");
            }
            if(var<0)
            {
                fprintf(fp,"S3:{7}<{8}/n");
                fprintf(fp,"resule:8/n");
            }
            if(!var)
            {
                fprintf(fp,"S3:{7}=={8}/n");
                fprintf(fp,"resule:1/n");
            }
        }
    }
    if(!var)
    {
        int var;
        fprintf(fp,"S1:{1.2.3.4}=={5.6.7.8}/n");
        var=scale(2,poise[9],poise[10],poise[11],poise[1]);
        if(var>0)
        {
            int var;
            fprintf(fp,"S2:{9.10}>{11.X}/n");
            var=scale(2,poise[9],poise[11],poise[12],poise[1]);
            if(var>0)
            {
                fprintf(fp,"S3:{9.11}>{12.X}/n");
                fprintf(fp,"resule:9/n");
            }
            if(var<0)
            {
                fprintf(fp,"S3:{9.11}<{12.X}/n");
                fprintf(fp,"resule:11/n");
            }
            if(!var)
            {
                fprintf(fp,"S3:{9.11}=={12.X}/n");
                fprintf(fp,"resule:10/n");
            }
        }
        if(var<0)
        {
            int var;
            fprintf(fp,"S2:{9.10}<{11.X}/n");
            var=scale(2,poise[9],poise[11],poise[12],poise[1]);
            if(var>0)
            {
                fprintf(fp,"S3:{9.11}>{12.X}/n");
                fprintf(fp,"resule:11/n");
            }
            if(var<0)
            {
                fprintf(fp,"S3:{9.11}<{12.X}/n");
                fprintf(fp,"resule:9/n");
            }
            if(!var)
            {
                fprintf(fp,"S3:{9.11}=={12.X}/n");
                fprintf(fp,"resule:10/n");
            }
        }
        if(!var)
        {
            fprintf(fp,"S2:{9.10}=={11.X}/n");
            fprintf(fp,"resule:12/n");
        }

    }
}
int main()
{
    /*为便于编码一致性，存放从poise[1]单元起*/
    int poise[13],i;

    fp=fopen("print.txt","w");
    for(i=0;i<24;i++)
    {
        flag=0;/*限制天平使用次数*/
        fprintf(fp,"===[%d]===/n",i+1);
        iniweight(poise);
        operat(poise);
    }
    fclose(fp);
    return 0;
}
