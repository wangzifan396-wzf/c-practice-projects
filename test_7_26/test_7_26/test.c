#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//void menu()
//{
//	printf("***********************\n");
//	printf("****** 1. play ******\n");
//	printf("****** 0. exit ******\n");
//	printf("***********************\n");
//}
//
//void game()
//{
//	int r = rand() % 100 + 1;
//	int guess = 0;
//	while (1)
//	{
//		printf("请猜数字>:");
//		scanf("%d", &guess);
//		if (guess < r)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > r)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("游戏结束\n");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}



//int main()
//{
//	//完全初始化
//	int arr[5] = { 1,2,3,4,5 };
//	int arr4[] = { 1,2,3,4,5 };//这?数组的??还是5，编译器会根据初始化的内容推算出来
//	//不完全初始化
//	int arr2[6] = { 1 };//第?个元素初始化为1，剩余的元素默认初始化为0
//	//错误的初始化 - 初始化项太多
//	int arr3[3] = { 1, 2, 3, 4 };
//	return 0;
//}


//int main()
//{
//	char arr1[] = { 'a', 'b', 'c' };
//	char arr2[] = "abc";
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	printf("%zu\n", strlen(arr1));
//	printf("%zu\n", strlen(arr2));
//	return 0;
//}



//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	printf("%zu\n", sizeof(arr1));
//	printf("%zu\n", sizeof(arr2));
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[7]);//8
//	arr[7] = 0; //也可以修改这个元素的值
//	printf("%d\n", arr[7]);//0
//	printf("%d\n", arr[3]);//4
//	return 0;
//}



//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr[0]));//计算?个元素的??，单位是字节
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n ", i, &arr[i]);
//	}
//	return 0;
//}



//int main()
//{
//	char arr1[] = "welcome to bit!!!";
//	char arr2[] = "#################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	printf("%s\n", arr2);
//	while (left <= right)
//	{
//		Sleep(1000);
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		system("cls");
//		printf("%s\n", arr2);
//		
//	}
//	
//	return 0;
//}




int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int key = 7;//要找的数字
	int mid = 0;//记录中间元素的下标
	int find = 0;
	while (left <= right)
	{
		/*mid = (left + right) / 2;*/
		mid = left + (right - left) / 2;
		if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else
		{
			find = 1;
			break;
		}
	}
	if (1 == find)
		printf("找到了,下标是%d\n", mid);
	else
		printf("找不到\n");
	return 0;
}

