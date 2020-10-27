#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>
#include<string.h>
#include"my_strcat.h"

//模拟stract
char *my_strcat(char *dest, const char *src)
{
	assert(dest != NULL);
	assert(src != NULL);
	char *start = dest;
	//找'\0'
	while (*dest != '\0')
	{
		dest++;
	}

	//拷贝数据
	while (*dest++ = *src++)
	{
		;
	}

	return start;
}

int main()
{
	char arr[20] = "abcdef";
	char arr1[] = "ghijk";
	printf("%s\n", my_strcat(arr, arr1));
	//printf("%s\n", strcat(arr, "hello"));
	return 0;
}

//静态库
//导入静态库

//#pragma comment(lib,"my_stract.lib")
//
//int main()
//{ 
//	char arr[20] = "hello";
//	printf("%s\n", my_strcat(arr, "world"));
//	return 0;
//}



//模拟strcmp函数
//int my_strcmp(const char *s1, const char *s2)
//{
//	assert(s1 != NULL);
//	assert(s2 != NULL);
//
//	while (*s1 == *s2)
//	{
//		if ('\0' == *s1)
//		{
//			return 0;
//		}
//		s1++;
//		s2++;
//	}
//	return *s1 - *s2;
//}
//
//int main()
//{
//	char arr1[] = { "abcdef" };
//	char arr2[] = { "abcdhijk" };
//	//int ret = strcmp(arr1, arr2);
//	//int ret = strcmp("hello", "party");
//	int ret = my_strcmp(arr1, arr2);
//	if (ret > 0)
//	{
//		printf("大于\n");
//	}
//	else if (ret < 0)
//	{
//		printf("小于\n");
//	}
//	else
//	{
//		printf("等于");
//	}
//	return 0;
//}


//strncpy函数
//如果源字符串的长度小于num,则拷贝完字符串后，在目标的后边追加0，直到num个
//char *my_strncpy(char *dest, const char *src,size_t num)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char *start = dest;
//	size_t tmp = num;
//	if (num <= strlen(src))
//	{
//		while (num--)
//		{
//			*dest++ = *src++;
//		}
//		if (tmp == strlen(src))
//		{
//			*dest = '\0';
//		}
//		return start;
//	}
//	else
//	{
//		size_t n = num - (strlen(src) + 1);
//		while (*dest++ = *src++)
//		{
//			;
//		}
//
//		while (n--)
//		{
//			*dest++ = '\0';
//		}
//		return start;
//	}
//}

//char * my_strncpy(char *dest, const char *src,size_t num)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char *start = dest;
//	while (num&&(*dest++ = *src++))
//	{
//		num--;
//	}//跳出循环，num个字符已经复制完或者num>strlen(src),将src字符已经全复制完
//
//	if (num)//num大于字符串的个数
//	{
//		while (--num)
//		{
//			*dest++ = '\0';
//		}
//	}
//	else
//	{
//		*dest = '\0';
//	}
//	return start;
//}



//strncat函数
//char *my_strncat(char *dest, const char *src, size_t num)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char *start = dest;
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (num && (*dest++ = *src++))
//	{
//		num--;
//	}
//	if (num)
//	{
//		return start;
//	}
//	else
//	{
//		*dest='\0';
//	}
//	return start; 
//}
//
//int main()
//{
//	char arr[20] = "abcde";
//	//printf("%s\n", strncat(arr, "hello", 6));
//	//printf("%s\n", my_strncat(arr, "hello", 3));
//	printf("%s\n", my_strncat(arr, arr, 3));
//	return 0;
//}


//判断是不是旋转字符
//可以在这个字符后面加相同的字符 通过strncat() abcdeabcde
//然后通过strstr()函数,找有没有子字符串，有子字符串就把地址传回，如果没有就返回NULL
//char *strstr(const char *string, const char *strCharSet)
//int main()
//{
//	char arr[20] = "abcde";
//	char arr1[] = "bcdea";
//	//字符串长度不相等，一定不是旋转得来的
//	if (strlen(arr) != strlen(arr1))
//	{
//		printf("不是旋转得来的\n");
//		return 0;
//	}
//
//	strncat(arr, arr, strlen(arr));
//	char *ret = strstr(arr, arr1);
//	if (NULL == ret)
//	{
//		printf("不是旋转得来的\n");
//	}
//	else
//	{
//		printf("是旋转得来的\n");
//	}
//	return 0;
//}

//strncmp函数
//int my_strncmp(const char *s1, const char *s2, size_t num)
//{
//	assert(s1 != NULL);
//	assert(s2 != NULL);
//	while (num)
//	{
//		if (*s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		else
//		{
//			break;
//		}
//
//		if ((*s1 == '\0') && (*s2=='\0'))
//		{
//			return 0;
//		}
//		num--;
//	}
//	if (num == 0)
//	{
//		return 0;
//	}
//	return *s1 - *s2;
//}
//
//int main()
//{
//	char arr[] = "abcd";
//	char arr1[] = "abcd";
//	//int ret = strncmp(arr, arr1,6);
//	int ret = my_strncmp(arr, arr1, 1);
//	if (ret == 0)
//	{
//		printf("等于\n");
//	}
//	else if (ret > 0)
//	{
//		printf("大于\n");
//	}
//	else
//	{
//		printf("小于\n");
//	}
//	return 0;
//}



//strtok函数
//分割字符
//int main()
//{
//	char arr[] = "3479676393@qq.tech";
//	char arr1[20] = { 0 };
//	char arr2[] = "@.";
//	strcpy(arr1, arr);
//	char *p = NULL;
//	for (p = strtok(arr1, arr2); p != NULL; p = strtok(NULL, arr2))
//	{
//		printf("%s\n", p);
//	}
//
//	//char *p = strtok(arr1, arr2);
//	//while (p != NULL)
//	//{
//	//	printf("%s\n", p);
//	//	p = strtok(NULL, arr2);
//	//}
//
//
//	//char* tmp=strtok(arr1, arr2);
//	//printf("%s\n", tmp);
//
// //   tmp = strtok(NULL, arr2);
//	//printf("%s\n", tmp);
//
//	//tmp = strtok(NULL, arr2);
//	//printf("%s\n", tmp);
//
//
//	return 0;
//}