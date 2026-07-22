#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	char ch = 'x';
//	int num = 10;
//	float fnum = 3.14;
//	double dnum = 2.71828;
//	double math = 99;
//	
//	math = 78;
//
//
//	return 0;
//}


//int num2 = 80;
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = num1 + num2;
//	printf("%d", sum);
//	printf("%d", num2);
//	return 0;
//}



//int main()
//{
//	int num2 = 0;
//	printf("%d", num2);
//	return 0;
//}


//
//#define M 100
//#define PI 3.14159
//int main()
//{
//	int Max = M;
//	printf("M = %d\n", M);
//	printf("Max = %d\n", Max);
//	printf("pi = %lf\n", PI);
//	return 0;
//}


//const double e = 2.71828; // 浮点常变量
//const int days_in_week = 7;
//days_in_week = 8; // 错误：不能修改 const 变量
//




//int main()
//{
//	int x = 4 + 22;
//	int y = 61 - 23;
//	printf("%d\n", x);
//	printf("%d\n", y);
//	return 0;
//}


//
//int main()
//{
//	float x = 6.0; 
//	float y = 4.0;
//	float z = x / y;
//	printf("%f\n", z); 
//	return 0;
//}


//int main()
//{
//	int score = 5;
//	score = (score / 20) * 100;
//	printf("%f\n", score);
//	return 0;
//}


//int main()
//{
//	float score = 5;
//	score = (score / 20) * 100;
//	printf("%f\n", score);
//	return 0;
//}


#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	//输⼊2个整数
	scanf("%d%d", &a, &b);
	//计算
	float avg = (a + b) / 2.0;
	//输出结果
	printf("%f\n", avg);
	return 0;
}