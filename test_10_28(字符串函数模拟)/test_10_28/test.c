#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<errno.h>
#include<ctype.h>

//模拟strstr()函数
//char *my_strstr(const char *str, const char *strCharSet)
//{
//	assert(str != NULL);
//	assert(strCharSet != NULL);
//
//	const char *s1= str;
//	const char *s2 = strCharSet;
//	const char *tmp = str;
//
//
//	if (*strCharSet == '\0')
//	{
//		return (char*)str;
//	}
//
//	while (*tmp)
//	{
//		s1 = tmp;
//		s2 = strCharSet;
//		while (*s2 && *s1 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)tmp;
//		}
//		tmp++;
//	}
//	return NULL; 
//
//}
//
//
//int main()
//{
//	char arr[] = "abbbcdef";
//	char arr1[] = "bcd";
//	char *ret = my_strstr(arr, arr1);
//	printf("%s\n", ret);
//	return 0;
//}


//strerror()函数
//返回错误码，所对应的错误信息
//int main()
//{
//	//当调用库函数，发生错误的时候，就会有错误码
//	//错误码会放在errno这个全局变量中
//	//#include<errno.h>
//
//	printf("%s\n", strerror(errno));
//
//	//文件操作
//	FILE *p = fopen("text.txt", "r");
//	if (p == NULL)
//	{
//		//printf("打印错误信息：%s\n", strerror(errno));
//		//打印错误信息 perror()
//		perror("打印错误信息");
//	}
//	else
//	{
//		printf("打开成功\n");
//		fclose(p);
//		p = NULL;
//	}
//	return 0;
//}


//判断是否是大写字母
//如果参数符合条件就返回真
//#include<ctype.h>
//int main()
//{
//	char a = 'Z';
//	int b = 7;
//	//int ret = isupper(a);
//	//int ret = islower(a);
//	int ret = isdigit(b);// 0
//	//isdigit函数把b当作字母来处理
//	//看它的ASCII码值是否在数字字符的范围内
//
//	//char arr[] = "123@";
//	//int i = 0;
//	//for (i = 0; i < 4; i++)
//	//{
//	//	int ret = isdigit(arr[i]);
//	//	printf("%d\n", ret);
//	//}
//	//printf("%d\n", ret);
//
//	return 0;
//}


//字符转换
//int main()
//{
//	char ch = 'A';//65 97
//	char ch1 = 'a';
//	//printf("%c\n", ch + 32);
//	//ch=tolower(ch);
//	//printf("%c\n", ch);
//
//	//ch1 = toupper(ch1);
//	//printf("%c\n", ch1);
//
//	int i = 0;
//	char str[] = "Test String.\n";
//	while (str[i])
//	{
//		if (islower(str[i]))
//		{
//			str[i] = toupper(str[i]);
//		}
//		printf("%c", str[i]);
//		i++;
//	}
//	return 0;
//}


//memcpy()函数
//函数memcpy从sourse的位置开始向后复制num个字节的数据到dest内存的位置
//拷贝字节  不重叠拷贝
//void *my_memcpy(void *dest, const void *src, size_t num)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	void *start = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		((char*)dest)++ ;
//		((char*)src) ++;
//	}
//	return start;
//}
//
//int main()
//{
//	char arr[20] = "abcd";
//	char arr1[] = "cdef";
//	my_memcpy(arr, arr1, 3);
//	printf("%s\n", arr);
//	return 0;
//}



//memmove函数
//void *my_memmove(void *dest,const void *src, size_t num)
//{
//	void *ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	//src<dest   从后向前
//	//src>dest   从前向后
//	//src>dest+num  从前向后，从后向前都可
//	//后面两种情况可以归为一种  从前向后
//	if (src > dest)
//	{
//		//前-后
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		//后-前
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "abcdef";
//	//memmove(arr1 + 1, arr1, 3);
//	my_memmove(arr1 + 1, arr1+2, 3);
//	printf("%s\n", arr1);
//	return 0;
//}


//memcmp()函数
//比较从ptr1和ptr2指针开始的num个字节
//int memcmp(const void *ptr1, const void *ptr2, size_t num)

//int main()
//{
//	int arr[] = {1,2,3,4,5};
//	int arr1[] = { 1, 2, 3, 3, 3 };
//	//int ret = memcmp(arr + 1, arr + 2, 2);
//	int ret = memcmp(arr, arr1, 16);
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
//		printf("等于\n");
//	}
//	return 0;
//}


//memset()函数
//void *memset( void *dest, int c, size_t count )
//一个字节一个字节设置内存
int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	memset(arr, 0 , 20);
	return 0;
}
