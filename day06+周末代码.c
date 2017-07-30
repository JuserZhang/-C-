/*************************************************************************
   输入一个字符串和一个字符，删除字符串中后面的字符对应的元素并输出结果
	> Created Time: 2017年07月21日 星期五 22时29分47秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    char str[50]={0};
    char ch='\0';
    int flag=-1;
    printf("请输入一个字符串:");
    scanf("%s",str);
    printf("\n请输入一个字符:");
    scanf(" %c",&ch);
    for(int i=0;'\0'!=str[i];i++)
    {
        if(ch==str[i])
        {
            flag=i;
            break;
        }
    }
    if(-1!=flag)
    {
        for(int j=0;'\0'!=str[j];j++)
        {
            if(j==flag)
            {
                continue;
            }
            else
            {
                printf("%c",str[j]);
            }
        }
        printf("\n");
    }
    else
    {
        printf("字符串中%s找不到字符%c\n",str,ch);    
    }
    return 0;
}
/*************************************************************************
	输入一个含有大写、小写字母和阿拉伯数字的字符串，
    将其中的大写字母转换成小写字母，小写字母转换成大写，
    阿拉伯字符则加一（0->1、1->2、2->3...9->0），输出结果
	> 创建时间: 2017年07月21日 星期五 23时23分52秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    char str[50]={0};
    scanf("%s",str);
    for(int i=0;'\0'!=str[i];i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]-=32;
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            str[i]+=32;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            if('9'==str[i])
            {
                str[i]=='0';
            }
            else
            {
                str[i]+=1;
            }
        }
        else
        {
           continue; 
        }
    }
    printf("%s\n",str);
    return 0;
}
/*************************************************************************
	
	从键盘输入10个任意字符，输出其平均ascii值；
   
   > 创建时间: 2017年07月22日 星期六 19时44分36秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    char str[11]={0};
    int total=0; 
    float average=0;
    printf("请输入10个任意字符:");
    scanf("%s",str);
    for(int i=0;i<10;i++)
    {
        printf("%c : %d\n",str[i],str[i]);
        total+=str[i];
    }
    average=total/10.0;
    printf("平均ASCII值为：%.1f\n",average);
    return 0;
}

/*************************************************************************
    设计一个猜字母游戏，让用户输入一个字母(区分大小写)
	如果输入的字符是预先设定好的字母，则提示welcom，
    否则提示继续输入；如果连续输入的次数超过10次，
    则提示此字符并退出；任意时候输入字符'!'感叹号
    则提示预先设定好的字母并退出
	> 创建时间: 2017年07月22日 星期六 20时04分16秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
int main()
{
    int num=0;
    int n=10;
    char ch='\0';
    char inputChar='\0';
    srand(time(NULL));
    num=rand()%2;
    /**********************************************************
    *
    *  模拟计算机计算生成随机数过程！
    *
    ***********************************************************/
    printf("随机字母生成中");
    fflush(stdout);
    for(int i=0;i<=3;i++)
    {
        sleep(1);
        int j=(rand()%3+3);
        while(j--)
        {
            printf("*");
        }
        fflush(stdout);
    }
    /**********************************************************
    *
    *  根据随机num[0，1]的值随机生成大小写字母!
    *
    ***********************************************************/
    switch(num)
    {
        case 0:
            ch=rand()%26+'A';
            printf("\n已生成大写字母: ");
            break;
        case 1:
            ch=rand()%26+'a';    
            printf("\n已生成小写字母: ");
            break;
    }
    printf("%c\n",ch);
    /**********************************************************
    *
    *   验证用户输入的字母！
    *
    ***********************************************************/
    printf("请输入你猜的字母(提示: 输入!退出):");  
    while(n--)
    {
        scanf(" %c",&inputChar);
        if('!'==inputChar)
        {
            printf("退出成功!\n");
            break;
        }
        else if(ch==inputChar)
        {
            printf("正确！welcome\n");
            break;
        }
        else
        {
            printf("不正确哦！还有%d次机会!\n请继续输入:",n);
            continue;
        }
    }
    return 0;
}
/*************************************************************************
	
    输入一个正整数数，打印出其对应的原码、反码；(除2倒取余，数组存储其1/0)
    
    > 创建时间: 2017年07月22日 星期六 22时30分00秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int num=0,ret=0;
    int flag=0,n=0;
    int trueForm[32]={0};
    int RMOC[32]={0};
    scanf("%d",&num);
    while(1!=num)
    {
        ret=num%2;
        trueForm[flag]=ret;
        if(0==ret)
        {
            RMOC[flag]=1;
        }
        else
        {
            RMOC[flag]=0;
        }
        flag++;
        num/=2;        
    }
    trueForm[flag]=num;
    RMOC[flag]=0;
    n=flag;
    printf("该数的原码是：");
    while(-1!=flag)
    {
        printf("%d",trueForm[flag]);
        flag--;
    }
    flag=n;
    printf("\n该数的反码是：");
    while(-1!=flag)
    {
        printf("%d",RMOC[flag]);
        flag--;
    }

    printf("\n");
}
/*************************************************************************
	
   假设《我是歌手》节目组一共四位评委，现给一歌手评分（也就是输入4个数），
   分数范围0~10；试统计出此人得分平均数

    > 创建时间: 2017年07月22日 星期六 23时27分51秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int grade[4]={0};
    int total=0;
    float avgerage=0;
    for(int i=0;i<4;i++)
    {
        scanf(" %d",&grade[i]);
        total+=grade[i];
    }
    avgerage=total/4.0;
    printf("%.1f \n",avgerage);
    return 0;
}
/*************************************************************************

    输入一个字符串，不使用strlen函数，不使用scanf的返回值
    (注意：不是说不调用scanf)，统计此字符串的长度；
    (这里可能要使用 '\0'作为判断依据)；
	> 创建时间: 2017年07月22日 星期六 23时40分38秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    char str[100]={'0'};
    int len=0;
    scanf("%s",str);
    for(int i=0;'\0'!=str[i];i++)
    {
        len++;
    }
    printf("该字符串的长度为：%d\n",len);
    return 0;
}
/*************************************************************************
	输入一个6位的整数，将其每一位转换成对应的字符，再把字符值加一，
    将此字符逆序输出（0如输入整数１２３４５６.输出７６５４３２，
    设９加一变成０）
   	> 创建时间: 2017年07月22日 星期六 23时48分24秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int num=0;
    int remainder=0;
    int i=0;
    char str[6]={'0'};
    printf("请输入需要转换的数字：");
    scanf("%d",&num);
    for(i=0;0!=num;i++)
    {
        remainder=num%10;
        str[i]=(remainder+1) %10 + 48;
        num/=10;
    }
    printf("%s\n",str);
    return 0;
}
/*************************************************************************
	已知反字母表的加密算法的加密方式是：a<->z  b<->y .... Z<->A
    大小写一致，阿拉伯数字 1<->9 2<->8 .... 5<->0
	例如 i love you2 加密后变成 r olev blf8
	根据此算法，从键盘输入任意英文，打印出加密后的语句。
    > 创建时间: 2017年07月23日 星期日 09时57分43秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    char str[100]={'0'};
    char encrypt[100]={'0'};       
    for(int i=0;;i++)
    {
        scanf("%c",&str[i]);
        if('\n'==str[i])
        {
            break;
        }
        else if(str[i]>='a' && str[i]<='z')
        {
            encrypt[i]='a'+'z'-str[i];
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            encrypt[i]='A'+'Z'-str[i];
        }
        else if(str[i]>='0'&& str[i]<='9')
        {
            if('0'==str[i] || '5'==str[i])
            {
                encrypt[i]='0'+'5'-str[i];
            }
            else
            {
                encrypt[i]='1'+'9'-str[i];
            }
        }
        else
        {
            encrypt[i]=str[i];
        }
    }
    printf("%s\n",encrypt);
    return 0;
}

/*************************************************************************
	今发起投票公选班委，四人参加选举，假设一共30人参与投票
    （含被选举者本人），统计每人得票票数
	> 创建时间: 2017年07月23日 星期日 19时01分29秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int personNum=30;
    char strName[30]={0};
    int ANum=0;
    int BNum=0;
    int CNum=0;
    int DNum=0; 
    printf("用随机数模拟30人投票结果：\n");
    srand(time(NULL));
    for(int i=0;i<personNum;i++)
    {
        strName[i]=rand()%4+'A';
        printf("%c ",strName[i]);
    }
    printf("\n\n统计票数：\n");
    for(int j=0;j<personNum;j++)
    {
        switch(strName[j])
        {
            case 'A':
                ANum++;
                break;
            case 'B':
                BNum++;
                break;
            case 'C':
                CNum++;
                break;
            case 'D':
                DNum++;
                break;
        }
    }
    printf("\nA的票数=%d\nB的票数=%d\nC的票数=%d\nD的票数=%d\n",ANum,BNum,CNum,DNum);
    return 0;
}
/*************************************************************************
	英雄联盟中寒冰看见对面开始使用回城技能准备回城，已知回程时间8秒
	(1)假设寒冰此刻位置距离对面水泉6000码，寒冰的终极技能魔法水晶剑移动速度每秒1600码，
       试着计算多久后向对面释放终极技能可以命中目标。
	(2)现由于时间计算不足导致技能在命中目标后目标未死亡，已知技能对目标的晕眩时间计算
       公式为：技能移动距离/3200+ 2 秒,计算目标的晕眩时间
	> 创建时间: 2017年07月23日 星期日 19时41分25秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int backTime=8;
    int distance=6000;
    int speed=1600;
    float hitTime=0;
    float giddyTime=0;
    hitTime=distance*1.0/speed;
    if(hitTime<backTime)
    {
        printf("%.2f秒后可击中目标！\n",hitTime);
        giddyTime=distance*1.0/3200+2;
        printf("目标眩晕时间为%.2f秒\n",giddyTime);
    }
    else
    {
        printf("不可击中目标！\n");
    }
    return 0;
}

/*************************************************************************
	
    输入一个长的字符串和一个短的字符串
    删除长得字符串中对应短字符串的的部分并退出
   	> 创建时间: 2017年07月23日 星期日 20时00分03秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int i=0,j=0,n=0;
    int flag=0;
    char str1[100]={'\0'};
    char str2[50]={'\0'};
    char strTmp[100]={'\0'};
    printf("请输入一个字符串str1:");
    scanf("%s",str1);
    printf("请输入需要删除的字符串str2:");
    scanf("%s",str2);

    for(i=0;'\0'!=str1[i];i++)
    {
        flag=0;
        for(j=0;'\0'!=str2[j];j++)
        {
            if(str1[i]==str2[j])
            {
                flag=1;
            }
        }
        if(0==flag)
        {
            strTmp[n]=str1[i];
            n++;
        }
    }
    strTmp[n]='\0';
    for(n=0;'\0'!=strTmp[n];n++)
    {
        str1[n]=strTmp[n];
    }
    str1[n]='\0';
    printf("删除后的字符串str1为:%s\n",str1);
    return 0;
}
/*************************************************************************
	某字符串为1111110001100，统计后变为字符串61302120，观察二者规律，
    写出11110000000000000000000000111101010101111111111111110               
    统计出来的数据（已知同一字符连续出现的数量不超过15）
   	> 创建时间: 2017年07月23日 星期日 21时31分03秒
 ************************************************************************/

