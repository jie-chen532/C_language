#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>


//void qsort( void *base, 
//            size_t num, 
//            size_t width, 
//            int (__cdecl *compare )(const void *elem1, const void *elem2 ) )


//
//int cmp_int(const void *elem1, const void *elem2)
//{
//	return  *((int*)elem1) - *((int*)elem2);
//}
//
//void print(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n"); 
//}
//
////qsort��������
//void test1()
//{
//	int arr[] = { 10, 9, 34, 7, 23, 5, 4, 11, 2, 71, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	qsort(arr, sz, 4, cmp_int);
//	print(arr, sz);
//}
//
//
//
////qsort�ṹ������
//struct s
//{
//	char name[20];
//	int age;
//};
//
////������
//int cpm_age(const void *elem1, const void *elem2)
//{
//	return (((struct s*)elem1)->age) - (((struct s*)elem2)->age);
//}
//
////������
//int cpm_name(const void *elem1, const void *elem2)
//{
//	return strcmp(((struct s*)elem1)->name, ((struct s*)elem2)->name);
//}
//
//void print_s(struct s arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s %d\n", arr[i].name,arr[i].age);
//	}
//	printf("\n");
//}
//
//void test2()
//{
//	struct s arr[] = { { "zhangsan",50 }, { "lisi",76 }, { "wangwu", 43 } };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_s(arr, sz);
//	//qsort(arr, sz, sizeof(arr[0]), cpm_age);
//	qsort(arr, sz, sizeof(arr[0]), cpm_name);
//	print_s(arr, sz);
//}
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}



//��bbule_sortʵ��qsort�Ĺ���


//void* ��ָ�����޾������͵�ָ��
//���Խ��������������͵ĵ�ַ
//void* ��ָ�벻��ֱ��+- �����Ĳ���
//void* ��ָ�벻��ֱ�ӽ����ò���


//int cmp_int(const void *elem1, const void *elem2)
//{
//	return  *((int*)elem1) - *((int*)elem2);
//}
//
//void Swap(void* elem1, void* elem2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *((char*)elem1 + i);
//		*((char*)elem1 + i) = *((char*)elem2 + i);
//		*((char*)elem2 + i) = tmp;
//	}
//}
//
//void bubble_sort(void *base,
//	             int num,
//	             int width,
//	             int(*cmp)(const void *elem1, const void *elem2))
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < num - 1; i++)
//	{
//		for (j = 0; j < num - 1 - i; j++)
//		{
//			if (cmp((char*)base+width*j,(char*)base+width*(j+1))>0)
//			{
//				//������������������������20���ֽڣ���ô����20���ֽڶ��������Ͱ�������������
//				Swap((char*)base + width*j, (char*)base + width*(j + 1),width);
//			}
//		}
//	}
//}
//
//
//int main()
//{
//	int arr[] = { 32, 9, 7, 6, 34, 90, 54, 21, 45 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	bubble_sort(arr, sz, 4, cmp_int);
//	print(arr, sz);
//	return 0;
//}



//#include<stdio.h>
//#include<string.h>
//int judge_spin(char setArr[], char getArr[],int diff)
//{
//	int i = 0;
//	int setSz = strlen(setArr);
//	//����
//	if (diff == 1)
//	{
//		for (i = 1; i < setSz; i++)
//		{
//			char tmp = setArr[0];
//			int j = 0;
//			for (j = 1; j < setSz; j++)
//			{
//				setArr[j - 1] = setArr[j];
//			}
//			setArr[j - 1] = tmp;
//
//			if (strcmp(setArr, getArr) == 0)
//			{
//				printf("����:");
//				return i;//����i��
//			}
//		}
//	}
//	//����
//	if (diff == 0)
//	{
//		for (i = 1; i < setSz; i++)
//		{
//			char tmp = setArr[setSz - 1];
//			int k = 0;
//			for (k = setSz - 1; k >0; k--)
//			{
//				setArr[k] = setArr[k - 1];
//			}
//			setArr[k] = tmp;
//
//			if (strcmp(setArr, getArr) == 0)
//			{
//				printf("����:");
//				return i;//����i��
//			}
//		}
//	}
//
//	return 0;
//	 
//}

//int main()
//{
//	char setArr[20] = {0};//��Ҫ�жϵ��ַ�
//	char getArr[20] = {0};//�Ա��ַ�
//	gets(setArr);
//	gets(getArr);
//	int ret = judge_spin(setArr, getArr, 0);//����1Ϊ������0Ϊ����
//	if (ret)
//	{
//		printf("%d\n", ret);
//	}
//	else
//	{
//		printf("û����ת\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int judge_spin(char setArr[], char getArr[])
//{
//	int i = 0;
//	int setSz = strlen(setArr);
//	for (i = 1; i < setSz; i++)
//	{
//		char tmp = setArr[0];
//		int j = 0;
//		for (j = 1; j < setSz; j++)
//		{
//			setArr[j - 1] = setArr[j];
//		}
//		setArr[j - 1] = tmp;
//
//		if (strcmp(setArr, getArr) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	char setArr[20] = { 0 };//��Ҫ�жϵ��ַ�
//	char getArr[20] = { 0 };//�Ա��ַ�
//	gets(setArr);
//	gets(getArr);
//	int ret = judge_spin(setArr, getArr);
//	if (ret)
//	{
//		printf("��ת��\n");
//	}
//	else
//	{
//		printf("û����ת\n");
//	}
//	return 0;
//}


#include<stdio.h>
#include<string.h>
#include<assert.h>
//����ת�ַ���
//abcde  ����ת�����ַ�
//ab����  cde���� 
//ba  edc - ������������
//cdeab

//void reverse(char* left, char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void spin_arr(char arr[], int k)
//{
//	int len = strlen(arr);
//	assert(k < len);
//	reverse(arr, arr + k-1);//����תǰk���ַ�
//	reverse(arr + k, arr + len - 1);//����תk�����ַ�
//	reverse(arr, arr + len - 1);//����ת�����ַ���
//}
//
//int main()
//{
//	char arr[200] = "abcdef"; 
//	int k = 0;
//	scanf("%d", &k);
//	printf("%s\n", arr);
//	spin_arr(arr, k);
//	printf("%s\n", arr);
//}


//���Ͼ���
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ�
//���д�����������ľ����в���ĳ�������Ƿ���ڡ�

#include<stdio.h>
#define ROW 3
#define COL 3
int Find(int arr[ROW][COL], int k)
{
	int i = 0;
	int j = 0;
	if (k<arr[0][0] || k>arr[ROW][COL])
	{
		return 0;
	}
	else
	{
		while (i<ROW)
		{
			if (j == 3)
			{
				j = 0;
			}
			while (j < COL)
			{
				if (k>arr[i][j])
				{
					j++;
				}
				if (k < arr[i][j])
				{
					j--;
					i++;
				}
				if (k == arr[i][j])
				{
					return 1;
				}
			}
			i++;
		}
		return 0;
	}
}

int main()
{
	int arr[ROW][COL] = { { 1, 10, 15 }, { 4, 16, 20 }, { 7, 17, 30 } };
	int k = 0;
	scanf("%d", &k);
	int ret = Find(arr, k);
	if (ret)
	{
		printf("�����д���%d\n", k);
	}
	else
	{
		printf("�����в�����%d\n", k);
	}
	return 0;
}