#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<string.h>
//最小公倍数
//3 5
//1*3 2*3 3*3... 直到找到能同时除3和5

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int i = 1;
//	int tmp = a;
//	while (1)
//	{
//		if (tmp*i%a == 0 && tmp*i%b == 0)
//		{
//			break;
//		}
//		i++;
//	}
//	printf("%d", tmp*i);
//	return 0;
//}


//字符串逆序
//I like beijing.
//逆序为beijing. like I
//先逆序各各字符串，I ekil .gnijieb
//再将整个字符串逆序 beijing. like I

void reverse(char *left,char *right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

void reverse_one(char *arr)
{
	char *start = arr;
	char *end = arr;
	char *left = arr;
	char *right = arr + strlen(arr) - 1;

	//逆置每个字符串
	while (*end)
	{
		start = end;
		while (*end != ' '&& *end != '\0')
		{
			end++;
		}
		reverse(start, end-1);
		if (*end == '\0')
		{
			end = end;
		}
		else
		{
			end++;
		}
	}
	reverse(left, right);
	//逆置整个字符串
}

int main()
{
	char arr[100] = { 0 };
	gets(arr);
	reverse_one(arr);
	printf("%s", arr);
	return 0;
}