/***********************************************************************
*  
*  规律：统计后的字符串中每两个字符用来描述前面字符
*        如：1111110001100，表示6个1，3个0,2个1，2个0，即为61302120
*        已知同一字符连续出现的数量不超过15个，所以需要用十六进制进行表示。
*
************************************************************************/

#include<stdio.h>
int main()
{
    int n=1;
    char str[100]="11110000000000000000000000111101010101111111111111110";
    printf("%s\n",str);
    for(int i=0;'\0'!=str[i];i++)
    {
        if(str[i]==str[i+1] && n<15)
        {
            n++;
        }
        else
        {
            printf("%x%c",n,str[i]);
            n=1;
        }
    }
    printf("\n");
    return 0;
}

/*************************************************************************
	完善登录注册，将用户名和密码改为字符串
 	> 创建时间: 2017年07月23日 星期日 22时27分25秒
 ************************************************************************/

#include<stdio.h>
int isEqual(char str1[10],char str2[10])
{
    int flag=1;
    for(int i=0;'\0'!=str1[i];i++)
    {
        if(str1[i]!=str2[i])
        {
            flag=0;
        }
    }
    return flag;
}
int main()
{
    int n=0;
    char registerName[10]={'\0'};
    char registerPWD[10]={'\0'};
    char loginName[10]="admin";
    char loginPWD[10]="admin";
    while(1)
    {
        printf("1.register 2.login 3.quie\n");
        printf("请输入对应的数字：");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
                 printf("已进入注册模式\n请输入用户名:");
                 scanf("%s",registerName);
                 printf("请输入密码:");
                 scanf("%s",registerPWD);
                 break;
            case 2:
                 printf("已经进入登录模式\n请输入用户名:");
                 scanf("%s",loginName);
                 printf("请输入密码:");
                 scanf("%s",loginPWD);
                 
                 if(isEqual(registerName,loginName) && isEqual(registerPWD,loginPWD))
                 {
                    printf("\n登录成功!\n");
                 }
                 else
                 {
                     printf("\n用户名或密码错误！\n");
                 }
                 break;
            case 3:
                 printf("\n退出成功!\n");
                 return 0;   
                 break;
        }
    }

    return 0;
}
