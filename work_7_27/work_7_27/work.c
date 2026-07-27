#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    printf("请输入数组的长度 n: ");
    scanf("%d", &n); // 假设你输入的是 5

    // 用最安全的方法开数组（比题目最大值多开一点空间，并初始化为0）
    int array[1005] = { 0 };

    // 往数组里放入数据（比如放入 1, 2, 3, 4, 5）
    for (int i = 0; i < n; i++) {
        array[i] = i + 1;
    }

    // 【重点在这里】现在我们把它打印出来看看
    printf("数组里的内容是：");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]); // 打印出来，中间加个空格
    }
    printf("\n"); // 最后换一行

    return 0;
}