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

//��ʼ�����̺�������
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


//֧��FindMine�����ĸ���������ͳ��������Χ�м�����
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

// Expand: recursively reveal cells with 0 neighboring mines
int Expand(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	// Already revealed? Skip immediately (prevents redundant recursion)
	if (show[x][y] != '*')
		return 0;

	int count = GetMineCount(mine, x, y);

	// Has neighboring mines: show the number and stop
	if (count > 0)
	{
		show[x][y] = count + '0';
		return 1;
	}

	// No neighboring mines: mark as empty, expand to all 8 neighbors
	show[x][y] = ' ';
	int revealed = 1;

	int i, j;
	for (i = x - 1; i <= x + 1; i++)
	{
		for (j = y - 1; j <= y + 1; j++)
		{
			if (i >= 1 && i <= ROW && j >= 1 && j <= COL)
				revealed += Expand(mine, show, i, j);
		}
	}
	return revealed;
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int rows, int cols)
{
	{
		int x = 0;
		int y = 0;
		int win = 0;
		while (win < ROW * COL - EASY_COUNT)
		{
			printf("������Ҫ�Ų������:>");
			scanf("%d %d", &x, &y);
			if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
			{
				if (mine[x][y] == '1')
				{
					printf("���ź����㱻ը����\n");
					DisplayBoard(mine, ROW, COL);
					break;
				}
				else
				{
					int count = GetMineCount(mine, x, y);
					if (count == 0)
					{
						int revealed = Expand(mine, show, x, y);
						win += revealed;
					}
					else
					{
						show[x][y] = count + '0';
						win++;
					}
					DisplayBoard(show, ROW, COL);
				}
			}
			else
			{
				printf("����Ƿ�����������\n");
			}
		}
		if (win == ROW * COL - EASY_COUNT)
		{
			printf("���׳ɹ�\n");
			DisplayBoard(mine, ROW, COL);
		}
	}
}