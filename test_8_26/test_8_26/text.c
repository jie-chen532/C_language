#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
 
//递归方式实现打印一个整数的每一位

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}


//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
//递归
//long long int fac(int m)
//{
//	if (m < 2)
//		return 1;
//	else
//		return m*fac(m - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	long long int ret = fac(n);
//
//	printf("%d\n", ret);
//	return 0;
//}


//非递归

//int fac(int n)
//{
//	int i = 0;
//	int mul = 1;
//	for (i = 1; i <= n; i++)
//	{
//		mul = mul*i;
//	}
//	return mul;
//}

//long long int fac(int n)
//{
//	long long int ret = 1;
//	for (int i = 2; i <= n; i++)
//	{
//		ret = ret*i;
//	}
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	
//	long long int ret = fac(n);
//	
//	printf("%d\n", ret);
//	return 0;
//}


//递归和非递归分别实现strlen
//递归

//int str(char* p)
//{
//	if (*p != '\0')
//	{
//		return 1 + str(p+1);

        //若是写str(p++),p会先使用，在进行++；
        //例如：p为3，p先使用，char* p,if (*p != '\0'),str(p++)都是同一个p为3，然后str(p++)还是str(3++),就会进入无限死循环
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr[] = "abcde";
//	int ret = str(arr);
//	printf("%d\n", ret);
//	return 0;
//}


//非递归

//int str(char* p)
//{
//	int count = 0;
//	while (*p != '\0')
//	{
//		count++;
//		p++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcde";
//	int ret = str(arr);
//	printf("%d\n", ret);
//	return 0;
//}


//递归和非递归分别实现求第n个斐波那契数
//递归
//int fibo(int n)
//{
//	if (n <= 2)
//		return 1;
//	else 
//		return fibo(n - 1) + fibo(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fibo(n);
//	printf("%d\n", ret);
//	return 0;
//}


//非递归

//int fibo(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fibo(n);
//    printf("%d\n", ret);
//	return 0;
//}


//递归实现n的k次方
//double pow(int n,int k)
//{
//	if (k == 0)
//		return 1.0;
//	else if (k >= 1)
//		return (double)n*pow(n, k - 1);
//	else
//		return 1.0 / pow(n, -k);
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret = pow(n,k);
//	printf("%lf\n", ret);
//	return 0;
//}


//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和

//int DigitSum(int n)
//{ 
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//	else
//		return n;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = DigitSum(n);
//	printf("%d\n", ret);
//	return 0;
//}


//编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//递归
//int str(char* arr)      //求数组长度函数
//{
//	int count = 0;
//	while (*arr != 0)
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//
//void reverse_string(char arr[])       
//{
//	char tmp = 0;
//	int len = str(arr);
//	tmp = arr[0];
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (str(arr+1)>1)
//	{
//		reverse_string(arr+1);
//	}
//	arr[len - 1] = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcde";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//非递归
int str(char* arr)      //求数组长度函数
{
	int count = 0;
	while (*arr != 0)
	{
		count++;
		arr++;
	}
	return count;
}

void reverse_string(char arr[])
{
	int left = 0;
	int right = str(arr)-1;
	while (left < right)
	{
		char tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}

int main()
{
	char arr[] = "abcde";
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}