#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main() 
//{
//	printf("ahehe, Hello, World!\n");
//	printf("%d\n", 100);
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof(long double));
//	int age = 18;
//	double price = 13.14;
//	float weight = 45.5;
//	return 0;
//}

//int main()
//{
//	int age = 22;
//	int hight = 175;
//	float weight = 55.5f;
//	
//	printf("%d\n", age);
//	printf("%d\n", hight);
//
//	return 0;
//	
//}

//int main()
//{
//	int sum1 = 0;
//	int sum2 = 0;
//	scanf("%d%d", &sum1, &sum2);
//	int sum = sum1 + sum2;
//	printf("%d\n", sum);
//
//}

int a = 10;

void test()
{
	printf("test-->%d\n", a);
}
int main()
{
	test();
	{
	printf("a=%d\n", a);
	}
	printf("a=%d\n", a);
	return 0;
}