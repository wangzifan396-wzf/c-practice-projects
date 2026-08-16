#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdint.h>

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int* ptr =
//		(int*)malloc(num * sizeof(int));
//	if (NULL != ptr)//判断ptr指针是否为空
//	{
//		int i = 0;
//		for (i = 0; i < num; i++)
//		{
//			*(ptr + i) = 0;
//		}
//	}
//	else
//	{
//		printf("malloc 失败\n");
//		return 1;
//	}
//	free(ptr);//释放ptr所指向的动态内存
//	ptr = NULL;
//	return 0;
//}


int main()
{
	int* ptr = (int*)malloc(100);
	if (ptr != NULL)
	{
		//业务处理
	}
	else
	{
		return 1;
	}
	//扩展容量
	//代码1 - 直接将realloc的返回值放到ptr中
	ptr = (int*)realloc(ptr, 1000);//这样可以吗？(如果申请失败会如何？)
	//代码2 - 先将realloc函数的返回值放在p中，不为NULL，再放ptr中
	int* p = realloc(ptr, 1000);
	if (p != NULL)
	{
		ptr = p;
		p = NULL;
	}
	//业务处理
	//....
	free(ptr);
	ptr = NULL;
	return 0;
}