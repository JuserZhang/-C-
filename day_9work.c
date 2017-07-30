1
回答：
已知有定义
int a[][4]  = {(1,2,3,4),4,5,7,8};

sizeof(a) = 32
a[1][1]   = 0


2有定义如下
	char p[4][10] = {"123456","asdfgh","qwerty","i am ok"};

	用指针数组输出第二行元素
	char *p2[3];

	char *q[4]=NULL;
	q[1]=&p[1][0];
	printf("%s",q[1]);
	
	用p2输出第四行里面的元素

有如下代码段，回答问题
	
	int a = 10;
	int b;
	
	void function(int x, int y)
	{
		int i = 0;
		static cell_times = 0;
		for(i = 0; i < x; i++)
		{
			printf("#");
		}
		putchar('\n');
		printf("this is %d times to cell me\n",cell_times++);
		return;
	}
	int main()
	{
		
		printf("a:%d\n",a);
		printf("b:%d\n",b);
		while(b<10)
		{
			function(a,b);
			b++;
		}	
	}
	
	主函数内最开始b的值是?
	描述cell_times变量的作用?
	
	b=0;
	计算函数调用的次数
	
函数编程题：

编写一个函数，功能是求整形参数二进制数中 1的个数和0的个数分别是多少？
即:所求的数来自于主函数所传递的传参;
