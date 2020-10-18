#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


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
void print(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n"); 
}
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



//qsort�ṹ������
//struct s
//{
//	char name[20];
//	int age;
//};

//������
//int cpm_age(const void *elem1, const void *elem2)
//{
//	return (((struct s*)elem1)->age) - (((struct s*)elem2)->age);
//}

//������
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


int cmp_int(const void *elem1, const void *elem2)
{
	return  *((int*)elem1) - *((int*)elem2);
}

void Swap(void* elem1, void* elem2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *((char*)elem1 + i);
		*((char*)elem1 + i) = *((char*)elem2 + i);
		*((char*)elem2 + i) = tmp;
	}
}

void bubble_sort(void *base,
	int num,
	int width,
	int(*cmp)(const void *elem1, const void *elem2))
{
	int i = 0;
	int j = 0;
	for (i = 0; i < num - 1; i++)
	{
		for (j = 0; j < num - 1 - i; j++)
		{
			if (cmp((char*)base+width*j,(char*)base+width*(j+1))>0)
			{
				//������������������������20���ֽڣ���ô����20���ֽڶ��������Ͱ�������������
				Swap((char*)base + width*j, (char*)base + width*(j + 1),width);
			}
		}
	}
}


int main()
{
	int arr[] = { 32, 9, 7, 6, 34, 90, 54, 21, 45 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr, sz);
	bubble_sort(arr, sz, 4, cmp_int);
	print(arr, sz);
	return 0;
}


