#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<stdlib.h>

//struct s
//{
//	int num;
//	int a[0];//柔性数组
//};
//
//int main()
//{
//	struct s *p = (struct s*)malloc(sizeof(struct s) + sizeof(int)* 5);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 0;
//	}
//	int i = 0;
//	p->num = 100;
//
//	for (i = 0; i < 5; i++)
//	{
//		p->a[i] = i + 1;
//	}
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", p->a[i]);
//	}
//	printf("\n");
//	//增容
//	struct s *ptr = (struct s*)realloc(p,sizeof(struct s) + sizeof(int)* 10);
//	if (NULL == ptr)
//	{
//		perror("realloc");
//		return 0;
//	}
//	else
//	{
//		p = ptr;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		p->a[i] = 10;
//	}
//
//for (i = 0; i < 10; i++)
//{
//	printf("%d ", p->a[i]);
//}
//	free(p);
//	p = NULL;
//	return 0;
//}


typedef struct s2
{
	int num;
	char* arr;
}s2;

int main()
{
	s2 *p = (s2*)malloc(sizeof(s2));
	if (p == NULL)
	{
		perror("s2::malloc");
		return 0;
	}
	p->num = 100;
	p->arr = (char*)malloc(sizeof(char)* 10);
	if (p->arr == NULL)
	{
		perror("p->arr::malloc");
		return 0;
	}

	int i = 0;
	for (i = 0; i < 10; i++)
	{
		p->arr[i] = 'a' + i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%c ", p->arr[i]);
	}
	printf("\n");

	//增容
	char *ptr = (char*)realloc(p->arr, sizeof(char)* 15);
	if (ptr == NULL)
	{
		perror("realloc");
		return 0;
	}
	else
	{
		p->arr = ptr;
	}
	for (i = 0; i < 15; i++)
	{
		p->arr[i] = 'x';
	}

	for (i = 0; i < 15; i++)
	{
		printf("%c ", p->arr[i]);
	}
	//释放
	free(p->arr);
	p->arr = NULL;
	free(p);
	p = NULL;
	return 0;
}