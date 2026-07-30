#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdint.h>

//void set_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = -1;
//	}
//}
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}


//int main()
//{
//	int len = strlen("abcdef");//1.strlen求?个字符串的?度
//	printf("%d\n", len);//2.打印?度
//	return 0;
//}



//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int get_days_of_month(int y, int m)
//{
//	if (m < 1 || m > 12)
//		return -1; //如果输?的?份?法，则返回-1
//	int days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	int day = days[m];
//	if (is_leap_year(y) && m == 2)
//		day += 1;
//	return day;
//}
//int main()
//{
//	int y = 0;
//	int m = 0;
//	scanf("%d %d", &y, &m);
//	int d = get_days_of_month(y, m);
//	printf("%d\n", d);
//	return 0;
//}



//int main()
//{
//	int len = strlen("abcdef");//1.strlen求?个字符串的?度
//	printf("%d\n", len);//2.打印?度
//	printf("%d\n", strlen("abcdef"));//链式访问
//	return 0;
//}


//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}



//int main()
//{
//	printf("%d", printf("%d ", printf("%d ", 43)));
//	return 0;
//}

//
//int main()
//{
//	printf("%d ", printf("%d ", printf("%d ", 43)));
//	return 0;
//}



//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int y = 0;
//	scanf("%d", &y);
//	int r = is_leap_year(y);
//	if (r == 1)
//		printf("闰年\n");
//	else
//		printf("非闰年\n");
//	return 0;
//}


//int is_leap_year(int y);//函数声明
//
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int y = 0;
//	scanf("%d", &y);
//	int r = is_leap_year(y);
//	if (r == 1)
//		printf("闰年\n");
//	else
//		printf("非闰年\n");
//	return 0;
//}



//#include "add.h"
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//函数调?
//	scanf("%d %d", &a, &b);
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}



