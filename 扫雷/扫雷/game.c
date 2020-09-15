#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

//初始化棋盘
void InitBoard(char arr[ROWS][COLS], int row, int col, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			arr[i][j] = set;
		}
	}
}


//打印棋盘
void DisplayBoard(char arr[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("------------------------------\n");

	//列号的打印
	for (i = 0; i <= row; i++)
	{
		printf("%d  ", i);
	}
	printf("\n");

	for (i = 1; i <= row; i++)
	{
		//每一行最前面的行号
		printf("%d  ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c  ", arr[i][j]);
		}
		printf("\n");
	}

	printf("------------------------------\n");
}


//埋雷
void SetMine(char arr[ROWS][COLS], int row, int col)
{
	int i = count;
	while (i)
	{
		//随机产生坐标
		int x = rand() % row + 1; //row
		int y = rand() % col + 1; //col
		//布置
		if (arr[x][y] == '0')
		{
			arr[x][y] = '1';
			i--;
		}
	}
}

//计算坐标周围雷的个数
int GetMine(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y - 1] + mine[x - 1][y]
		+ mine[x - 1][y + 1] + mine[x][y - 1]
		+ mine[x][y + 1] + mine[x + 1][y - 1]
		+ mine[x + 1][y] + mine[x + 1][y + 1] - 8 * '0';
}

//排雷
void ReMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;


	while (win<ROW*COL-count)
	{
		printf("请输入你的排查坐标:");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，雷炸了!!!\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else
			{
				show[x][y] = '0' + GetMine(mine, x, y);
				DisplayBoard(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("非法输入，请重新输入\n");
		}
		if (win == ROW*COL - count)
		{
			printf("恭喜你，排雷成功\n");
			DisplayBoard(mine, ROW, COL);
			break;
		}
	}
}