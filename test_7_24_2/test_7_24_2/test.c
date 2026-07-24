#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	srand(10);
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	return 0;
//}



int main()
{
	//使?time函数的返回值设置种?
	//因为srand的参数是unsigned int类型，我们将time函数的返回值强制类型转换
	srand((unsigned int)time(NULL));
	printf("%d\n", rand());
	printf("%d\n", rand());
	printf("%d\n", rand());
	printf("%d\n", rand());
	printf("%d\n", rand());
	return 0;
}