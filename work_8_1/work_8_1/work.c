#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdint.h>

//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水（编程实现）。


//int main() {
//    int money = 20; // 初始钱数
//    int total = money; // 喝到的总瓶数
//    int empty = money; // 当前空瓶数
//
//    while (empty >= 2) {
//        int new_bottles = empty / 2; // 用空瓶换来的新汽水瓶数
//        total += new_bottles;        // 喝掉这些新汽水
//        empty = empty % 2 + new_bottles; // 剩余空瓶 = (之前没换完的) + (喝完新汽水的空瓶)
//    }
//
//    printf("总共可以喝 %d 瓶汽水\n", total);
//    return 0;
//}




//
//int main() {
//    int n = 7; // 菱形一半的高度（包含最中间那一行）
//
//    // 1. 打印上半部分（共 7 行，包含最中间最宽的那一行）
//    for (int i = 1; i <= n; i++) {
//        // 打印前导空格：每行空格数 = 总高度n - 当前行数i
//        for (int j = 1; j <= n - i; j++) {
//            printf(" ");
//        }
//        // 打印星号：第i行星号数 = 2 * i - 1
//        for (int k = 1; k <= 2 * i - 1; k++) {
//            printf("*");
//        }
//        printf("\n"); // 打印完一行后换行
//    }
//
//    // 2. 打印下半部分（共 6 行，倒序重复上半部分的规律）
//    for (int i = n - 1; i >= 1; i--) {
//        // 打印前导空格
//        for (int j = 1; j <= n - i; j++) {
//            printf(" ");
//        }
//        // 打印星号
//        for (int k = 1; k <= 2 * i - 1; k++) {
//            printf("*");
//        }
//        printf("\n"); // 打印完一行后换行
//    }
//
//    return 0;
//}




//int main() {
//    int rows = 13;       // 总行数
//    int mid = 7;         // 正中间的行号
//
//    for (int i = 1; i <= rows; i++) {
//        // 距离中间行号的偏移量
//        int offset = abs(mid - i);
//
//        // 打印空格
//        for (int j = 0; j < offset; j++) printf(" ");
//
//        // 打印星号
//        for (int k = 0; k < rows - 2 * offset; k++) printf("*");
//
//        printf("\n");
//    }
//    return 0;
//}




//int main() {
//    // 用两个嵌套循环，外层控制行数，内层控制打印空格和星号
//    for (int i = 1; i <= 7; i++) {
//        // 1. 先打印空格
//        for (int j = 1; j <= 7 - i; j++) {
//            printf(" ");
//        }
//        // 2. 再打印星号
//        for (int k = 1; k <= 2 * i - 1; k++) {
//            printf("*");
//        }
//        // 3. 打印完这一行，要换行！
//        printf("\n");
//    }
//    // 只要让 i 从第 6 行倒着变回第 1 行就行！
//    for (int i = 6; i >= 1; i--) {
//        // 里面的空格和星号规律和上面一模一样
//        for (int j = 1; j <= 7 - i; j++) { printf(" "); }
//        for (int k = 1; k <= 2 * i - 1; k++) { printf("*"); }
//        printf("\n");
//    }
//}



//求出0～100000之间的所有“水仙花数”并输出。
// “水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如:153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。


//int main() {
//	int num, originalNum, remainder, n = 0;
//	int result = 0;
//	printf("水仙花数有：\n");
//	for (num = 0; num <= 100000; num++) {
//		originalNum = num;
//		n = 0;
//		result = 0;
//		// 计算数字的位数
//		while (originalNum != 0) {
//			originalNum /= 10;
//			++n;
//		}
//		originalNum = num;
//		// 计算各位数字的n次方之和
//		while (originalNum != 0) {
//			remainder = originalNum % 10;
//			result += pow(remainder, n);
//			originalNum /= 10;
//		}
//		// 检查是否为水仙花数
//		if (result == num) {
//			printf("%d\n", num);
//		}
//	}
//	return 0;
//}





// 自己实现一个整数幂函数
// 原因：如果用数学库中的 pow()，它返回的是浮点数，判断相等时容易产生微小的精度误差
//int power(int base, int exp) {
//    int result = 1;
//    for (int i = 0; i < exp; i++) {
//        result *= base;
//    }
//    return result;
//}
//
//int main() {
//    // 题目要求 0 ~ 100000，包含两端
//    for (int i = 0; i <= 100000; i++) 
//    {
//        // 1. 计算当前数字 i 是几位数（即 n 的值）
//        int temp = i;
//        int n = 0;
//
//        if (i == 0) {
//            n = 1; // 特别注意：0 也是一位数
//        }
//        else {
//            while (temp > 0) {
//                n++;
//                temp /= 10;
//            }
//        }
//
//        // 2. 将 i 的每一位拆开，计算它们的 n 次幂之和
//        int sum = 0;
//        temp = i;
//        while (temp > 0) {
//            int digit = temp % 10;      // 取最后一位数字
//            sum += power(digit, n);     // 加上该数字的 n 次方
//            temp /= 10;                 // 去掉最后一位
//        }
//
//        // 3. 判断是否满足水仙花数的条件
//        if (sum == i) {
//            printf("%d\n", i);
//        }
//    }
//    
//    return 0;
//}




//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，例如：2+22+222+2222+22222


int main()
{
	int a = 0; 
	while (scanf("%d", &a) != EOF)
	{
		int sum = 0;
		int term = 0;
		for (int i = 1; i <= 5; i++)
		{
			term = term * 10 + a; // 构造当前项，例如：2, 22, 222, ...
			sum += term;          // 累加到总和
		}
		printf("前5项之和为: %d\n", sum);
	}
	return 0;
}