#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include<string.h>
#include<math.h>

//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
//void print(int* p,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//
//int main()
//{
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	print(arr,sz);
//	return 0;
//}


//дһ����������������һ���ַ��������ݡ�
//void reserve(char arr[], int sz)
//{
//	char* p = arr;
//	char* pz = &arr[sz - 1];
//	while (p <= pz)
//	{
//		char tmp = *p;
//		*p = *pz;
//		*pz = tmp;
//		p++;
//		pz--;
//	}
//}
//
//int main()
//{
//	char arr[] = "hello";
//
//	reserve(arr, strlen(arr));
//
//	printf("%s\n", arr);
//	return 0;
//}


//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ������
//int sum(int a, int n)
//{
//	int i = 0;
//	int sum = 0;
//	int tmp = a;
//	while (i<n)
//	{
//		sum = sum + a;
//		i++;
//		a = a * 10 + tmp;
//	}
//	return sum;
//}
//
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);//a������n�Ǽ�ǰ����
//
//	int ret = sum(a, n);
//
//	printf("%d\n", ret);
//	return 0;
//}

//���0��100000֮������С�ˮ�ɻ������������
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int tmp = i;
//		int sum = 0;
//
//		//����i��λ��
//		int count = 1;
//		while (tmp > 9)
//		{
//			count++;
//			tmp = tmp / 10;
//		}
//	
//
//		tmp = i;
//		while (tmp)
//		{
//			sum = sum + pow((tmp % 10), count);
//			tmp = tmp / 10;
//		}
//
//		//�ж��Ƿ���ˮ�ɻ���
//		if (sum == i)
//		{
//			printf("%d ", sum);
//		}
//	}
//	return 0;
//}


//��ӡ����
//int main()
//{
//	int n = 0;//��ӡ��������
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	int k = 0;
//
//	//�ϰ벿��
//	for (i = 0; i < n; i++)//�� 7
//	{
//		//��ӡ�հ�
//		for (j = 0; j < n-i-1; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (k = 0; k < 2*i + 1; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	//�°벿��
//	for (i = 0; i < n-1 ; i++)
//	{
//		//��ӡ�հ�
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (k = 0; k < 2 * (n-1-i) - 1; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���
//1Ԫ-1ƿ  2Ԫ-3ƿ  3Ԫ-5ƿ  4Ԫ-7ƿ
int main()
{
	int money = 0;
	int bottle = 0;

	scanf("%d", &money);

	if (money == 0)
	{
		bottle = 0;
	}
	else
	{
		bottle = 2 * money - 1;
	}
	printf("%d\n", bottle);
	return 0;
}