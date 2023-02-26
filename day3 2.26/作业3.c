#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//输出两数中较大的数字
//void print()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = { a > b ? a : b };
//	printf("%d", m);
//	return 0;
//}

//比较两数的大小
//void cmp()
//{
//int i = 0;
//int input[2];
//do 
//{
//	scanf("%d %d", &input[0], &input[1]);
//	if (input[0] > input[1])
//		printf("%d>%d\n", input[0], input[1]);
//	else if (input[0] == input[1])
//		printf("%d=%d\n", input[0], input[1]);
//	else
//		printf("%d<%d\n", input[0], input[1]);
//} while (input != EOF);
//return 0;
//}

//输出成绩
//void score()
//{
//	int i = 0;
//	int m = 0;
//	int grade[10];
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d ",&grade[i]);
//	}
//	for (m = 0; m < 10; m++)
//	{
//		printf("%d ", grade[m]);
//	}
//}

//判断奇偶数  !!!
//void judge()
//{
//	int a=0;
//	while ((scanf("%d\n", &a) != EOF))   !!!!!
//	{
//		printf(a % 2 == 0 ? "Even\n" : "Odd\n");
//	} 
//
//}


void draw()
{
	int a = 0;
	int i = 0;
	while ((scanf("%d\n", &a) != EOF))
	{
		for (i = 0; i < a; i++)
		{
			printf("*");
		}
		printf(" \n ");
	}
}

void ave()
{
	int a = 0;
	int c = 0;
	float b = 0.0f;
	int i = 0;
	int sum = 0;
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a);
		sum += a;
	}
	 b= (float)sum / 5;
	printf("%.1f", b);
}
int main()
{
	//print();
	//cmp();
	//score();
	//judge();
	//draw();
	ave();
	return 0;
}