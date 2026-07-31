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

void menu() 
{
	printf("Welcome to the game!\n");
	printf("1. Start Game\n");
	printf("0. Exit\n");
}


void game()
{
	//����
	char mine[11][11] = {0};//����
	char show[11][11] = {0};//����
	//��ʼ������
	InitBoard(mine, 11, 11, '0');//0
	InitBoard(show, 11, 11, '*');//*
	//��ӡ����
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//����
	//1.���������
	srand((unsigned int)time(NULL));
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//����
	FindMine(mine, show, ROW, COL);
}



int main() {
	int input = 0;
	do
	{
		
		menu();
		printf("Enter your choice: ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("Starting game...\n");
			game();
			break;
		case 0:
			printf("Exiting...\n");
			break;
		default:
			printf("Invalid choice. Please try again.\n"); 
		}
	} while (input);
	return 0;
}

