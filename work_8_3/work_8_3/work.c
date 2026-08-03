#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdint.h>



//// ==========================================
//// 1. 递归实现求斐波那契数
//// ==========================================
//int fib_recursive(int n) {
//    // 递归结束条件（基准情况）
//    if (n == 1 || n == 2) {
//        return 1;
//    }
//    // 递归公式：第 n 项 = 第 n-1 项 + 第 n-2 项
//    return fib_recursive(n - 1) + fib_recursive(n - 2);
//}
//
//// ==========================================
//// 2. 非递归实现（迭代/循环）求斐波那契数
//// ==========================================
//int fib_iterative(int n) {
//    if (n == 1 || n == 2) {
//        return 1;
//    }
//
//    int a = 1; // 第 n-2 个数
//    int b = 1; // 第 n-1 个数
//    int c = 0; // 当前第 n 个数
//
//    // 从第 3 个数开始向后推导
//    for (int i = 3; i <= n; i++) {
//        c = a + b;  // 当前项等于前两项之和
//        a = b;      // 往前挪一步
//        b = c;      // 往前挪一步
//    }
//    return c;
//}
//
//// ==========================================
//// 3. 主函数测试
//// ==========================================
//int main() {
//    int n;
//    // 多组输入处理
//    while (scanf("%d", &n) != EOF) {
//        // 如果题目要求你分别实现，OJ系统一般没有严格规定你必须输出哪个
//        // 这里我们演示用效率更高的“非递归”来计算并输出结果
//
//        // 方法A：调用非递归版本
//        //printf("%d\n", fib_iterative(n));
//
//        // 方法B：递归版本
//         printf("%d\n", fib_recursive(n));
//    }
//    return 0;
//}



//


//// 递归函数：求 n 的 k 次方
//// 注意：为了应对 k 很大时结果溢出，返回值使用了 long long 类型
//long long power_recursive(int n, int k) {
//    // 1. 基准情况（递归终止条件）
//    if (k == 0) {
//        return 1; // 任何数的 0 次方都是 1
//    }
//    // 2. 递归公式：n^k = n * n^(k-1)
//    return n * power_recursive(n, k - 1);
//}
//
//int main() {
//    int n, k;
//    // 处理多组输入，可以直接在考试评测系统里通用
//    while (scanf("%d %d", &n, &k) != EOF) {
//        printf("%lld\n", power_recursive(n, k));
//    }
//    return 0;
//}





//// 递归函数：计算各位数字之和
//int DigitSum(int n) {
//    // 1. 基准情况：如果 n 减到 0 了，说明没有数字了，返回 0
//    if (n == 0) {
//        return 0;
//    }
//    // 2. 递归公式：当前最后一位数字 + 剩下数字的各位和
//    return (n % 10) + DigitSum(n / 10);
//}
//
//int main() {
//    int n;
//    // 如果判题系统要求多组输入，可以保留 while 循环
//    while (scanf("%d", &n) != EOF) {
//        printf("%d\n", DigitSum(n));
//    }
//    return 0;
//}






//// ==========================================
//// 1. 递归实现求 n 的阶乘
//// ==========================================
//long long factorial_recursive(int n) {
//    // 基准情况（递归终止条件）：0! 和 1! 都等于 1
//    if (n == 0 || n == 1) {
//        return 1;
//    }
//    // 递归公式：n! = n * (n-1)!
//    return n * factorial_recursive(n - 1);
//}
//
//// ==========================================
//// 2. 非递归（循环）实现求 n 的阶乘
//// ==========================================
//long long factorial_iterative(int n) {
//    long long result = 1;
//    // 从 1 循环乘到 n
//    for (int i = 1; i <= n; i++) {
//        result *= i;
//    }
//    return result;
//}
//
//// ==========================================
//// 3. 主函数
//// ==========================================
//int main() {
//    int n;
//    // 处理多组输入（如果评测系统要求多组，用 while；如果只读一个，也能正常执行）
//    while (scanf("%d", &n) != EOF) {
//        printf("递归求解: %lld\n", factorial_recursive(n));
//        printf("非递归求解: %lld\n", factorial_iterative(n));
//    }
//    return 0;
//}






// 递归函数：打印整数的每一位
void print_digits(int n) {
    // 1. 处理负数的情况（加上负号）
    if (n < 0) {
        printf("-");
        n = -n;
    }

    // 2. 基准情况（终止条件）：如果 n 只有一位数 (0~9)，直接打印
    if (n < 10) {
        printf("%d ", n);
        return;
    }

    // 3. 递归逻辑：先处理去掉最后一位剩下的数字
    print_digits(n / 10);

    // 4. 回溯打印：递归回来之后，再打印最后这一位
    printf("%d ", n % 10);
}

int main() {
    int n;
    // 多组输入，适合各类 OJ 平台
    while (scanf("%d", &n) != EOF) {
        print_digits(n);
        printf("\n"); // 打印完一个数字后换行
    }
    return 0;
}