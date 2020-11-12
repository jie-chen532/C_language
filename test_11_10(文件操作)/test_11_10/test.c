#define _CRT_SECURE_NO_WARNINGS 1



//模拟atoi
//#include<stdio.h>
//#include<limits.h> 
//#include<ctype.h>
//
//enum State
//{
//	VALID,
//	INVALID
//}state =  VALID;
//
//int my_atoi(const char*str)
//{
//	state = INVALID;
//
//	int flag = 1;
//	//空指针返回非法状态0
//	if (str == NULL)
//	{
//		return 0;
//	}
//
//	//空字符串返回非法状态0
//	if (*str == '\0')
//	{
//		return 0;
//	}
//
//	//跳过空白
//	while (isspace(*str))
//	{
//		str++;
//	}
//
//	//前面是'+'
//	if (*str == '+')
//	{
//		flag = 1;
//		str++;
//	}
//
//	//前面是'-'
//	if (*str == '-')
//	{
//		flag = -1;
//		str++;
//	}
//
//	long long ret = 0;
//
//	while (isdigit(*str))
//	{
//		ret = ret * 10 + flag*(*str - '0');
//		if (ret > INT_MAX || ret < INT_MIN)
//		{
//			ret = 0;
//			return (int)ret;  
//		}
//		str++;
//	}
//	if (*str == '\0')
//	{
//		state = VALID;
//		return (int)ret; 
//	}
//	return (int)ret;
//}
//
//int main()
//{
//	char arr[] = "   -123";
//	int tmp = my_atoi(arr);
//	if (state == VALID)
//	{
//		printf("VALID:%d\n", tmp);
//	}
//	else
//	{
//		printf("INVALID:%d\n", tmp);
//	}
//	return 0;
//}


//二进制存储
#include<stdio.h>
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("tes t.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("打开文件失败原因");
//		return 1;
//	}
//	fwrite(&a, 4, 1, pf);//二进制的形式写到文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	FILE *p = fopen("test.txt", "w");
//	if (p == NULL)
//	{
//		perror("打开文件错误信息");
//		return 1;
//	}
//	//写文件
//	fputc('a', p);
//	fputc('b', p);
//	fputc('c', p);
//	fputc('d', p);
//	fputc('e', p);
//
//	//从标准输出流输出-屏幕 
//	fputc('e', stdout);
//
//	fclose(p);
//	p = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (NULL == pf)
//	{
//		perror("打开文件错误");
//		return 1;
//	}
//	//读文件
//	//char ch = fgetc(pf);
//	//printf("%c\n", ch);
//	//ch = fgetc(pf);
//	//printf("%c\n", ch);
//	//ch = fgetc(pf);
//	//printf("%c\n", ch);
//	//ch = fgetc(pf);
//	//printf("%c\n", ch);
//
//	char ch = fgetc(stdin);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	FILE *pf = fopen("test.txt", "w");
//	if (NULL == pf)
//	{
//		perror("打开文件错误");
//		return 1;
//	}
//	//文本行写入
//	//fputs("hello world\n", pf);
//	//fputs("hello world\n", pf);
//	//fputs("hello world\n", pf);
//	//fputs("hello world\n", pf);
//
//	fputs("hello world\n", stdout);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	char arr[20] = { 0 };
//	FILE *pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("打开文件错误");
//		return 1;
//	}
//
//	//读数据
//	//fgets(arr,20,pf);
//	//printf("%s", arr);
//	//fgets(arr, 20, pf);
//	//printf("%s", arr);
//	//fgets(arr, 20, pf);
//	//printf("%s", arr);
//	//fgets(arr, 20, pf);
//	//printf("%s", arr);
//
//	fgets(arr, 20, stdin);
//	printf("%s", arr);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//文件拷贝
//int main()
//{
//	FILE* pf = fopen("test.c", "r");
//	if (pf == NULL)
//	{
//		perror("读文件失败");
//		return 1;
//	}
//
//	FILE* p = fopen("test1.txt", "w");
//	if (p == NULL)
//	{
//		perror("写文件失败");
//		fclose(pf);
//		pf = NULL;
//		return 1;
//	}
//
//	char ch = 0;
//	while ((ch=fgetc(pf))!=EOF)
//	{
//		fputc(ch, p);
//	}
//
//	fclose(p);
//	p = NULL;
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//格式化输入输出函数

//struct stu
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	struct stu s = { "zhangsan", 20 };
//	FILE* pf = fopen("test1.txt", "w");
//	if (pf == NULL)
//	{
//		perror("格式化输入错误");
//		return 1;
//	}
//
//	fprintf(pf, "%s %d", s.name, s.age);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//int main()
//{
//	struct stu s = { 0 };
//	FILE* pf = fopen("test1.txt", "r");
//	if (pf == NULL)
//	{
//		perror("格式化输出错误");
//		return 1;
//	}
//	
//	fscanf(pf, "%s %d", s.name, &(s.age)); 
//	printf("%s %d", s.name, s.age);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//sscanf   sprintf

struct stu
{
	char name[20];
	int age;
};

int main()
{
	struct stu s = { "zhangsan", 20 };
	struct stu tmp = { 0 };
	char str[100] = { 0 };
	sprintf(str, "%s %d", s.name, s.age);
	printf("%s\n", str);

	sscanf(str, "%s %d", tmp.name, &(tmp.age));
	printf("%s %d\n", tmp.name, tmp.age);
	return 0;
}