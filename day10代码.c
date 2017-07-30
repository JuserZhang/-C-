/***********************************************************************
*1:测试、观察printf的返回值
* 分析：
*    查看printf函数的声明可知返回值类型为int，所以定义一个int类型数组
*    接收多个printf函数的返回值
*    int printf(const char * format,.............);
************************************************************************/
#include<stdio.h>
int* testPrint(char testArr[][10])
{
    static int ret[10]={0};
    int i=0;
    for(int i=0;i<10;i++)
    {
        ret[i]=printf("%s\n",testArr[i]);
    }
    return ret;
}
int main()
{
    int *p=NULL;
    char testArr[10][10]={"asdfghjkl","asdfghjk","asdfghj","asdfgh","asdfg","asdf","asd","as","a"};
    p=testPrint(testArr);
    for(int i=0;i<10;i++)
    {
        printf("%d\n",p[i]);
    }
    return 0;
}
/*******************************************************************
输出结果:
asdfghjkl
asdfghjk
asdfghj
asdfgh
asdfg
asdf
asd
as
a

10
9
8
7
6
5
4
3
2
1

结论: printf函数的结果为int型的整数，大小为输出字符的个数。
*********************************************************************/
/*************************************************************************
	2:编写一个指针函数，把整数123转化成字符串”123”
	要求：函数名 int_to_str
		  参数	 来自主函数的scanf接收的整数
		  返回值 转换后的字符串(思考存储类型)
 ************************************************************************/

#include<stdio.h>
char* int_to_str(int num);
int main()
{
    int num=0;
    scanf("%d",&num);
    printf("%s\n",int_to_str(num));
    return 0;
}
char* int_to_str(int num)
{
    char src[10]={0};
    static char desk[10]={0};
    int i=0,j=0;
    while(num)
    {
        src[i]='0'+num%10; 
        num/=10;
        i++;
    }
    src[i]='\0';
    
    for(j=0;'\0'!=src[j];j++)
    {
        i--;
        desk[j]=src[i];
    }
    desk[j]='\0';
    return desk;
}

/*************************************************************************
 3：编写函数判断一个字符串是否为回文字符串。
	level
	Yes
	12345
	No
要求：	函数名：	if_plalindrome
		参数：		输入的字符串
		返回值：	如果是回文数，返回0；
					如果不是，返回-1；
		区分大小写，Level不是回文数；
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int if_plalindrome(char src[]);
int main()
{
    int ret=0;
    char str[50]={0};
    scanf("%s",str);
    ret=if_plalindrome(str);
    if(0==ret)
    {
        puts("YES");
    }
    else
    {
        puts("NO");
    }
    return 0;
}
int if_plalindrome(char src[])
{
    char desk[50]={0};
    int len=strlen(src);
    int i=0,j=len-1;
    int ret=0;
    for(i=0;i<len;i++)
    {
        desk[i]=src[j];
        j--;
    }
    desk[i]='\0';
    if(0==strcmp(desk,src))
    {
        return 0;
    }
    else
    {
        return -1;
    }
}
/*************************************************************************
1从键盘输入一个字符串，通过函数实现:
	按照字符顺序从小到大进行排序，
	并要求删除重复的字符。如输入”ad2f3adjfeainzzzv”，则输出”23adefijnvz”。
 ************************************************************************/

#include<stdio.h>
#include<string.h>
void arr_sort(char src[]);
void swap(char *p,char *q);
void del_overlap(char src[]);
int main()
{
    char str[100]={0};
    scanf("%s",str);
    arr_sort(str);
    printf("%s\n",str);
    del_overlap(str);
    printf("%s\n",str);
}
void arr_sort(char src[])
{
    int i=0,j=0;
    char min=0;
    int len=strlen(src);

    for(i=0;i<len-1;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(src[i]>src[j])
            {
                swap(&src[i],&src[j]);   
            }
            else
            {
                continue;
            }
        }
    }
}
void swap(char *p,char *q)
{
    int tmp=0;
    tmp=*p;
    *p=*q;
    *q=tmp;
}
void del_overlap(char src[])
{
    char desk[100]={0};
    int len=strlen(src);
    int i=0,j=0;
    for(i=0;i<len;i++)
    {
        if(src[i]==src[i+1])
        {
            continue;
        }
        else
        {
            desk[j]=src[i];
            j++;
        }
    }
    desk[j]='\0';
    strcpy(src,desk);
}
/*************************************************************************
 2 编写函数insert(char *s1,char *s2,int pos)，
   实现在字符串s1中的指定位置pos处插入字符串s2
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int insert(char *,char *,int);
int main()
{
    char str1[100]={0};
    char str2[50]={0};
    int pos=0;
    int ret=0;
   
    printf("请输入一串字符：");
    fgets(str1,100,stdin);
    printf("请输入需要插入的字符串：");
    fgets(str2,50,stdin);
    printf("请输入需要插入的位置：");
    scanf("%d",&pos);
    ret = insert(str1,str2,pos);
    if(!ret)
    {
        printf("%s\n",str1);
    }
    else
    {
        printf("插入位置不合法\n");
    }
    return 0;
}
int insert(char *s1,char *s2,int pos)
{
    int len=strlen(s1);
    int len2=strlen(s2);
    char tmp[100]={0};
    int i=0,j=pos,maxlen=0;
    maxlen=(len-pos)>len2 ? (len-pos) : len2;
    if(pos>=0 && pos<=len)
    {

        while(maxlen--)
        {
            tmp[i]=s1[j];
            s1[j]=s2[i];
            j++;
            i++;
        }
        s1[pos+len2-1]='\0';
        tmp[len-pos]='\0';
        strcat(s1,tmp);
        return 0;
    }
    else
    {
        return -1;
    }
}
/*************************************************************************
 3 编写程序，实现下面一个有关单词个数统计问题。编写一个函数
 findstr(char *str,char *substr)，该函数统计一个长度为2的子字符串在
 另一个字符串中出现的次数。例如，假定输入的字符串为
	”asd asasdfg asd as zx67 asd mklo”，子字符串为as，函数返回值是6
 ************************************************************************/
#include<stdio.h>
#include<string.h>
int findstr(char *str,char *substr);
int main()
{
    char str[100]={0};
    char substr[10]={0};
    fgets(str,100,stdin);
    fgets(substr,10,stdin);
    printf("%d\n", findstr(str,substr));
    return 0;
}
int findstr(char *str,char *substr)
{
    int i=0,j=0,k=0;
    int num=0;
    int len=strlen(str);
    int sublen=strlen(substr);
    for(i=0;'\0'!=str[i];i++)
    {
        if(str[i]==substr[0])
        {
            k=i+1;
            j=1;
            while(j<sublen-1)
            {
                if(str[k]==substr[j])
                {
                    k++;
                    j++;
                }
                else
                {
                    break;
                }
            }
            if(j==sublen-1)
            {
                num++;
                i=k-1;
            }
        }
    }
    return num;
}
/*************************************************************************
  4 有n个人围成一个圆圈，顺序排号，从第一个人开始报数(从1到3报数)，凡
	报到3的人退出圈子，问最后留下的是原来的第几号？
 ************************************************************************/

#include<stdio.h>
int main()
{
    int n=0;
    int i=0,j=0,k=0;
    int num[100]={0};

    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(0!=i%3)
        {
            num[j]=i;
            j++;
        }
        else
        {
            continue;
        }
    }
    while(k<j)
    {
        printf("%d\n",num[k]);
        k++;
    }
    return 0;
}
