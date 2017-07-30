/*************************************************************************
	> 文件名: test1.c
	> 作者:张鹏 
	> 邮箱:1365385081@qq.com 
	> 创建时间: 2017年07月24日 星期一 20时00分40秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int a[4][5]={0};
    int max=0,min=0,total=0;
    float average=0.0;
    int i=0,j=0,n=0;
    int *p=&a[0][0];
    srand((unsigned)time(NULL));
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            a[i][j]=rand()%100;
            printf("%2d  ",a[i][j]);
            total+=a[i][j];
        }
        printf("\n");
    }
    n=sizeof(a)/sizeof(int);
    average=total*1.0/n;
    max=a[0][0];
    min=a[0][0];
    while(--n)
    {
        max = max > *(p+1) ? max : *(p+1);
        min = min < *(p+1) ? min : *(p+1);
        p++;
    }
    printf("max=%d\nmin=%d\naverage=%.2f\n",max,min,average);
    return 0;
}
/*************************************************************************
	> 文件名: test2.c
	> 作者:张鹏 
	> 邮箱:1365385081@qq.com 
	> 创建时间: 2017年07月24日 星期一 21时54分01秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main()
{
    char a[100]={0};
    char *p=NULL;
    int n=0;
    scanf("%s",a);
    n=strlen(a);
    p=&a[n-1];
    for(int i=n;i>0;i--)
    {
        printf("%c",*p--);
    }
}
/*************************************************************************
	> 文件名: xuanzuo.c
	> 作者:张鹏 
	> 邮箱:1365385081@qq.com 
	> 创建时间: 2017年07月24日 星期一 22时18分31秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int a=0x12345678;
    char *p=NULL;
    p=(char *)&a;
    *(p+3)=0x99;
    printf("0x%x\n",a);
    return 0;
}
