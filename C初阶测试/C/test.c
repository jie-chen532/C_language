#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<string.h>
//��С������
//3 5
//1*3 2*3 3*3... ֱ���ҵ���ͬʱ��3��5

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


//�ַ�������
//I like beijing.
//����Ϊbeijing. like I
//����������ַ�����I ekil .gnijieb
//�ٽ������ַ������� beijing. like I

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

	//����ÿ���ַ���
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
	//���������ַ���
}

int main()
{
	char arr[100] = { 0 };
	gets(arr);
	reverse_one(arr);
	printf("%s", arr);
	return 0;
}
