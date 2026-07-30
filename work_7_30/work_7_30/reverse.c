#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdint.h>

void reverse(int arr[], int sz) 
{
    int left = 0;        // 左指针，指向数组开头
    int right = sz - 1;  // 右指针，指向数组末尾

    while (left < right) {
        // 交换左右两个位置的值
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        // 指针向中间靠拢
        left++;
        right--;
    }
}