#define _CRT_SECURE_NO_WARNINGS


#include<stdlib.h>
#include<stdio.h>
#include<time.h>
void menu()  //游戏菜单
{
	printf("****************************\n");
	printf("*********  1.play  *********\n");
	printf("*********  2.exit  *********\n");
	printf("****************************\n");
}
void game()
{
	//RAND_MAX：32767
	//rand();范围为0-32767
	int random = rand()%100+1; 
	int com = 0;
	while (1)
	{
		printf("请输入猜的数字>>:");
	    scanf("%d", &com);
		if (com > random)
		{
			printf("猜大了\n");
		}
		else if (com < random)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜中了\n");
			break;
		}
	}
}


int main()
{
	int input = 0;
	//在调用rand函数之前，要使用srand函数设置随机数的生成器。
	//srand只需要调用一次
	//一般用时间设置生成数的的起点。srand（time（）），一般调用time函数
	srand((unsigned int)time(NULL));
	while (1)
	{
		menu();
		printf("请选择>>:");
		scanf("%d", &input);
		if (input == 1)
		{
			game();
		}
		else if (input == 2)
		{
			break;
		}
		else
		{
			printf("选择错误，请再次选择！\n");
		}
	} 
	return 0;
}