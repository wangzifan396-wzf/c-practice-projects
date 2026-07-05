#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main() 
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("Enter three integers: ");
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b && a > c) 
//	{
//		printf("The largest number is: %d\n", a);
//	} 
//	else if (b > a && b > c) 
//	{
//		printf("The largest number is: %d\n", b);
//	} 
//	else 
//	{
//		printf("The largest number is: %d\n", c);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	printf("学C(1/0) ");
//	scanf("%d", &a);
//	if (a == 1)
//	{
//		printf("好工作\n");
//	}
//
//	else
//	{
//		printf("多学习\n");
//	}
//	return 0;
//}


//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = Add(a, b);
//	printf("c = %d\n", c);
//	return 0;
//}


int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
int main()
{
	int i = 0;
	while (i < 10)
	{
		printf(" %d\n", arr[i]);
		i = i + 1;
	}
	return 0;
}

