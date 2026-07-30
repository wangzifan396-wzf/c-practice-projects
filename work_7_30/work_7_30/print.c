#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdint.h>

void print(int arr[], int sz) {
    for (int i = 0; i < sz; i++) {
        printf("%d ", arr[i]); // 打印元素，并用空格隔开
    }
    printf("\n"); // 打印完所有元素后换行
}