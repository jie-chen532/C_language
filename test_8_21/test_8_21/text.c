#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//������ͣ�����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ
//int main()
//{
//	int i = 0;
//	int flag = 1;
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
        //���ܸı�i��ֵ
//		sum = sum + 1.0 / i*flag;
//		flag = -flag;
//	}
//	printf("%.2lf\n", sum);
//	return 0;
//}




//��10�����������ֵ
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("���ֵ:%d\n", max);
//	return 0;
//}


//�˷��ھ���(9*9)
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %2d   ", j, i, i*j);   //%2d�Ҷ���
//			//printf("%d * %d = %-2d   ", j, i, i*j);  //%-2d�����
//		}
//		printf("\n");
//	}
//	return 0;
//}


//��������Ϸ
#include<stdlib.h>
#include<time.h>
//
//void menu() //�˵�
//{
//	printf("****** 1.����Ϸ   ******\n");
//	printf("****** 0.�˳���Ϸ ******\n");
//}
//
//void game()  //����Ϸ
//{
//	int  ret = rand()%100+1;//1-100�������
//	int n = 0;
//	while (1)
//	{
//		printf("��������²������:");
//		scanf("%d", &n);
//		if (ret > n)
//		{
//			printf("��С��\n");
//		}
//		else if (ret < n)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("������\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int m = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu(); 
//		printf("������ѡ��:");
//		scanf("%d", &m);
//		switch (m)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������������:");
//			break;
//		}
//	} while (m);
//	return 0;
//}


//���ֲ���
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int mid = 0;
	int left = 0;
	int n = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	printf("������Ҫ���ҵ���:");
	scanf("%d", &n);
	while (left<=right)
	{
		mid = (left + right) / 2;
		if (arr[mid]>n)
		{
			right = mid - 1;
		}
		else if (arr[mid] < n)
		{
			left = mid + 1;
		}
		else
		{
			printf("�ҵ��ˣ��±�Ϊ%d\n", mid);
			break;
		}
	}
	if (left>right)
	{
		printf("�Ҳ���\n");
	}
	return 0;
}