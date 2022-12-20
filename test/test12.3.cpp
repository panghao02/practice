#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include<Windows.h>
#include<time.h>
void menu()
{
	printf("********************\n");
	printf("*****  1.play  *****\n");
	printf("*****  0.exit  *****\n");
	printf("********************\n");
}
void game()
{
	int ret = rand() % 100 + 1;
	//printf("%d\n", ret);
	int guess;
	while (1)
	{
		printf("请猜数字\n");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("small\n");
		}
		else if (guess > ret)
		{
			printf("big\n");
		}
		else
		{
			printf("right\n");
			break;
		}
	}
}
int main()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入：");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			//printf("haha");
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);
	/*char arr1[] = "我爱中国人民解放军陆军";
	char arr2[] = "                      ";
	int left = 0;
	int left1 = 1;
	int right = strlen(arr1) - 1;
	int right2 = strlen(arr1) - 2;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[left1] = arr1[left1];
		arr2[right] = arr1[right];
		arr2[right2] = arr1[right2];
		printf("%s", arr2);
		Sleep(1000);
		system("cls");
		left++;
		left++;
		left1++;
		left1++;
		right--;
		right--;
		right2--;
		right2--;
	}
	printf("%s\n", arr2);*/
	/*int arr[] = { 1,2,3,4,5,6,7,9,11,19 };
	int k = 11;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了，下标是：%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到了\n");
	}*/
	return 0;
}	/*	//int n = 0;
	//int b = 0;
	//int i = 1;
	//int a = 1;
	//	for (i = 1; i <= 3; i++)
	//	{
	//		a = a * i;
	//		b = b + a;
	//	}
	//
	//printf("%d",b);
	int i= 1;
	do
	{
		printf("%d", i);
		i++;
	} while (i <= 10);
*/
//int i = 1;
	//for (i; i <= 10; i++)
	//{
	//	printf("%d\n", i);

	//}
	/*int i = 1;
	while (i <= 10)
	{
		printf("%d ", i);
		i++;
	}*/

	/*int age = 0;
	scanf("%d", &age);
	if (age >= 18)
	printf("成年\n");
//	return 0;*/
//}
//struct stu
//{
//	char name[20];
//	int  age;
//	double score;
//};
//int main()
//{ 
//	struct stu a = { "张三",18,90.23 };
//	printf("1:%s %d %lf\n", a.name, a.age, a.score);
//	struct stu* pa = &a;
//	printf("2:%s %d %lf", pa->name, pa->age, pa->score);
		/*short a = 65537;
	short b = ~a;
	printf("%d\n", b);*/


	/*int  num1,num2;
	scanf(  "%d %d", &num1, & num2);
	if (num1 > num2)
		printf("较大值是：%d\n", num1);
	else
		printf("较大值是：%d\n", num2);*/

	//char arr1[] = "abc";
	//char arr2[] = { 'a','b','c',0 };
	//printf("%d\n",strlen(arr1));
	//printf("%d\n",strlen(arr2));/*printf("%s\n", arr1);
	//printf("%s\n", arr2);*/
//	//		/*printf("hello world\n");*/
//return 0; }
