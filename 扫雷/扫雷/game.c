#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

//��ʼ������
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


//��ӡ����
void DisplayBoard(char arr[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("------------------------------\n");

	//�кŵĴ�ӡ
	for (i = 0; i <= row; i++)
	{
		printf("%d  ", i);
	}
	printf("\n");

	for (i = 1; i <= row; i++)
	{
		//ÿһ����ǰ����к�
		printf("%d  ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c  ", arr[i][j]);
		}
		printf("\n");
	}

	printf("------------------------------\n");
}


//����
void SetMine(char arr[ROWS][COLS], int row, int col)
{
	int i = count;
	while (i)
	{
		//�����������
		int x = rand() % row + 1; //row
		int y = rand() % col + 1; //col
		//����
		if (arr[x][y] == '0')
		{
			arr[x][y] = '1';
			i--;
		}
	}
}

//����������Χ�׵ĸ���
int GetMine(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y - 1] + mine[x - 1][y]
		+ mine[x - 1][y + 1] + mine[x][y - 1]
		+ mine[x][y + 1] + mine[x + 1][y - 1]
		+ mine[x + 1][y] + mine[x + 1][y + 1] - 8 * '0';
}

//����
void ReMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;


	while (win<ROW*COL-count)
	{
		printf("����������Ų�����:");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("���ź�����ը��!!!\n");
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
			printf("�Ƿ����룬����������\n");
		}
		if (win == ROW*COL - count)
		{
			printf("��ϲ�㣬���׳ɹ�\n");
			DisplayBoard(mine, ROW, COL);
			break;
		}
	}
}