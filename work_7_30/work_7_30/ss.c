#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdint.h>

int is_prime(int n) {
    // 素数必须大于1
    if (n <= 1) {
        return 0;
    }

    // 优化算法：只需要从 2 判断到 n 的平方根即可
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // 一旦发现有因数，立刻返回 0（不是素数），后面的都不用算了
        }
    }

    return 1; // 如果上面的循环全跑完了都没有找到因数，说明它是素数，返回 1
}