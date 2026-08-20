#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdint.h>

//struct Date
//{
//	int year;
//	int month;
//	int day;
//};
////描述学?信息
//typedef struct Student
//{
//	char name[20];
//	struct Date birthday;
//	char id[20];
//}Student;
//int main()
//{
//	Student stu_arr[3] =
//	{
//	{"zhangsan", {2008,8,8}, "2026010101"},
//	{"lisi", {2009, 1, 10}, "2026010102"},
//	{"wangwu", {2009, 3, 20}, "2026010103"}
//	};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("name:%s\tbirth:%d-%d-%d\tid:%s\n",
//			stu_arr[i].name,
//			stu_arr[i].birthday.year,
//			stu_arr[i].birthday.month,
//			stu_arr[i].birthday.day,
//			stu_arr[i].id);
//	}
//	return 0;
//}



//struct S1
//{
//	char c1;
//	char c2;
//	int i;
//};
//struct S2
//{
//	char c1;//
//	int i;
//	char c2;
//};
//int main()
//{
//	struct S1 s1 = { 0 };
//	struct S2 s2 = { 0 };
//	printf("%zu\n", sizeof(struct S1));
//	printf("%zu\n", sizeof(struct S2));
//	return 0;
//}




//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
////结构体嵌套问题
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//int main()
//{
//	struct S3 s3 = { 0 };
//	struct S4 s4 = { 0 };
//	printf("%zu\n", sizeof(struct S3));
//	printf("%zu\n", sizeof(struct S4));
//	return 0;
//}



// 状态枚举，末尾的 LIGHT_COUNT ?动得到状态总数
typedef enum
{
	RED,
	GREEN,
	YELLOW,
	LIGHT_COUNT
} TrafficLight;
int main()
{
	// 每种灯的名称和持续时间，?枚举值作为索引
	const char* message[] = { [RED] = "?? 红灯",[GREEN] = "?? 绿灯",[YELLOW] =
	"?? ?灯" };
	const int seconds[] = { [RED] = 10,[GREEN] = 10,[YELLOW] =
	3 };
	TrafficLight current = RED;
	printf("?? ?动红绿灯 (Ctrl+C 退出)\n\n");
	while (1)
	{
		int sec = seconds[current];//计算出当前状态下的秒数
		printf("现在是 %s，持续 %d 秒\n", message[current], sec);
		for (int i = sec; i > 0; i--)
		{
			printf(" 剩余 %2d 秒\n", i);
			Sleep(1000); // 暂停1秒
		}
		printf(" >>> %s 结束 <<<\n\n", message[current]);
		// 循环切换到下?个灯
		current = (current + 1) % LIGHT_COUNT;
	}
	return 0;
}