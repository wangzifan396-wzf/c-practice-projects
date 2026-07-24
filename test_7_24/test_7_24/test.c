#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int cnt = 0;
//	do
//	{
//		cnt++;
//		n = n / 10;
//	} while (n);
//	printf("%d\n", cnt);
//	return 0;
//}




//int main()
//{
//	int n = 0;
//	do
//	{
//		scanf("%d", &n);
//		if (n <= 0)
//			printf("\a输?错误，请输?正整数\n");
//	} while (n <= 0);
//	int cnt = 0;
//	do
//	{
//		cnt++;
//		n = n / 10;
//	} while (n);
//	printf("%d\n", cnt);
//	return 0;
//}


//
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;//当i等于5后，就执?break，循环就终?了
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}


int main()
{
	int i = 0;
	//循环产?100~200的数字
	for (i = 100; i <= 200; i++)
	{
		//判断i是否为素数
		//循环产?2~i-1之间的数字
		int j = 0;
		int flag = 1;//假设i是素数
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			printf("%d ", i);
	}
	return 0;
}