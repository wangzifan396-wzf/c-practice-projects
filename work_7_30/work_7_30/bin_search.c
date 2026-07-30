#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdint.h>

int bin_search(int arr[], int left, int right, int key)
{
    // left 是左边界，right 是右边界，只要左边界小于等于右边界，就继续找
    while (left <= right)
    {
        // 计算中间下标 (使用 left + (right - left) / 2 可以防止数据过大时 left+right 溢出)
        int mid = left + (right - left) / 2;

        if (arr[mid] == key) {
            return mid; // 找到了，返回对应的数组下标
        }
        else if (arr[mid] > key) {
            right = mid - 1; // 中间值比 key 大，说明目标在左侧，更新右边界
        }
        else {
            left = mid + 1;  // 中间值比 key 小，说明目标在右侧，更新左边界
        }
    }

    return -1; // 循环结束依然没找到，返回 -1
}