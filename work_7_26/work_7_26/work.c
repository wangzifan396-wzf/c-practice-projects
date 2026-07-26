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
//	int r = rand() % 100 + 1;//生成1-100的随机数
//	int guess = 0;
//	while (1)
//	{
//		printf("请猜数字:");
//		scanf("%d", &guess);
//		if (guess < r)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > r)
//		{
//			printf("猜大了\n");
//		}
//		else//猜对了
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
//		printf("请选择:");
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



//switch(input)
//{
//	case 1:
//		printf();
//		break
//	case 2:
//
//
//	default:
//
//
//}




//int main()
//{
//    int arr[10] = { 0 };
//    for (int i = 0; i < 10; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (int i = 9; i >= 0; i--)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}






//int main() {
//    int n, m;
//    // 1. 输入第一行 n 和 m
//    scanf("%d %d", &n, &m);
//
//    int a[1000], b[1000], res[2000];
//
//    // 2. 输入第二行 n 个数字到 a 数组
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &a[i]);
//    }
//
//    // 3. 输入第三行 m 个数字到 b 数组
//    for (int i = 0; i < m; i++) {
//        scanf("%d", &b[i]);
//    }
//
//    // 4. 核心合并过程：用数组下标来操作
//    int i = 0; // i 用来标记 a 数组当前走到了哪个位置
//    int j = 0; // j 用来标记 b 数组当前走到了哪个位置
//    int k = 0; // k 用来标记结果数组 res 当前存到了哪个位置
//
//    // 只要 a 数组和 b 数组都还没读完，就一直比较
//    while (i < n && j < m) {
//        if (a[i] < b[j]) {
//            res[k] = a[i]; // 把 a[i] 放进结果数组
//            i++;           // a 数组的下标往后移一个
//        }
//        else {
//            res[k] = b[j]; // 把 b[j] 放进结果数组
//            j++;           // b 数组的下标往后移一个
//        }
//        k++; // 结果数组的下标往后移一个
//    }
//
//    // 如果 a 数组还有剩下的，全部直接追加到结果数组后面
//    while (i < n) {
//        res[k] = a[i];
//        i++;
//        k++;
//    }
//
//    // 如果 b 数组还有剩下的，全部直接追加到结果数组后面
//    while (j < m) {
//        res[k] = b[j];
//        j++;
//        k++;
//    }
//
//    // 5. 打印结果
//    for (int i = 0; i < k; i++) {
//        // 稍微讲究一点：第一个数字前面不加空格，从第二个数字开始才加空格
//        // 这样最后一个数字后面就不会多出一个空格，符合 OJ 严格要求
//        printf("%d ", res[i]);
//    }
//
//    return 0;
//}




//int main()
//{ 
//	int arr[10] = { 0 };
//	int sum = 0;
//
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//		sum += arr[i];
//	}
//
//	double average = sum / 10.0;
//	printf("%.2f\n", average);
//}



int main()
{
	int n = 0;
	int A[1000];
	int B[1000];
	int temp;
	scanf("%d", &n);
	for (int i = 0; i < n;i++)
		scanf("%d", &A[i]);
	for (int i = 0; i < n;i++)
		scanf("%d", &B[i]);

	for (int i = 0; i < n; i++) {
		temp = A[i]; // 把 A 里的数拿出来暂存
		A[i] = B[i]; // 把 B 里的数放进 A
		B[i] = temp; // 把暂存的 A 的数放进 B
	}

	for (int i = 0; i < n; i++) 
		printf("%d ", A[i]);
	printf("\n");
	for (int i = 0; i < n; i++) 
		printf("%d ", B[i]);
	return 0;
}