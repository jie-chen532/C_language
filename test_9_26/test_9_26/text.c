#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<windows.h>

//int main()
//{
//	int a = -1;
//	//10000000 00000000 00000000 00000001   -1的原码
//	//11111111 11111111 11111111 11111110   -1的反码
//	//11111111 11111111 11111111 11111111   -1的补码
//	//0xff ff ff ff
//	int b = 1;
//	//00000000 00000000 00000000 00000001    1的原码
//	//0x00 00 00 01
//	//正数的原、反、补码相同
//	return 0;
//}


//int main()
//{
//	int a = 0x11223344;
//	return 0;
//}


//写一个代码，告诉我们，当前机器是采用大端还是小端？

//int check()
//{
//	int a = 1;
//	return (*(char*)&a);
//}
//
//int main()
//{
//	//int a = 1;
//	//0x00 00 00 01
//	//大端存储00 00 00 01
//	//小端存储01 00 00 00
//	//字符指针访问一个字节
//	//char* p = (char*)&a;
//
//	//if (*p == 1)
//	//{
//	//	printf("小端\n");
//	//}
//	//else
//	//{
//	//	printf("大端\n");
//	//}
//
//	int ret = check();
//
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	char a= -1;//signed
//	//11111111 11111111 11111111 11111111
//	//char存储1个字节:11111111  补码
//	//输出为%d,需要整形提升
//	//11111111 11111111 11111111 11111111 //整形提升  补码
//	//10000000 00000000 00000000 00000000 //反码
//	//10000000 00000000 00000000 00000001 //原码
//	//-1
//	signed char b = -1;
//	unsigned char c = -1;
//	//11111111
//	//无符号都是正数
//	//无符号整形提升，在前面加0
//	//00000000 00000000 00000000 11111111
//	//255
//	printf("a=%d,b=%d,c=%d", a, b, c);  //-1 -1 255
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char a = -128;
//	//10000000 00000000 00000000 10000000   原码
//	//11111111 11111111 11111111 01111111   反码
//	//11111111 11111111 11111111 10000000   补码
//	//10000000   char存储一个字节
//	//整形提升  11111111 11111111 11111111 10000000  
//	//4294967168
//	 
//	printf("%u\n", a);//%u  打印无符号整形
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char a = 128;
//	//00000000 00000000 00000000 10000000
//	//10000000  char存储一个字节
//	//整形提升:11111111 11111111 11111111 10000000
//	//无符号-为正数，所有位都是有效数字
//	//4294967168
//	printf("%u\n", a);//%u  打印无符号整形
//	//4294967168
//	return 0;
//}


//int main()
//{
//	int i = -20;
//	//10000000 00000000 00000000 00010100 原码
//	//11111111 11111111 11111111 11101011 反码
//	//11111111 11111111 11111111 11101100 补码
//	unsigned int j = 10;
//	//00000000 00000000 00000000 00001010  补码
//
//	//i+j  表达式进行算术转换
//	//11111111 11111111 11111111 11101100  -20
//	//00000000 00000000 00000000 00001010  10
//	//11111111 11111111 11111111 11110110  补码
//	//10000000 00000000 00000000 00001001  反码
//	//10000000 00000000 00000000 00001010  原码
//	//-10
//	printf("%d\n", i + j); //%d有符号的打印
//	//结果为-10
//	return 0;
//}


//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);//打印无符号整数
//	}
//	//00000000 00000000 00000000 00000000   i=0;
//	//i-1
//	//11111111 11111111 11111111 11111111
//	//unsigned都是正数  4294967295
//	//11111111 11111111 11111111 11111110
//	//4294967294
//	//死循环了
//	return 0;
//}


//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d\n", strlen(a));//找到'\0'->ASCII码为0   a[i]=0;
//	//255
//	return 0;
//}


//int main()
//{
//	unsigned char i = 0; 
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	//死循环
//	return 0;
//}



int main()
{
	int n = 9;
	//00000000 00000000 00000000 00001001
	float *pFloat = (float *)&n;
	//*pFloat是以浮点数的视角去访问n的四个字节-n的四个字节中放的是浮点数
	printf("n的值为：%d\n", n);//9
	printf("*pFloat的值为：%f\n", *pFloat);
	//0 00000000 00000000000000000001001
	//符号位S=0  E全为0  
	//(-1)^0 * 2^(1-127) * 0.00000000000000000001001
	//0.000000

	*pFloat = 9.0;
	printf("num的值为：%d\n", n);
	//浮点数存储9.0   9-1001		
	//(-1)^0 * 1.001 * 2^3   3+127=130->10000010
	//0 10000010 00100000000000000000000
	//读出整数  1091567616
	printf("*pFloat的值为：%f\n", *pFloat);//9.000000
	return 0;
}