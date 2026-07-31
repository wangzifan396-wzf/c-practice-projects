#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdint.h>

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 10


//��ʼ������
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);

//��ӡ����
void DisplayBoard(char board[ROWS][COLS], int rows, int cols);

//����
void SetMine(char board[ROWS][COLS], int rows, int cols);

//����
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int rows, int cols);

//自动展开
int Expand(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y);

