#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9    //ʵ������9*9������
#define COL 9


#define ROWS ROW+2   //����һ��11*11�����̣���ֹ�߽����
#define COLS COL+2

#define count 10    //���׵�����
//��ʼ������
void InitBoard(char arr[ROWS][COLS], int row, int col, char set);

//��ӡ����
void DisplayBoard(char arr[ROWS][COLS], int row, int col);

//����
void SetMine(char arr[ROWS][COLS], int row, int col);

//����
void ReMine(char arr[ROWS][COLS], char arr1[ROWS][COLS], int row, int col);