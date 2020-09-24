#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>

//调试堆栈
//void test2()
//{
//	printf("呵呵\n");
//}
//
//void test1()
//{
//	test2();
//}
//
//void test()
//{
//	test1();
//}
//
//int main()
//{
//	test();
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	
//
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	//结果是死循环
//	//我们再调试的时候发现a[12]的地址和i的地址一样，arr[12]=0,同样i=0;就会进入死循环
//	return 0;
//}


//strcpy-字符串拷贝
//void my_strcpy(char* arr2, char*arr1)
//{
//	while ((*arr1) != '\0')
//	{
//		*arr2 = *arr1;
//		arr2++;
//		arr1++;
//	}
//	*arr2 = *arr1;//拷贝'\0'
//}

//void my_strcpy(char* arr2, char*arr1)
//{
//	while ((*arr1) != '\0')
//	{
//		*arr2++ = *arr1++;
//	}
//	*arr2 = *arr1;
//}

//void my_strcpy(char* arr2, char*arr1)
//{
//	if (arr2 == NULL||arr1 == NULL)
//	{
//		return;
//	}
//	while (*arr2++ = *arr1++)
//	{
//		;
//	}
//}

//assert-断言   会进行判断，如果条件为假，程序就会出现错误  #include<assert.h>
//char* my_strcpy(char* arr2, const char* arr1)
//{
//	char* start = arr2;
//	assert(arr2 != NULL);
//	assert(arr1 != NULL);
//	while (*arr2++ = *arr1++)
//	{
//		;
//	}
//	return start;
//}
//
//
//int main()
//{
//	char arr1[] = "hello world";
//	char arr2[20] = "XXXXXXXXX";
//
//	printf("%s\n", my_strcpy(arr2, arr1));
//
//	return 0;
//}


//const 修饰指针的时候
//const放在*的左边，表示指针指向的内容（*p）不能通过指针（p）来改变，但是指针变量（p）本身是可以修改的
//const放在*的右边，表示指针指向的内容（*p）可以通过指针（p）来改变，但是指针变量（p）本身是不可以修改的
//int main()
//{
//	int a = 0;
//	int b = 0;
//    const int  *p = &a;
//	//*p = 20;  error  *p不能改变
//	p = &b;
//
//	int * const p1 = &a;
//	//p1 = &b;  error  p1不能改变
//	*p1 = 20;
//
//	return 0;
//}


int my_strlen(const char* arr)
{
	int count = 0;
	assert(arr != NULL);
	while (*arr++ != '\0')
	{
		count++;
	}
	return count;
}

int main()
{
	char arr[] = "abcd";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}