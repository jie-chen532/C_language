#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
 
//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ

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


//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
//�ݹ�
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


//�ǵݹ�

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


//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//�ݹ�

//int str(char* p)
//{
//	if (*p != '\0')
//	{
//		return 1 + str(p+1);

        //����дstr(p++),p����ʹ�ã��ڽ���++��
        //���磺pΪ3��p��ʹ�ã�char* p,if (*p != '\0'),str(p++)����ͬһ��pΪ3��Ȼ��str(p++)����str(3++),�ͻ����������ѭ��
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


//�ǵݹ�

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


//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
//�ݹ�
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


//�ǵݹ�

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


//�ݹ�ʵ��n��k�η�
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


//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��

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


//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//�ݹ�
//int str(char* arr)      //�����鳤�Ⱥ���
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


//�ǵݹ�
int str(char* arr)      //�����鳤�Ⱥ���
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