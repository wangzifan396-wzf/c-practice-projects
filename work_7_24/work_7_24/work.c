#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>




//计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值，打印出结果


//int main()
//{
//    double b = 0.0; // 浮点型
//    for (int a = 1; a <= 100; a++)
//    {
//        if (a % 2 == 0) // 偶数项，减去
//            b -= 1.0 / a;
//        else            // 奇数项，加上
//            b += 1.0 / a;
//    }
//    printf("%f\n", b); 
//    return 0;
//}



//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	for (a = 101; a <= 200; a += 2)
//	{
//		int c = 1;
//		for (b = 2; b * b <= a; b++)
//		{
//			if (a % b == 0)
//			{
//				c = 0;
//				break;
//			}
//		}
//			if (c == 1)
//				printf("%d ", a);
//		
//	}
//	
//	return 0;
//}






int main() 
{
    int a, b, min;
    scanf("%d %d", &a, &b);
    if (a < b) 
    {
        min = a; 
    }
    else 
    {
        min = b; 
    }
    for (int i = min; i >= 1; i--) 
    { 
        if (a % i == 0 && b % i == 0)
        {
            printf("%d", i);
            break;
        }
    }
    return 0;
}