/*************************************************************************
	> File Name: test1.c
	> Author: 
	> Mail: 
	> Created Time: 2017年07月18日 星期二 19时30分14秒
 ************************************************************************/

#include<stdio.h>
void isTringle(int a,int b,int c)
{

    if(a+b>c && a+c>b && b+c>a)
    {
       if(a==b || b==c || c==a)
        {
            if(a==b==c)
            {
                printf("等边三角形\n");
            }
            else
            {
                printf("等腰三角形\n");
            }

        }
        else if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
        {
            if(a==b||b==c||b==c)
            {
                printf("等腰直角三角形\n");
            }
            else
            {
                printf("直角三角形\n");
            }
        }
        else
        {
            printf("普通三角形\n");
        }

    }
    else
    {
        printf("不能构成三角形\n");
    }
}
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    isTringle(a,b,c);
    return 0;
}
/*************************************************************************
	> File Name: test2.c
	> Author: 
	> Mail: 
	> Created Time: 2017年07月18日 星期二 21时32分27秒
 ************************************************************************/

#include<stdio.h>
void swap(int* a,int* b)
{
    if(*a>*b)
    {
        *a=*a+*b;
        *b=*a-*b;
        *a=*a-*b;
    }
}
int main()
{
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    swap(&x,&y);
    swap(&y,&z);
    swap(&x,&y);
    printf("%d %d %d",x,y,z);
    return 0;
}
/*************************************************************************
	> File Name: test3.c
	> Author: 
	> Mail: 
	> Created Time: 2017年07月18日 星期二 22时12分00秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    char xxx;
    scanf("%c",&xxx);
    if('a'<=xxx && xxx<='z')
    {
        xxx-=32;
    }
    else if('A'<=xxx && xxx<='Z')
    {
        xxx+=32;
    }
    printf("%c\n",xxx);
    return 0;
}
/*************************************************************************
	> File Name: test4.c
	> Author: 
	> Mail: 
	> Created Time: 2017年07月18日 星期二 22时20分23秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    unsigned char ch =0xab;
    unsigned char ch1=ch|(1<<2);
    unsigned char ch2=ch&~(1<<5);
    printf("%d %d\n",ch1,ch2);
    return 0;
}
/*************************************************************************
	> File Name: test5.c
	> Author: 
	> Mail: 
	> Created Time: 2017年07月18日 星期二 22时34分39秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(j==0||j==i)
            {
                printf("*");
            }
            else if(i==n-1)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
/*************************************************************************
	> File Name: test6.c
	> Author: 
	> Mail: 
	> Created Time: 2017年07月18日 星期二 23时14分09秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    for(int i=1;i<=9;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d*%d=%-2d  ",j,i,i*j);
        }
        printf("\n");
    }
    return 0;
}
