/*************************************************************************
	> 文件名: test1.c
	> 作者:张鹏 
	> 邮箱:1365385081@qq.com 
	> 创建时间: 2017年07月25日 星期二 19时12分24秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int i=0,j=0, n=0;
    char str[9][10]={0};
    char (*p)[10]=NULL;
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            if(4==i+j || 12==i+j || 4==i-j || 4==j-i)
            {
                str[i][j]='*';
            }
            else
            {
                str[i][j]=' ';
            }
        }
        str[i][j]='\0';
    }
    p=str;
    n=9;
    while(n--)
    {
        printf("%s",*p++);
        printf("\n");
    }
    return 0;
}
/*************************************************************************
	> 文件名: test2.c
	> 作者:张鹏 
	> 邮箱:1365385081@qq.com 
	> 创建时间: 2017年07月25日 星期二 20时15分13秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int a[6][6]={0};
    int sum=0;
    int i=0,j=0;
    srand((unsigned)time(NULL));
    for(i=0;i<6;i++)
    {
        for(j=0;j<i;j++)
        {
            a[i][j]=rand()%100;
            sum+=a[i][j];
            printf("%-2d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n下三角之和是: %d\n",sum);
    return 0;
}
/*************************************************************************
	> 文件名: test3.c
	> 作者:张鹏 
	> 邮箱:1365385081@qq.com 
	> 创建时间: 2017年07月25日 星期二 20时50分09秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main()
{
    char name[3][16]={0};
    char *p1=name[0];
    char (*p2)[16]=NULL;
    char str1[5]="root";
    char str2[10]="password";
    int i=0,j=0;
   
    for(i=0;i<5;i++)
    {
        *p1=str1[i];
        p1++;
    }
    printf("%s\n",name[0]);
   
    printf("输入回车结束当前输入：");
    for(j=0;j<16;j++)
    {   
        name[1][j]=getchar();
        if('\n'==name[1][j])
        {
            break;
        }
    }
    printf("%s",name[1]);

    p2=name+2;
    strcpy(*p2,str2);
    printf("%s\n",name[2]);
    
    return 0;
}
/*************************************************************************
	> 文件名: xuanzuo.c
	> 作者:张鹏 
	> 邮箱:1365385081@qq.com 
	> 创建时间: 2017年07月25日 星期二 22时01分07秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int a=0X123456ff;
    int b=a,n=4;
    char *p=NULL;
    char *q=NULL;
    p=(char *)&a;
    q=(char *)&b+3;
    
    while(n--)
    {
        *p=*q;
        p++;
        q--;
    }
    printf("0x%x\n",a);
    return 0;
}
