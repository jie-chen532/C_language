#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//�������
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr[100][100] = { 0 };
//	int line = 0;//��
//
//	scanf("%d", &line);
//
//	for (i = 0; i < line; i++)//��
//	{
//		for (j = 0; j <= i; j++)//��
//		{
//			if (j == 0  || j == i)
//			{
//				arr[i][j] = 1;
//			}
//			else
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//
//	���
//	for (i = 0; i < line; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//������
//#include<stdio.h>
//void guess_murder()
//{
//	char murder = 0;
//
//	for (murder = 'A'; murder <= 'D'; murder++)
//	{
//		if (3 == (murder != 'A') + (murder == 'C')
//			+ (murder == 'D') + (murder != 'D'))
//		{
//			printf("������%c\n", murder);
//		}
//	}
//}
//
//
//int main()
//{
//	guess_murder();
//
//	return 0; 
//}



//������
#include<stdio.h>
int Check(int arr[])
{
	int i = 0;
	int tmp[10] = { 0 };
	for (i = 0; i < 5; i++)
	{
		if (tmp[arr[i]])
			return 0;
		tmp[arr[i]] = 1;
	}
	return 1;
}

int main()
{
	int arr[5] = { 0 };//0,1,2,3,4 ����A,B,C,D,E�����

	for (arr[0] = 1; arr[0] <= 5; arr[0]++)
	{
		for (arr[1] = 1; arr[1] <= 5; arr[1]++)
		{
			for (arr[2] = 1; arr[2] <= 5; arr[2]++)
			{
				for (arr[3] = 1; arr[3] <= 5; arr[3]++)
				{
					for (arr[4] = 1; arr[4] <= 5; arr[4]++)
					{
						if ((arr[1] == 2) + (arr[0] == 3) == 1//B�ڶ����ҵ���
							&& (arr[1] == 2) + (arr[4] == 4) == 1//�ҵڶ���E����
							&& (arr[2] == 1) + (arr[3] == 2) == 1//�ҵ�һ��D�ڶ�
							&& (arr[2] == 5) + (arr[3] == 3) == 1//C����ҵ���
							&& (arr[4] == 4) + (arr[0] == 1) == 1)//�ҵ��ģ�A��һ
						{
							if (Check(arr))//��������Ƿ��ظ�
							{
								int i = 0;
								for (i = 0; i < 5; i++)
								{
									printf("%c:��%d��\n", 'A' + i, arr[i]);
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}


