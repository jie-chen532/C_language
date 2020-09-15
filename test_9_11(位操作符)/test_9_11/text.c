#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//求两个数二进制中不同位的个数
//int dif_count(int a, int b)
//{
//	int count = 0;
//	int n = a^b;
//	while (n)
//	{
//		count++;
//		n = n&(n - 1);  //去掉最右边的1
//		//例：3的二进制中有几个1
//		//0011  --n
//		//0010  
//		//0010  --n
//		//0001
//		//0000
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int ret = 0;
//	scanf("%d%d", &a, &b);
//
//	ret = dif_count(a, b);
//	printf("%d\n", ret);
//	return 0;
//}


//打印整数二进制的奇数位和偶数位
void print_bin(int a)
{
	int i = 0;
	for (i = 31; i >= 1;i -= 2)
	{
		printf("%d", (a >> i) & 1);
	}
	printf("\n");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d", (a >> i) & 1);
	}
	printf("\n");
}

int main()
{
	int a = 0;
	scanf("%d", &a);

	print_bin(a);
	return 0;
}


//统计二进制中1的个数
//int count_bin(int a)
//{
//	int count = 0;
//	while (a)
//	{
//		a = a&(a - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret=count_bin(a);
//
//	printf("%d\n", ret);
//	return 0;
//}

//局限：不能计算负数的
//int count_bin(int a)
//{
//	int count = 0;
//	while (a)
//	{
//		if (a % 2 == 1)
//		{
//			count++;
//		}
//		a = a / 2;
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret=count_bin(a);
//	
//	printf("%d\n", ret);
//	return 0;
//}

//缺点：不论是什么数据，都要执行32次
//int count_bin(int a)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) == 1)
//		例如：4 00000000 00000000 00000000 00000100
//		    &   00000000 00000000 00000000 00000001
//		        00000000 00000000 00000000 00000000
//		看最后一位，若为1，则最后一位为1，否则为0 
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret=count_bin(a);
//	
//	printf("%d\n", ret);
//	return 0;
//}


//交换两个变量（不创建临时变量）

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("%d %d\n", a, b);
//	return 0;
//}
