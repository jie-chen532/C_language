#define _CRT_SECURE_NO_WARNINGS 1



//ģ��atoi
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
//	//��ָ�뷵�طǷ�״̬0
//	if (str == NULL)
//	{
//		return 0;
//	}
//
//	//���ַ������طǷ�״̬0
//	if (*str == '\0')
//	{
//		return 0;
//	}
//
//	//�����հ�
//	while (isspace(*str))
//	{
//		str++;
//	}
//
//	//ǰ����'+'
//	if (*str == '+')
//	{
//		flag = 1;
//		str++;
//	}
//
//	//ǰ����'-'
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


//�����ƴ洢
#include<stdio.h>
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("tes t.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("���ļ�ʧ��ԭ��");
//		return 1;
//	}
//	fwrite(&a, 4, 1, pf);//�����Ƶ���ʽд���ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	FILE *p = fopen("test.txt", "w");
//	if (p == NULL)
//	{
//		perror("���ļ�������Ϣ");
//		return 1;
//	}
//	//д�ļ�
//	fputc('a', p);
//	fputc('b', p);
//	fputc('c', p);
//	fputc('d', p);
//	fputc('e', p);
//
//	//�ӱ�׼��������-��Ļ 
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
//		perror("���ļ�����");
//		return 1;
//	}
//	//���ļ�
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
//		perror("���ļ�����");
//		return 1;
//	}
//	//�ı���д��
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
//		perror("���ļ�����");
//		return 1;
//	}
//
//	//������
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


//�ļ�����
//int main()
//{
//	FILE* pf = fopen("test.c", "r");
//	if (pf == NULL)
//	{
//		perror("���ļ�ʧ��");
//		return 1;
//	}
//
//	FILE* p = fopen("test1.txt", "w");
//	if (p == NULL)
//	{
//		perror("д�ļ�ʧ��");
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


//��ʽ�������������

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
//		perror("��ʽ���������");
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
//		perror("��ʽ���������");
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