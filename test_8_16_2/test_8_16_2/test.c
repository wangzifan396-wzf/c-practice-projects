#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdint.h>

int main()
{
	int num = 0;
	scanf("%d", &num);
	int* ptr =
		(int*)malloc(num * sizeof(int));
	if (NULL != ptr)//判断ptr指针是否为空
	{
		int i = 0;
		for (i = 0; i < num; i++)
		{
			*(ptr + i) = 0;
		}
	}
	else
	{
		printf("malloc 失败\n");
		return 1;
	}
	free(ptr);//释放ptr所指向的动态内存
	ptr = NULL;
	return 0;
}