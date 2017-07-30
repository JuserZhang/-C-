/*************************************************************************

    输出10000内的完备数

    > Created Time: 2017年07月21日 星期五 08时26分32秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int Total=0;
    for(int i=1;i<=10000;i++)
    {
        Total=0;

        for(int j=1;j<i;j++)
        {
            if(i%j==0)
            {
                Total+=j;
            }
        }
        if(i==Total)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
/*************************************************************************
	> File Name: promote1.c
	> Author: 
	> Mail: 
	> Created Time: 2017年07月20日 星期四 21时20分10秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int s=0;
    int t=1;
    for(int i=1;i<=4;i++)
    {
        t=1;
        for(int j=1;j<=i;j++)
        {
            t*=j;
        }
        s+=t;
    }
    printf("s=%d \n",s);
    return 0;
}
/*************************************************************************
	
   使用嵌套循环产生下列图案，要求用for嵌套循环。
      *
     ***
    ******
   ********
    > Created Time: 2017年07月20日 星期四 21时30分55秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int n=4;

    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
/*************************************************************************
	 
编程实现求一个十进制数中含有的二进制一的个数，如十进制的9含有二进制的一为2个，十进制15含有4个二进制一
> Created Time: 2017年07月20日 星期四 21时40分43秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int num;
    int n=0;
    printf("请输入一个十进制数:");

    scanf("%d",&num);
    while(1!=num)
    {
        if(1==num%2)
        {
           n++; 
        }
        num/=2;
    }
    n=n+1;
    printf("该十进制的二进制一的个数为%d\n",n);
    return 0;
}
/*************************************************************************
	
编写一个程序，用while，该程序读取整数，直到输入0，输入终止后，程序应该报告输入的偶数（不包括0）总个数，偶数的平均值，输入的奇数总个数以及奇数的平均值
    > Created Time: 2017年07月20日 星期四 22时26分32秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int num;
    int sFlag=0, dFlag=0;
    int sTotal=0,dTotal=0;
    float sAVG=0,dAVG=0;
    while(1)
    {
       scanf("%d",&num);
       if(0!=num)
        {
            if(0==num%2)
            {
                dFlag++;  
                dTotal+=num;
            }
            else
            {
                sFlag++;
                sTotal+=num;
            }
        }
        else
        {
            break;
        }
    }
    if(0!=sFlag)
    {
        sAVG=sTotal*1.0/sFlag;
    }
    if(0!=dFlag)
    {
        dAVG=dTotal*1.0/dFlag;
    }
    printf("偶数个数为：%d, 偶数的平均值为：%f\n",dFlag,dAVG);
    printf("奇数个数为：%d, 奇数的平均值为：%f\n",sFlag,sAVG);
    return 0;
}
/*************************************************************************
 判断101-    500之间有多少个素数，并输出所有素数，除了1和它本身以外不再有其他的因数。
     Created Time: 2017年07月20日 星期四 23时03分45秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
int main()
{
    int flag;
    for(int i=101;i<=500;i++)
    {
        flag=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }

        }
        if(0==flag)
        {
            printf("%d\n",i);
        }
        
    }
    return 0;
}
/*************************************************************************
	> File Name: test1.c
	> Author: 
	> Mail: 
	> Created Time: 2017年07月20日 星期四 17时00分15秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    char ch='F';
    for(int i=1;i<=6;i++)
    {
        for(int j=0;j<i;j++)
        {
            printf("%c",ch-j);
        }
        printf("\n");
    }
    return 0;
}
/*************************************************************************
	> File Name: test2.c
	> Author: 
	> Mail: 
	> Created Time: 2017年07月20日 星期四 17时06分57秒
 ************************************************************************/

#include<stdio.h>
int main()
{
 
    int a=5;
    int result=1;
    for(int i=1;i<=a;i++)
    {
        result*=i;
    }
    printf("%d\n",result);
    return 0;
}
/*************************************************************************
	> File Name: test3.c
	> Author: 
	> Mail: 
	> Created Time: 2017年07月20日 星期四 20时33分34秒
 ************************************************************************/

#include<stdio.h>

int main()
{
    int n=0;
    char sNameRegister='A';
    char sNameLogin='A';
Home: printf("1.register 2.login 3.quie\n");
    printf("请输入对应的数字：");
    scanf("%d",&n);
    if(1==n)
    {
        printf("\n请输入用户名:");
        scanf(" %c",&sNameRegister);
        goto Home;
    }
    else if(2==n)
    {
        printf("\n用户名:");
        scanf(" %c",&sNameLogin);
        if(sNameRegister==sNameLogin)
        {
            printf("\n登录成功!\n");
        }
        else
        {
            printf("\n登录失败！\n");
        }

    }
    else
    {
        printf("\n退出成功!\n");
        return 0;   
    }
    return 0;
}
