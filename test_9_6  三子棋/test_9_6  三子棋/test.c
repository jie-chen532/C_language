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
	char board[ROW][COL] = { 0 };//����Ӧ�ó�ʼ��Ϊ�ո�
	InitBoard(board, ROW, COL);//��ʼ������
	PrintBoard(board, ROW, COL);//��ӡ����

	while (1)
	{
		PlayerMove(board, ROW, COL);//�����
		PrintBoard(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret != ' ')
			break;

		ComputerMove(board, ROW, COL);//������
		PrintBoard(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret != ' ')
			break;
		}
	if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else 
	{
		printf("ƽ��\n");
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("���������ѡ��:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
	return 0;
}