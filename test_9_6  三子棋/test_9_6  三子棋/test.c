#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include"game.h"

void menu()
{
	printf("***********************\n");
	printf("****    1.play    *****\n");
	printf("****    0.exit    *****\n");
	printf("***********************\n");
}

void game()
{
	char ret;
	char board[ROW][COL] = { 0 };//数组应该初始化为空格
	InitBoard(board, ROW, COL);//初始化棋盘
	PrintBoard(board, ROW, COL);//打印棋盘

	while (1)
	{
		PlayerMove(board, ROW, COL);//玩家走
		PrintBoard(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret != ' ')
			break;

		ComputerMove(board, ROW, COL);//电脑走
		PrintBoard(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret != ' ')
			break;
		}
	if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else 
	{
		printf("平局\n");
	}
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
			break;
		default:
			printf("输入错误请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}