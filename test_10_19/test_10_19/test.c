#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<assert.h>
////ģ��ʵ��strlen���ַ���
////1.������count
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
////2.�ݹ�
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
////3.ָ��-ָ��Ϊ�м�������Ԫ�ظ���
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


//size_t�൱��unsigned int
//size_t  strlen( const char *string)��һ���׶�
#include<stdio.h>
#include<string.h>
int main()
{
	char *p1 = "abc";
	char *p2 = "abcd";

	if (strlen(p1) > strlen(p2)) //��ȷд��
	//if (strlen(p1) - strlen(p2)>0)   //3-4
	{
		//strlen()��������size_t,�൱��unsigned int
		//unsigned int-unsigned int = unsigned int
		//strlen(p1) - strlen(p2)=3-4=-1
		//�ڴ��е��ǲ��룺11111111 11111111 11111111 11111111
		//��ʱ������unsigned int������ -> �������0 ->���hehe
		printf("hehe\n");
	}
	else
	{
		printf("haha\n");
		//������Ϊ hehe
	}
	return 0;
}