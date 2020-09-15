#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9    //实际所用9*9的棋盘
#define COL 9


#define ROWS ROW+2   //创建一个11*11的棋盘，防止边角溢出
#define COLS COL+2

#define count 10    //埋雷的数量
//初始化棋盘
void InitBoard(char arr[ROWS][COLS], int row, int col, char set);

//打印棋盘
void DisplayBoard(char arr[ROWS][COLS], int row, int col);

//埋雷
void SetMine(char arr[ROWS][COLS], int row, int col);

//排雷
void ReMine(char arr[ROWS][COLS], char arr1[ROWS][COLS], int row, int col);