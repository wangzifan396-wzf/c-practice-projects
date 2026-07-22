#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int minutes = 0; // 回复间隔
//	scanf("%d", &minutes);
//	if (minutes <= 1)
//		printf("秒回！有戏\n");
//	else if (minutes <= 10)
//		printf("还?，ta可能在忙\n");
//	else if (minutes <= 60)
//		printf("ta可能没看到信息……我去打游戏了\n");
//	else
//		printf("别等了，代码不?吗？\n");
//	return 0;
//}

//
//int main()
//{
//	float total = 0;
//	scanf("%f", &total);
//	if (total >= 50)
//		printf("减15元，实付：%.2f\n", total - 15);
//	else if (total >= 30)
//		printf("减8元，实付：%.2f\n", total - 8);
//	else if (total >= 20)
//		printf("减5元，实付：%.2f\n", total - 5);
//	else
//		printf("不满?满减，去隔壁拼个单吧。\n");
//	return 0;
//}


int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d %d", a / b, a % b);

    return 0;
}