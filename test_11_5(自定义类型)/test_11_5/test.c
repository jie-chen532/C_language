#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
//union Un
//{
//	int i;//4  4
//	char c[5];//1*5 = 5
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));//8
//
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//
//	return 0;
//}

//�������Ӧ��
//�жϵ�ǰ������Ĵ�С�˴洢
//union un
//{
//	int i;
//	char c;
//};
////int i��char cʹ��ͬһ��ռ�
//
//int is_check()
//{
//	union un u;
//	u.i = 1;
//	return u.c;
//}
//
//int main()
//{
//	int ret=is_check();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}



//��Ŀ���ƣ�
//���Ͼ���
//��Ŀ���ݣ�
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ�
//���д�����������ľ����в���ĳ�������Ƿ���ڡ�

//Ҫ��ʱ�临�Ӷ�С��O(N);

//1 2 3
//4 5 6
//7 8 9

//ÿ�ζ��������Ͻ�Ϊ��׼
//�����ڻ�׼,ȥ��һ��
//��С�ڻ�׼��ȥ��һ��
#define COL 3
#define ROW 3

//int find_num(int arr[ROW][COL], int row, int col, int key)
//{
//	int i = 0;
//	int j = col-1;
//	while (i<row && j>=0)
//	{
//		if (key > arr[i][j])
//		{
//			i++;
//		}
//		else if (key < arr[i][j])
//		{
//			j--;
//		}
//		else
//		{
//			return 1;
//		}
//
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int arr[ROW][COL] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
//
//	int key = 0;
//	scanf("%d", &key);
//
//	int ret = find_num(arr,ROW,COL,key);
//
//	if (ret)
//	{
//		printf("�ҵ���\n");
//	}
//	else
//	{
//		printf("û�ҵ�\n");
//	}
//	return 0;
//}




//��Ҫ���ҵ����±�Ҳ����
//�ѵ�ַ����ȥ
int find_num(int arr[ROW][COL], int *pr, int *pc, int key)
{
	int i = 0; 
	int j = *pc - 1;
	while (i<*pr && j >= 0)
	{
		if (key > arr[i][j])
		{
			i++;
		}
		else if (key < arr[i][j])
		{
			j--;
		}
		else
		{
			*pr = i;
			*pc = j;
			return 1;
		}

	}
	return 0;
}


int main()
{
	int arr[ROW][COL] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };

	int i = ROW;
	int j = COL;

	int key = 0;
	scanf("%d", &key);

	int ret = find_num(arr, &i, &j, key);

	if (ret)
	{
		printf("�ҵ���,�±�Ϊ%d�У�%d��\n",i+1,j+1);
	}
	else
	{
		printf("û�ҵ�\n");
	}
	return 0;
}