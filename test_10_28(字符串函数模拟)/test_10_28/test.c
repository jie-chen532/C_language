#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<errno.h>
#include<ctype.h>

//ģ��strstr()����
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


//strerror()����
//���ش����룬����Ӧ�Ĵ�����Ϣ
//int main()
//{
//	//�����ÿ⺯�������������ʱ�򣬾ͻ��д�����
//	//����������errno���ȫ�ֱ�����
//	//#include<errno.h>
//
//	printf("%s\n", strerror(errno));
//
//	//�ļ�����
//	FILE *p = fopen("text.txt", "r");
//	if (p == NULL)
//	{
//		//printf("��ӡ������Ϣ��%s\n", strerror(errno));
//		//��ӡ������Ϣ perror()
//		perror("��ӡ������Ϣ");
//	}
//	else
//	{
//		printf("�򿪳ɹ�\n");
//		fclose(p);
//		p = NULL;
//	}
//	return 0;
//}


//�ж��Ƿ��Ǵ�д��ĸ
//����������������ͷ�����
//#include<ctype.h>
//int main()
//{
//	char a = 'Z';
//	int b = 7;
//	//int ret = isupper(a);
//	//int ret = islower(a);
//	int ret = isdigit(b);// 0
//	//isdigit������b������ĸ������
//	//������ASCII��ֵ�Ƿ��������ַ��ķ�Χ��
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


//�ַ�ת��
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


//memcpy()����
//����memcpy��sourse��λ�ÿ�ʼ�����num���ֽڵ����ݵ�dest�ڴ��λ��
//�����ֽ�  ���ص�����
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



//memmove����
//void *my_memmove(void *dest,const void *src, size_t num)
//{
//	void *ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	//src<dest   �Ӻ���ǰ
//	//src>dest   ��ǰ���
//	//src>dest+num  ��ǰ��󣬴Ӻ���ǰ����
//	//��������������Թ�Ϊһ��  ��ǰ���
//	if (src > dest)
//	{
//		//ǰ-��
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		//��-ǰ
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


//memcmp()����
//�Ƚϴ�ptr1��ptr2ָ�뿪ʼ��num���ֽ�
//int memcmp(const void *ptr1, const void *ptr2, size_t num)

//int main()
//{
//	int arr[] = {1,2,3,4,5};
//	int arr1[] = { 1, 2, 3, 3, 3 };
//	//int ret = memcmp(arr + 1, arr + 2, 2);
//	int ret = memcmp(arr, arr1, 16);
//	if (ret > 0)
//	{
//		printf("����\n");
//	}
//	else if (ret < 0)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("����\n");
//	}
//	return 0;
//}


//memset()����
//void *memset( void *dest, int c, size_t count )
//һ���ֽ�һ���ֽ������ڴ�
int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	memset(arr, 0 , 20);
	return 0;
}
