#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int year = 0;
//		for (year = 1000; year <= 2000; year++)
//		{
//			if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
//				printf("%d，", year);
//		}
//	return 0;
//}



//int main()
//{
//	int num = 0;
//	int num1 = 0;
//	for (num = 1; num <= 100; num++)
//		if (num % 10 == 9)
//			++num1;
//	printf("%d", num1);
//	return 0;
//}




//int main() 
//{
//    int num = 0;
//    int max = 0;
//
//    printf("请输入第1个整数：");
//    scanf("%d", &max);
//
//    for (int i = 2; i <= 10; i++) 
//    {
//        printf("请输入第%d个整数：", i);
//        scanf("%d", &num);
//
//        if (num > max) 
//            max = num;
//    }
//
//    printf("这10个整数中的最大值是：%d\n", max);
//    return 0;
//}



//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (a = 1; a <= 9; a++)
//	{
//		for (b = 1; b <= a; b++)
//			printf("%d*%d=%-2d ", b, a, a * b);
//		printf("\n");
//	}
//}



//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a >= 140)
//		printf("Genius");
//	return 0;
//}


//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	if (a < b)
//		printf("%d<%d", a, b);
//	else if (a > b)
//		printf("%d>%d", a, b);
//	else
//		printf("%d=%d", a, b);
//	return 0;
//}


//int main()
//{
//	int M = 0;
//	scanf("%d", &M);
//	if (M >= 1 && M <= 100000)
//	{
//		if (M % 5 == 0)
//			printf("YES");
//		else
//			printf("NO");
//	}
//	return 0;
//}


//int main() {
//    int num = 0;
//    int i = 0;
//    scanf("%d", &num);
//    if (num >= 1 && num <= 100)
//        for (i = 1;i <= num; i++)
//            printf("*");
//    printf("\n");
//
//    return 0;
//}



int main() {
    int num = 0;
    int i = 0;
    while (~scanf("%d", &num))
    {
        if (num >= 1 && num <= 100)
            for (i = 1;i <= num; i++)
                printf("*");
        printf("\n");
    }
    return 0;
}