#define _CRT_SECURE_NO_WARNINGS

// 测量字符串长度strlen
// 
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	printf("%zu\n", strlen("c:\add\test\007\vip.c"));
//	return 0;
//}

// 标准输入输出
// 
//#include <stdio.h>
//int main()
//{
//	char c = 0;
//	scanf("%c", &c);
//	printf("%c", c);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char c = 0;
//	scanf("%c", &c);
//	printf("%c\n", c);
//
//	printf("%s\n", "Hello World!");
//	printf("change world\n");
//	return 0;
//}

// 判断奇偶数
// 
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("%d是奇数!\n", num);
//	else
//		printf("%d是偶数！\n", num);
//	return 0;
//}

//条件操作符比大小
// 
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	scanf(" %d %d", &a, &b);
//	max = (a > b ? a : b);
//	printf("最大值是%d！", max);
//	return 0;
//}

//判断闰年
// 
//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		printf("%d是闰年！", year);
//	else
//		printf("%d不是闰年！", year);
//	return 0;
//}

//switch语句练习
// 
//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("今天是工作日，星期%d!", day);
//		break;
//	case 6:
//	case 7:
//		printf("今天是休息日，星期%d!", day);
//		break;
//	default:
//		printf("输入错误！");
//		break;
//	}
//	return 0;
//}

//while循环逆序打印数字
// 
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	while (num > 0)
//	{
//		printf("%d", num % 10);
//		num /= 10;
//	}
//	return 0;
//}

//计算1-100之间3的倍数之和
// 
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1;i <= 100;i++)
//	{
//		if (i % 3 == 0)
//			sum += i;
//	}
//	printf("总和是：%d", sum);
//	return 0;
//}

//银行5年本息金额计算
// 
//#include<stdio.h>
//int main()
//{
//	double money = 10000;
//	int year = 0;
//	for (year = 1;year <= 5;year++)
//	{
//		money *= 1.03;
//		printf("第%d年的总金额是%.2f!\n", year, money);
//	}
//	return 0;
//}

//continue语句的理解
// 
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}

//找100-200之间的素数
// 
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		int flag = 1;		//假设i是素数
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}

//猜数字小游戏
// 
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//void menu()
//{
//	printf("*****************\n");
//	printf("**** 1.play *****\n");
//	printf("**** 0.exit *****\n");
//	printf("*****************\n");
//}
//
//void game()
//{
//	int r = rand() % 100 + 1;
//	int guess = 0;
//	while (1)
//	{
//		printf("请输入你猜的数字：>>>");
//		scanf("%d", &guess);
//		if (guess < r)
//			printf("猜小了！\n");
//		else if (guess > r)
//			printf("猜大了！\n");
//		else
//		{
//			printf("恭喜你猜对了！\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请输入你的选择：>>>");
//		scanf("%d", &input);
//		switch (input)
//		{
//			case 1:
//			//进行游戏
//				game();
//				break;
//			case 0:
//			//退出游戏
//				printf("游戏结束\n");
//				break;
//			default:
//				printf("输入错误，请重新输入！\n");
//				break;
//		}
//	} while (input);
//	return 0;
//}

//数组下标访问
// 
//#include<stdio.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n",arr[6]);
//	arr[6] = 70;
//	printf("%d\n",arr[6]);
//	return 0;
//}

//使用数组，流水打字
// 
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr1[] = "welcome to chengdu!!!";
//	char arr2[] = "#####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	printf("%s\n", arr2);
//	while (left <= right)
//	{
//		Sleep(1000);
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//	}
//	return 0;
//}

//二分查找
// 
//#include<stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int mid = 0;
//	int set_num = 0;
//	printf("请输入你要寻找的数字：");
//	scanf("%d", &set_num);
//
//	int find_flag = 0;		//增加找到状态标识
//
//	while (right >= left)
//	{
//		mid = left + (right - left) / 2;
//		if (arr[mid] < set_num)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > set_num)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是%d!", mid);
//			find_flag = 1;		//找到后修改状态标识
//			break;
//		}
//	}
//
//	if (find_flag == 00)
//	{
//		printf("没有找到这个数字！\n");
//	}
//
//	return 0;
//}
