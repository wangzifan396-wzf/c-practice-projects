#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdint.h>

//int main() {
//	int n;
//	printf("Enter the number of elements: ");
//	scanf("%d", &n);
//	int* arr = (int*)malloc(n * sizeof(int));
//	if (arr == NULL) {
//		printf("Memory allocation failed\n");
//		return 1;
//	}
//	printf("Enter %d integers:\n", n);
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//	}
//	printf("You entered:\n");
//	for (int i = 0; i < n; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	free(arr);
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 0 };
//	int num = 100;
//	char c = 'w';
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i + 1;
//	}
//	return 0;
//}




//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 1;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}
//如果n分别是1,2,3,4,5...10,求出每个数的阶乘，再求和就好了
//在上?的代码上改造
//int main()
//{
//	int n = 0;
//	int i = 1;
//	int sum = 0;
//	int ret = 1;
//	for (n = 1; n <= 10; n++)
//	{
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}



int Fact(int n)
{
	if (n <= 0)
		return 1;
	else
		return n * Fact(n - 1);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fact(n);
	printf("%d\n", ret);
	return 0;
}