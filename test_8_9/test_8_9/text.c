#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//常量
//const修饰的常变量(常属性的变量)
//int main()
//{
//	const int num = 10;
//	//num = 20;    //不能对常变量进行修改
//	printf("%d", num);
//
//	//数组里面的num是常量，const的实质是变量
//	//int arr[num] = { 0 };
//
//	return 0;
//}


//define定义的标识符

//#define NUM 100   //NUM是define定义的常量
//
//int main()
//{
//	//NUM = 100;  //NUM是常量不能改变
//	printf("%d", NUM);
//	return 0;
//}


//枚举常量

//enum color
//{
//	//枚举类型颜色的三个可能取值
//	red,
//	green,
//	blue,
//};
// 
//int main()
//{
//	//red = 3;  //error  枚举常量
//
//	printf("%d\n", red);  //常量0
//	printf("%d\n", green);   //常量1
//	printf("%d\n", blue);  //常量2
//	return 0;
//}


// \0与字符串
// \0是字符串结束的标志，不是字符串的内容
#include<string.h>

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[]= { 'a', 'b', 'c', 'd', 'e', 'f'};
//	printf("%s\n", arr1);  //输出结果：abcdef
//	printf("%s\n", arr2);  //输出结果：abcdef烫烫烫烫烫abcdef  若在arr2后面加上'\0'
//
//	printf("%d\n", sizeof(arr1));  //7
//	printf("%d\n", sizeof(arr2));  //6
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abcde";
//	char arr2[] = { 'a', 'b', 'c', 'd', 'e','\0' };
//
//	printf("%d\n", strlen(arr1)); //输出：5
//	printf("%d\n", strlen(arr2)); //输出：5
//	return 0;
//}


//转义字符
int main()
{
	//输出'
	printf("%c\n", '\'');
	//输出"
	printf("%c\n", '\"');
	printf("%s\n", "he said:\"hard work\"");
	/*输出一个 \*/
	printf("%c\n", '\\');
	printf("%s\n", "c:\\code\\test.c");
	//蜂鸣器
	printf("\a\a\a\a\a");

	// \t水平制表符   作用相当于tab键
	printf("%s\n", "a\tb\tc");

	// \r回车符  此回车符非彼回车键
	printf("%s\n", "hello!\rxxx");  //结果xxxlo!
	

	//\ddd
	printf("%c\n", '\23'); //19作为ascii的字符是控制台不可打印字符的 
	printf("%c\n", '\76');
	//\xdd
	printf("%c\n", '\x5F');
	return 0;
}


//例题
//int main()
//{ 
//	//  \32被解析成一个转义字符
//	printf("%d\n", strlen("c:\test\328\test.c"));  //结果为14
//	return 0;
//}
