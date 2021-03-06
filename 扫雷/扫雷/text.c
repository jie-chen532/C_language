#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void menu()
{
	printf("**********************\n");
	printf("*****   1.play   *****\n");
	printf("*****   0.exit   *****\n");
	printf("**********************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };   //存储雷的信息
	char show[ROWS][COLS] = { 0 };//排查出雷的信息
	InitBoard(mine, ROWS, COLS, '0');//初始化—'0'
	InitBoard(show, ROWS, COLS, '*');//初始化—'*'

	//雷的信息，一般不打印，在此只是测试
	//DisplayBoard(mine, ROW, COL);//实际打印只打印9*9
	DisplayBoard(show, ROW, COL);

	//埋雷
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);

	//排雷
	ReMine(mine, show, ROW, COL);
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入你的选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}