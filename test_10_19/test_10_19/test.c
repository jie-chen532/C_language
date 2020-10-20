#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<assert.h>
////模拟实现strlen三种方法
////1.计数器count
////size_t -> unsigned int
//size_t my_strlen(const char *p)
//{
//	int count = 0;
//	assert(p != NULL);
//	while (*p != '\0')
//	{
//		count++;
//		p++;
//	}
//	return count;
//}
//
////2.递归
////abcdef
////1+bcdef
////1+1+cdef
////...
//size_t my_strlen2(const char *str)
//{
//	assert(str != NULL); 
//	if (*str != '\0')
//	{
//		return 1 + my_strlen2(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//
////3.指针-指针为中间所隔的元素个数
//size_t my_strlen3(const char *str)
//{
//	assert(str != NULL);
//	const char *start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//} 
//
//int main()
//{
//	char arr[20] = "welcome";
//	//int len = my_strlen(arr);
//	//int len = my_strlen2(arr);
//	int len = my_strlen3(arr);
//	printf("%d\n", len);
//	return 0;
//}



//#include<stdio.h>
//#include<assert.h>
//char* my_strcpy(char *dest, const char *src)
//{
//	char *start = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return start;
//}
//
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[20] = { 0 };
//	printf("%s\n", my_strcpy(arr2, arr1));
//	return 0;
//}


//size_t相当于unsigned int
//size_t  strlen( const char *string)的一个弊端
#include<stdio.h>
#include<string.h>
int main()
{
	char *p1 = "abc";
	char *p2 = "abcd";

	if (strlen(p1) > strlen(p2)) //正确写法
	//if (strlen(p1) - strlen(p2)>0)   //3-4
	{
		//strlen()函数返回size_t,相当于unsigned int
		//unsigned int-unsigned int = unsigned int
		//strlen(p1) - strlen(p2)=3-4=-1
		//内存中的是补码：11111111 11111111 11111111 11111111
		//此时被当作unsigned int被处理 -> 结果大于0 ->输出hehe
		printf("hehe\n");
	}
	else
	{
		printf("haha\n");
		//结果输出为 hehe
	}
	return 0;
}