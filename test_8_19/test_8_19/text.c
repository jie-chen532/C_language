#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//switch语句
//1-5工作日
//6-7休息日
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	default:   //与顺序无关（在逻辑正确的情况下）
//		printf("输入错误\n");
//		break;
//	case 1:
//		printf("工作日\n");
//		break;
//	case 2:
//		printf("工作日\n");
//		break;
//	case 3:
//		printf("工作日\n");
//		break;
//	case 4:
//		printf("工作日\n");
//		break;
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//		printf("休息日\n");
//		break;
//	case 7:
//		printf("休息日\n");
//		break;
//	}
//	return 0;
//}

//1-5工作日
//6-7休息日
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}


//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)     //n=1
//	{
//	case 1:m++;    //进入case1   m=3
//	case 2:n++;    //n=2
//	case 3:
//		switch (n)    //n=2  进入case2
//		{
//		case 1:n++;
//		case 2:m++, n++;   //m=4  n=3
//			break;
//		}
//	case 4:
//		m++;   //m=5
//		break;
//	default:
//		break;
//	}
//	printf("m = %d n = %d", m, n);   //m=5  n=3
//	return 0;
//}


//while中的continue
//continue结束本次循环，continue后面的语句都不会执行，继续再循环
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);    //1 2 3 4 死循环
//		i++;
//	}
//	return 0;
//}

//while中的break
//永久的结束循环
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);    //1 2 3 4
//		i++;
//	}
//	return 0;
//}


//int getchar(void)
//int main()
//{
//	//从键盘获得一个字符
//	int ch = getchar();  //ASCII码
//	//printf("%d", ch);
//	putchar(ch);
//	return 0;
//}


//EOF—end of file   本质为-1   文件的结束标志(crtl+z)
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);  //缓冲区 d \n  会输出d，也会输出\n
//	}
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	char password[30] = { 0 };
//	printf("请输入密码：");  //密码：chen      12345 chen
//	scanf("%s", password);   //缓冲区 chen \n   scanf从缓冲区得到chen     
//	                         //scanf从缓冲区得到空格前面的12345
//	//getchar();
//	//处理缓冲区多余的字符
//	while (getchar()!= '\n')
//	{
//		;
//	}
//
//	printf("请确认(y/n):");
//	ch = getchar();    //getchar 从缓冲区得到\n != y   就会确认失败
//	if ('y' == ch)
//		printf("确认成功\n");
//	else
//		printf("确认失败\n");
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch<'0'|| ch>'9')
//		{
//			continue;
//		}
//		putchar(ch);   //0-9可以打印
//	}
//	return 0;
//}


//for中的continue与break
//int main()
//{
//	int i = 0;
//
//	//for (i = 0; i < 10; i++)
//	//{
//	//	if (i == 5)
//	//		continue;
//	//	printf("%d ", i);   //0 1 2 3 4 6 7 8 9
//	//}
//
//	for (i = 0; i < 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);   //0 1 2 3 4
//	}
//	return 0;
//}


//不要轻易省掉for语句中的三个条件
//int main()
//{
//	//for (;;)
//	//{
//	//	//当for循环的判断部分省略时，默认表示恒为真
//	//	printf("hehe\n");  //死循环
//	//}
//
//	//1
//	int i = 0;
//	int j = 0;
//	int count = 1;
//	//for (i=0; i < 10;i++)
//     	//for (j=0; j < 10; j++)
//	//    {
//	//		printf("hehe:%d\n", count);   //打印100个hehe
//	//		count++;
//	//    }
//
//
//	//2	
//	for (; i < 10;i++)
//	    for (; j < 10; j++)
//	    {
//		  //当第一循环完之后j=10,打印10个hehe，第二次进来，由于j没有初始化，还是j=10
//		  //不满足j<10的条件
//		  printf("hehe:%d\n", count);   //打印10个hehe
//		  count++;
//	    }
//	return 0;
//}


//do while语句中的continue和break
//int main()
//{
//	int i = 0;
//	//do
//	//{
//	//	if (5 == i)
//	//		continue;
//	//	printf("%d ", i);    //0 1 2 3 4 死循环
//	//	i++;
//	//} while (i <= 10);
//
//	do
//	{
//		if (5 == i)
//			break;
//		printf("%d ", i);    //0 1 2 3 4 
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}


//循环多少次？
int main()
{
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++)
	{
		k++;    //不会循环。每个表达式都会有结果，k=0的结果为0，为假，直接跳出循环
	}           //若b=3，结果为3
	return 0;
 }