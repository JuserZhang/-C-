/*************************************************************************
	> File Name: promote1.c
	> Author: 
	> Mail: 
	> Created Time: 2017年07月19日 星期三 18时26分35秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int a,b,c;
    for(int i=1;i<=4;i++)
    {
        a=i;
        for(int j=1;j<=4;j++)
        {
            if(i==j)
            {
                continue;
            }
            else
            {
                b=j;
                for(int k=1;k<=4;k++)
                {
                    if(k==j || k==i)
                    {
                        continue;
                    }
                    c=k;
                    printf("%d%d%d ",a,b,c);
                }
            }               
        }
        printf("\n");
    }

    return 0;
}
/*************************************************************************
	> File Name: promote2.c
	> Author: 
	> Mail: 
	> Created Time: 2017年07月19日 星期三 20时16分10秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int year;
    int month;
    int date;
    int total=0;
    int tmp;
    printf("请输入任意日期（格式如19900101）：");

    scanf("%4d%2d%2d",&year,&month,&date);
    
    //验证月份是否合法
    if(month>=1 && month<=12)
    {
        //验证日期是否合法
        switch(month)
        {
        case 2:
            if((0==year%100 && 0==year%400) || (0!=year%100 && 0==year%4))
            {
                tmp=29;
                if(date<=0 || date >tmp)
                {
                    printf("日期不合法\n");
                    return -1;
                }
            }
            else
            {
                tmp=28;
                if(date<=0 || date >tmp)
                {
                    printf("日期不合法\n");
                    return -1;
                }
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11: 
            tmp=30;
            if(date<=0 || date >tmp)
            {
                printf("日期不合法\n"); 
                return -1;
            }
            break;
        default:
            tmp=31;
            if(date<=0 || date >tmp)
            {
                printf("日期不合法\n"); 
                return -1;
            }
            break;
        }

     printf("你输入的日期是：%d-%d-%d \n",year,month,date);
        //计算
        for(int i=1;i<month;i++)
        {
            switch(i)
            {
            case 2:
                if((0==year%100 && 0==year%400) || (0!=year%100 && 0==year%4))
                {
                    tmp=29;
                }
                else
                {
                    tmp=28;
                }
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                tmp=30;
                break;
            default:
                tmp=31;
                break;
            }
            total+=tmp; 
        }
        printf("%d\n",total+date);
        return 0;
    }
    else
    {
        printf("月份不合法\n");
        return -1;
    }
}
/*************************************************************************
	> File Name: promote3.c
	> Author: 
	> Mail: 
	> Created Time: 2017年07月20日 星期四 08时24分37秒
 ************************************************************************/

#include<stdio.h>
#include<unistd.h>
int main()
{
    int num;
    int n=6;
    printf("Please input a num:");
    scanf("%d",&num);
    printf("数据载入中，请稍后");
    while(n--)
    {
        printf("#");     
        fflush(stdout);
        sleep(1);
    }
    printf("\n数据分析中");
    n=5;
    while(n--)
    {
        printf("**");
        fflush(stdout);
        sleep(1);
    }
    printf("\n");
    n=3;
    while(n--)
    {
        printf("!\n");
        sleep(1);
    }
    switch(num/10)
    {
        case 9:
            printf("智商较高！\n");
            break;
        case 8:
        case 7:
            printf("智商一般！\n");
            break;
        case 6:
        case 5:
            printf("智商感人！\n");
            break;
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            printf("!!!MDZZ!!!\n");
            break;
        default:
            printf("!!!天才!!!\n");
            break;
    }

    return 0;
}
/*************************************************************************
	> File Name: test1.c
	> Author: 
	> Mail: 
	> Created Time: 2017年07月19日 星期三 16时52分17秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if(0==num)
    {
        printf("注册\n");
        return 0;
    }
    else if(1==num)
    {
        printf("登录\n");
        return 0;
    }
    else 
    {
        printf("退出\n");
    }
    return 0;
}
/*************************************************************************
	> File Name: test2.c
	> Author: 
	> Mail: 
	> Created Time: 2017年07月19日 星期三 17时01分57秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    char ch;
    int num;
    printf("Input a char and a num:");
    scanf("%c %d",&ch,&num);
    if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
    {
        printf("%c+%d=%c\n",ch,num,ch+num);
    }
    
    return 0;

}
/*************************************************************************
	> File Name: test3.c
	> Author: 
	> Mail: 
	> Created Time: 2017年07月19日 星期三 17时10分26秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    float x;
    scanf("%f",&x);
    if(x<1)
    {
        printf("%f\n",x);
    }
    else if(x>=1&&x<10)
    {
        printf("%f\n",2*x-1);
    }
    else
    {
        printf("%f\n",3*x-11);
    }
    return 0;
}
/*************************************************************************
	> File Name: test4.c
	> Author: 
	> Mail: 
	> Created Time: 2017年07月19日 星期三 17时16分16秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s,area;
    printf("Input the a、b、c: ");
    scanf("%f %f %f",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a)
    {
        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("area=%f\n",area);
    }
    else
    {
        printf("不能构成三角形!\n");
    }


    return 0;
}
/*************************************************************************
	> File Name: test5.c
	> Author: 
	> Mail: 
	> Created Time: 2017年07月19日 星期三 17时25分58秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int grade;
    scanf("%d",&grade);
    if(grade>=0 && grade<=100)
    {

        switch(grade/10)
        {
            case 10:
            case 9:
                putchar('A');
                break;
            case 8:
                putchar('B');
                break;
            case 7:
                putchar('C');
                break;
            case 6:
                putchar('D');
                break;
            default:
                putchar('E');
                break;
        }
    }
    else 
        printf("grade is illegal\n");
    return 0;
}
