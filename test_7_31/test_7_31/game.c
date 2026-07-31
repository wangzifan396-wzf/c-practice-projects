#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdint.h>

#include "game.h"

//初始化棋盘函数定义
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}


void DisplayBoard(char board[ROWS][COLS], int rows, int cols)
{
	int i = 0;
	int j = 0;
	for (j = 0; j <= cols; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= rows; i++)
	{
		printf("%d ", i);
		int j = 0;
		for (j = 1; j <= cols; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}


void SetMine(char board[ROWS][COLS], int rows, int cols)
{
	int count = 0;
	while (count < EASY_COUNT)
	{
		int x = rand() % rows + 1;
		int y = rand() % cols + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count++;
		}
	}
}


//支持FindMine函数的辅助函数，统计坐标周围有几个雷
int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	int count = 0;
	int i = 0;
	for (i = x - 1; i <= x + 1; i++)
	{
		int j = 0;
		for (j = y - 1; j <= y + 1; j++)
		{
			if (mine[i][j] == '1')
			{
				count++;
			}
		}
	}
	return count;
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int rows, int cols)
{
	{
		int x = 0;
		int y = 0;
		int win = 0;
		while (win < ROW * COL - EASY_COUNT)
		{
			printf("请输入要排查的坐标:>");
			scanf("%d %d", &x, &y);
			if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
			{
				if (mine[x][y] == '1')
				{
					printf("很遗憾，你被炸死了\n");
					DisplayBoard(mine, ROW, COL);
					break;
				}
				else
				{
					//统计坐标周围有几个雷
					int count = GetMineCount(mine, x, y);
					show[x][y] = count + '0';
					DisplayBoard(show, ROW, COL);
					win++;
				}
			}
			else
			{
				printf("坐标非法，重新输入\n");
			}
		}
		if (win == ROW * COL - EASY_COUNT)
		{
			printf("排雷成功\n");
			DisplayBoard(mine, ROW, COL);
		}
	}
}