#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int arr5[][5] = { 1,2,3 };
//	int arr6[][5] = { 1,2,3,4,5,6,7 };
//	int arr7[][5] = { {1,2}, {3,4}, {5,6} };
//	
//	printf("nihao");
//	return 0;
//}




//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//输?
//	scanf("%d %d", &a, &b);
//	//调?Max函数，结果放在r中
//	int r = Max(a, b);
//	//输出
//	printf("%d\n", r);
//	return 0;
//}





//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        for (int i = 0;i < n;i++)
//        {
//            for (int j = 0; j < n; j++)
//            {
//                // 【核心逻辑】找两条对角线的数学规律
//                // 主对角线：行下标和列下标相等时 (i == j)
//                // 副对角线：行下标和列下标相加等于 n-1 时 (i + j == n - 1)
//                if (i == j || j == n - i - 1)
//                {
//                    printf("*");
//                }
//                else
//                {
//                    printf(" ");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}



//
//int main() {
//    int n;
//    while (scanf("%d", &n) != EOF) {
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < n; j++) {
//                if (i == 0 || i == n - 1|| j == 0 || j == n - 1) {
//                    printf("*");
//                }
//                else {
//                    printf(" ");
//                }
//            }
//            printf("\n"); 
//        }
//    }
//    return 0;
//}




//int main() {
//    int a, b;
//    int arr[15][15] = {0};
//    scanf("%d%d", &a, &b);
//    
//    for (int i = 0; i < a; i++) 
//    {
//        for (int j = 0; j < b; j++) 
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    
//    for (int j = 0; j < b; j++) 
//    {   
//        for (int i = 0; i < a; i++) 
//        { 
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}



int main() {
    int n;
    scanf("%d", &n);

    // 直接开一个固定大小且安全的数组，并全部初始化为0
    int array[1005] = { 0 };

    // 我们只用 array[0] 到 array[n-1] 即可
    for (int i = 0; i < n; i++) {
        array[i] = i + 1; // 随便存点数据测试
    }

    return 0;
}