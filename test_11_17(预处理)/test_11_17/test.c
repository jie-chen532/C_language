#define _CRT_SECURE_NO_WARNINGS 1


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	FILE *pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		fprintf(pf, "file:%s line:%d date:%s time:%s content:%d\n", __FILE__, __LINE__,
//			                                                      __DATE__, __TIME__,arr[i]);
//	}
//	fclose(pf);
//	pf = NULL;
//}


//注意后面带\
//#include<stdio.h>
//#define PRINT_TEST printf("file:%s line:%d date:%s time:%s\n",__FILE__, \
//                                                              __LINE__, \
//                                                              __DATE__, \
//                                                              __TIME__)
//int main()
//{
//	PRINT_TEST;
//	return 0;
//}

#include<stdio.h>
//#define MAX(x,y) (x>y?x:y)
//int main()
//{
//	printf("%d\n", MAX(1, 2));
//	return 0;
//}


//#
//#define PRINT(x) printf("The value of "#x" is %d\n",x)
//
//int main()
//{
//	int a = 10;
//	PRINT(a);
//	int b = 20;
//	PRINT(b);
//	return 0;
//}


//#define PRINT(Format,x) printf("The value of "#x" is "Format"\n",x)
//
//int main()
//{
//	int a = 10;
//	PRINT("%d",a);
//	int b = 20;
//	PRINT("%d",b);
//	float c = 5.5f;
//	PRINT("%f", c);
//	return 0;
//}


//##
#define CAT(x,y) x##y

int main()
{
	int Class91 = 2020;
	printf("%d\n", CAT(Class, 91));
	return 0;
}