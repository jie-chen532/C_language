#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>
#include<string.h>

//������żλ   �궨��

//�ֱ��ó�����λ��ż��λ����������һλ��ż������һλ
//��n&0x55555555 �õ���������λ   n&0xaaaaaaaa�õ�����ż��λ

//#define BITCHANGE(n) ((((n) & 0x55555555) << 1) + (((n) & 0xaaaaaaaa) >> 1))
//int main()
//{ 
//	int n = 0;
//	scanf("%d", &n);
//	int ret = BITCHANGE(n);
//	printf("%d\n", ret);
//	return 0; 
//}


//Fibonacci���о����磺0, 1, 1, 2, 3, 5, 8, 13, ...����Fibonacci�����е������ǳ�ΪFibonacci����
//����һ��N�����������Ϊһ��Fibonacci����ÿһ������԰ѵ�ǰ����X��ΪX - 1����X + 1��
//���ڸ���һ����N��������Ҫ���ٲ����Ա�ΪFibonacci����

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



//��ʵ��һ����������һ���ַ����е�ÿ���ո��滻�ɡ�%20����
//���磬���ַ���ΪWe Are Happy.�򾭹��滻֮����ַ���ΪWe%20Are%20Happy��
void replaceSpace(char *str, int length)
{
	int i = 0;
	int count = 0;
	//����ո�ĸ���
	for (i = 0; i < length; i++)
	{
		if (str[i] == ' ')
		{
			count++;
		}
	}
	//�Ӻ���ǰ�ҿո�
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
