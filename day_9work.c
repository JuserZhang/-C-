1
�ش�
��֪�ж���
int a[][4]  = {(1,2,3,4),4,5,7,8};

sizeof(a) = 32
a[1][1]   = 0


2�ж�������
	char p[4][10] = {"123456","asdfgh","qwerty","i am ok"};

	��ָ����������ڶ���Ԫ��
	char *p2[3];

	char *q[4]=NULL;
	q[1]=&p[1][0];
	printf("%s",q[1]);
	
	��p2��������������Ԫ��

�����´���Σ��ش�����
	
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
	
	���������ʼb��ֵ��?
	����cell_times����������?
	
	b=0;
	���㺯�����õĴ���
	
��������⣺

��дһ�������������������β������������� 1�ĸ�����0�ĸ����ֱ��Ƕ��٣�
��:������������������������ݵĴ���;
