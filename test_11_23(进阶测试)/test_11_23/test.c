#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>
#include<string.h>

//交换奇偶位   宏定义

//分别拿出奇数位与偶数位，奇数向左一位，偶数向右一位
//用n&0x55555555 得到的是奇数位   n&0xaaaaaaaa得到的是偶数位

//#define BITCHANGE(n) ((((n) & 0x55555555) << 1) + (((n) & 0xaaaaaaaa) >> 1))
//int main()
//{ 
//	int n = 0;
//	scanf("%d", &n);
//	int ret = BITCHANGE(n);
//	printf("%d\n", ret);
//	return 0; 
//}


//Fibonacci数列就形如：0, 1, 1, 2, 3, 5, 8, 13, ...，在Fibonacci数列中的数我们称为Fibonacci数。
//给你一个N，你想让其变为一个Fibonacci数，每一步你可以把当前数字X变为X - 1或者X + 1，
//现在给你一个数N求最少需要多少步可以变为Fibonacci数。

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int f1 = 0;
//	int f2 = 1;
//	int f3 = 0;
//	while (1)
//	{
//		f3 = f1 + f2;
//		f1 = f2;
//		f2 = f3;
//		if (n == f2)
//		{
//			printf("%d\n", 0);
//			break;
//		}
//		else if (n < f2)
//		{
//			if (abs(n - f2) > abs(n - f1))
//			{
//				printf("%d\n", abs(n - f1));
//				break;
//			}
//			else
//			{
//				printf("%d\n", abs(n - f2));
//				break;
//			}
//		}
//	}
//	return 0;
//}



//请实现一个函数，将一个字符串中的每个空格替换成“%20”。
//例如，当字符串为We Are Happy.则经过替换之后的字符串为We%20Are%20Happy。
void replaceSpace(char *str, int length)
{
	int i = 0;
	int count = 0;
	//算出空格的个数
	for (i = 0; i < length; i++)
	{
		if (str[i] == ' ')
		{
			count++;
		}
	}
	//从后往前找空格
	for (i = length - 1; i >= 0; i--)
	{
		if (str[i] == ' ')
		{
			count--;
			str[i + 2 * count] = '%';
			str[i + 2 * count + 1] = '2';
			str[i + 2 * count + 2] = '0';
		}
		else
		{
			str[i + 2 * count] = str[i];
		}
	}
}
