#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int a = 10;
//	int b = ++a; //++的操作数是a，是放在a的前?的，就是前置++
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = a++; //++的操作数是a，是放在a的前?的，就是前置++
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}


//int main()
//{
//	char c = 100;
//	short s = 2000;
//	int i = c + s;
//	printf("%d", i);
//	return 0;
//}
//



//int main()
//{
//	int i = 1;
//	int r = (++i) + (++i) + (++i);
//	printf("%d\n", r);
//	return 0;
//}



int main()
{
	int num = 0;
	scanf("%d", &num);
	if (num % 2 == 1)
		printf("%d 奇数\n", num);
	else
		printf("%d 偶数\n", num);
	return 0;
}
