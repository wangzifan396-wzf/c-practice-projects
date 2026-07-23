#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	if (num1 > num2)
//	{
//		printf("%d is greater than %d\n", num1, num2);
//	}
//	else if (num1 < num2)
//	{
//		printf("%d is less than %d\n", num1, num2);
//	}
//	else
//	{
//		printf("%d is equal to %d\n", num1, num2);
//	}
//	return 0;
//}


//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int max = 0;
//	scanf("%d%d", &num1, &num2);
//	if (num1 > num2)
//		max = num1;
//	else
//		max = num2;
//	printf("%d", max);
//	return 0;
//}


//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int max = 0;
//	scanf("%d%d", &num1, &num2);
//	max = (num1 > num2 ? num1 : num2);
//	printf("%d", max);
//	return 0;
//}




//int main()
//{
//	int flag = 0;
//	if (!flag)
//	{
//		printf("do something\n");
//	}
//	return 0;
//}



//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month >= 3 && month <= 5)
//	{
//		printf("春季\n");
//	}
//	return 0;
//}


//3


//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if(year%4 ==0 && year%100 != 0 || year%400 == 0)
//	{
//		printf("闰年\n");
//	}
//	else
//	{
//		printf("平年\n");
//	}
//	return 0;
//}

//
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (year % 4 == 0 && year % 100 != 0)
//		printf("是闰年\n");
//	else if (year % 400 == 0)
//		printf("是闰年\n");
//	return 0;
//}



//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}


//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}


//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ || ++b || d++;
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}


//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ || ++b || d++;
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n % 3 == 0)
//		printf("整除，余数为0\n");
//	else if (n % 3 == 1)
//		printf("余数是1\n");
//	else
//		printf("余数是2\n");
//	return 0;
//}





//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	switch (n % 3)
//	{
//	case 0:
//		printf("整除，余数为0\n");
//		break;
//	case 1:
//		printf("余数是1\n");
//		break;
//	case 2:
//		printf("余数是2\n");
//		break;
//	}
//	return 0;
//}




//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//		case 1:
//			printf("星期?\n");
//			break;
//		case 2:
//			printf("星期?\n");
//			break;
//		case 3:
//			printf("星期三\n");
//			break;
//		case 4:
//			printf("星期四\n");
//			break;
//		case 5:
//			printf("星期五\n");
//			break;
//		case 6:
//			printf("星期六\n");
//			break;
//		case 7:
//			printf("星期天\n");
//			break;
//	}
//	return 0;
//}



//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//		case 1:
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//			printf("早??，早?魂\n");
//			break;
//		case 6:
//		case 7:
//			printf("周末！关掉闹钟，睡到11点\n");
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//	}
//	return 0;
//}



//
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	while (n > 0)
//	{
//		printf("%d ", n % 10);
//		n /= 10;
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//存放输?的数字
//	int i = 2; // 从最?的正偶数开始
//	while (i <= n)
//	{
//		printf("%d ", i);
//		i += 2; // 每次跳2，保证全是偶数
//	}
//	printf("\n");
//	return 0;
//}


//int main()
//{
//	int boss_hp = 1000; //?量值
//	int attack = 150; //每次攻击掉?
//	while (boss_hp > 0)
//	{
//		//防?最后?次攻击，?量变成负值
//		int real_attack = (boss_hp < attack) ? boss_hp : attack;
//		printf("你对Boss发动攻击，造成 %d 点伤害！\n", real_attack);
//		boss_hp -= real_attack;
//		printf("Boss剩余?量：%d\n", boss_hp);
//	}
//	printf("Boss倒下了！掉落传说装备！\n");
//	return 0;
//}




int main()
{
	int i = 1;
	for (i = 1; i <= 10; i++)
	{
		printf("%d ", i);
	}
	return 0;
}