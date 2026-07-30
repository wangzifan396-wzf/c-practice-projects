#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdint.h>

#include "work.h"

//int main() {
//	int n = 0;
//	int z = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		z = cf(n);
//	}
//	return 0;
//}



//int main()
//{
//	int y = 0;
//	int r = 0;
//	while (scanf("%d", &y) != EOF)
//	{ 
//		int r = is_leap_year(y);
//		if (r == 1)
//			printf("闰年\n");
//		else
//			printf("非闰年\n");
//	}
//	
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int r = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		r = is_prime(n);
//		if (r == 1)
//			printf("是素数\n");
//		else
//			printf("不是素数\n");
//	}
//	return 0;
//}



//int main()
//{
//    int i = 0;
//    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    int sz = sizeof(arr) / sizeof(arr[0]); 
//   
//    print(arr, sz);
//
//    reverse(arr, sz);
//    print(arr, sz);
//
//    init(arr, sz);
//    print(arr, sz);  
//}




int main() 
{
    int arr[] = { 1, 3, 5, 7, 9, 11, 13, 17,19,21,23 };
    int sz = sizeof(arr) / sizeof(arr[0]); 
    int key = 0;
    while (scanf("%d", &key) != EOF)
    {
        int z = bin_search(arr, 0, sz - 1, key);
        if (z != -1) 
        {
            printf("找到了！数字 %d 在数组的下标为 %d\n", key, z);
        }
        else
        {
            printf("没找到数字 %d\n", key);
        }
    }
    return 0;
}