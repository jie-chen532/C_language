#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<windows.h>  //Sleep();
#include<stdlib.h>
#include<time.h>

//���Լ��
//շת���
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
//	printf("���Լ��Ϊ��%d\n", a);
//	return 0;
//} 


//������� 
//���Լ��һ��С�ڵ�����С���Ǹ���������min--������һ�����������
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
//	printf("���Լ��Ϊ:%d\n", i);
//	return 0;
//}

//��ӡ1000�굽2000��֮�������
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



//��ӡ100-200֮�������
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



//1-100֮����ֶ��ٸ�9��
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



//n�Ľ׳�
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
//���β���
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	int n = 0;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]); //һ����������ĸ���
//	printf("���ҵ���:");
//	scanf("%d", &n);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == n)
//		{
//			printf("�ҵ��ˣ��±�Ϊ%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("û���ҵ�\n");
//	}
//	return 0;
//}


//char[]={1,2,3,4,5,6,7,8}
//���ֲ���
//ֻ��������������
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	int n = 0;
//	int i = 0;
//	int mid = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]); //һ����������ĸ���
//	int left = 0;
//	int right = sz - 1;
//	printf("���ҵ���:");
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
//			printf("�ҵ��ˣ��±�Ϊ%d\n", mid);
//			break;
//		}
//	}
//	if (left>right)
//		printf("�Ҳ���\n");
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
//	char arr1[] = "welcome to party!!";//party��>p a r t y \0
//	char arr2[] = "##################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);   //��ͣ1000ms=1s
//		system("cls");   //����
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}


//�����������룬���ζ����󽫻��˳�ϵͳ
//int main()
//{
//	//��������Ϊ��chen789
//	int i = 0;
//	char arr[30] = {0};
//	while (i<3)
//	{
//		printf("���������룺");
//		scanf("%s", arr);
//		//�ַ���Ҫ��""
//		if (strcmp(arr, "chen789") == 0)    //strcmp������ ���ڱȽ������ַ���
//		{
//			printf("������ȷ\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//		i++;
//	}
//	if (i == 3)
//	{
//		printf("����������������˳�ϵͳ\n");
//	}
//	return 0;
//}



//�ػ�����

//goto���
//int main()
//{
//	char arr[20] = { 0 };
//	//shutdown -s -t 60    �ػ����60s֮��ػ�
//	//shutdown -a    ����ػ�����
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ�����һ�����ڹػ��������������������ȡ���ػ�\n");
//	scanf("%s", arr);
//	if (strcmp(arr, "������") == 0)
//		system("shutdown -a");
//	else
//		goto again;
//	return 0;
//}


//int main()
//{
//	char arr[20] = { 0 };
//	//shutdown -s -t 60    �ػ����60s֮��ػ�
//	//shutdown -a    ����ػ�����
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("��ע�⣬��ĵ�����һ�����ڹػ��������������������ȡ���ػ�\n");
//		scanf("%s", arr);
//		if (strcmp(arr, "������") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}


//��������Ϸ
//���������rand();  ���������������0-RAND_MAX
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
//	//����1-100�������
//	int ret = rand()%100+1;
//	int n = 0;
//	while (1)
//	{
//		printf("��������Ҫ�µ�����:");
//		scanf("%d", &n);
//		if (n > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (n < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("������\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	//time_t  int����
//    srand((unsigned int)time(NULL) );//ʱ�̷����仯������->�����ϵ�ʱ��һֱ�ڱ仯
//	int input = 0;
//	do
//	{
//		menu();//�˵�
//		printf("���������ѡ��:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("�����������������\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//��С������
//   ���������ĳ˻�/���Լ��
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d", &a, &b);
	int mul = a*b;
	//�����Լ��
	while (c = a%b)
	{
		a = b;
		b = c;
	}
	printf("��С������:%d\n",mul/b);
	return 0;
}