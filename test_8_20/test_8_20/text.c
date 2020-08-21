#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<windows.h>  //Sleep();
#include<stdlib.h>
#include<time.h>

//最大公约数
//辗转相除
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	do
//	{
//		c = a%b;
//		a = b;
//		b = c;
//	} while (c != 0);
//	printf("最大公约数为：%d\n", a);
//	return 0;
//} 


//暴力求解 
//最大公约数一定小于等于最小的那个数，就用min--，这样一个个往下相除
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int min = 0;
//	int i = 0;
//	scanf("%d%d", &a, &b);
//	if (a > b)
//		min = b;
//	else
//		min = a;
//	for (i = min; i >= 1; i--)
//	{
//		if ((a%i == 0) && (b%i == 0))
//			break;
//	}
//	printf("最大公约数为:%d\n", i);
//	return 0;
//}

//打印1000年到2000年之间的闰年
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}



//打印100-200之间的素数
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 100; i < 200; i++)
//	{
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}



//1-100之间出现多少个9字
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("count = %d\n", count);
//	return 0;
//}



//n的阶乘
//int main()
//{
//	int i = 0;
//	int mul = 1;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		mul = mul*i;
//	}
//	printf("%d\n", mul);
//	return 0;
//}



//1!+2!+3!+...+10!
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int mul = 1;
//	int sum = 0;
//	for (i = 1; i <= 3; i++)
//	{
//		mul = 1;
//		for (j = 1; j <= i; j++)
//		{
//			mul = mul*j;
//		}
//		sum = sum + mul;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int mul = 1;
//	int sum = 0;
//	for (i = 1; i <= 3; i++)
//	{
//		mul = mul*i;
//		sum = sum + mul;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}


//char[]={1,2,3,4,5,6,7,8}
//依次查找
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	int n = 0;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]); //一个数组里面的个数
//	printf("查找的数:");
//	scanf("%d", &n);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == n)
//		{
//			printf("找到了，下标为%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("没有找到\n");
//	}
//	return 0;
//}


//char[]={1,2,3,4,5,6,7,8}
//二分查找
//只能用于有序数组
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	int n = 0;
//	int i = 0;
//	int mid = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]); //一个数组里面的个数
//	int left = 0;
//	int right = sz - 1;
//	printf("查找的数:");
//	scanf("%d", &n);
//
//	while (left<=right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > n)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < n)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标为%d\n", mid);
//			break;
//		}
//	}
//	if (left>right)
//		printf("找不到\n");
//	return 0;
//}


//welcome to party!!
//##################
//w################!
//we##############!!
//...
//welcome to party!!
//int main()
//{
//	char arr1[] = "welcome to party!!";//party—>p a r t y \0
//	char arr2[] = "##################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);   //暂停1000ms=1s
//		system("cls");   //清屏
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}


//输入三次密码，三次都错误将会退出系统
//int main()
//{
//	//假设密码为：chen789
//	int i = 0;
//	char arr[30] = {0};
//	while (i<3)
//	{
//		printf("请输入密码：");
//		scanf("%s", arr);
//		//字符串要带""
//		if (strcmp(arr, "chen789") == 0)    //strcmp函数， 用于比较两个字符串
//		{
//			printf("密码正确\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//		i++;
//	}
//	if (i == 3)
//	{
//		printf("三次密码输入错误，退出系统\n");
//	}
//	return 0;
//}



//关机程序

//goto语句
//int main()
//{
//	char arr[20] = { 0 };
//	//shutdown -s -t 60    关机命令，60s之后关机
//	//shutdown -a    解除关机命令
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑在一分钟内关机，如果输入我是猪，将会取消关机\n");
//	scanf("%s", arr);
//	if (strcmp(arr, "我是猪") == 0)
//		system("shutdown -a");
//	else
//		goto again;
//	return 0;
//}


//int main()
//{
//	char arr[20] = { 0 };
//	//shutdown -s -t 60    关机命令，60s之后关机
//	//shutdown -a    解除关机命令
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("请注意，你的电脑在一分钟内关机，如果输入我是猪，将会取消关机\n");
//		scanf("%s", arr);
//		if (strcmp(arr, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}


//猜数字游戏
//产生随机数rand();  产生的随机数会在0-RAND_MAX
//RAND_MAX  0x7fff ->32767  

//void menu()
//{
//	printf("********************\n");
//	printf("****** 1.play ******\n");
//	printf("****** 0.exit ******\n");
//	printf("********************\n");
//}
//
//void game()
//{
//	//产生1-100的随机数
//	int ret = rand()%100+1;
//	int n = 0;
//	while (1)
//	{
//		printf("请输入你要猜的数字:");
//		scanf("%d", &n);
//		if (n > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (n < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("猜中了\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	//time_t  int类型
//    srand((unsigned int)time(NULL) );//时刻发生变化的数字->电脑上的时间一直在变化
//	int input = 0;
//	do
//	{
//		menu();//菜单
//		printf("请输入你的选择:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//最小公倍数
//   用两个数的乘积/最大公约数
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d", &a, &b);
	int mul = a*b;
	//求最大公约数
	while (c = a%b)
	{
		a = b;
		b = c;
	}
	printf("最小公倍数:%d\n",mul/b);
	return 0;
}