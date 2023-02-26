 #define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//计算等电梯时间
void time()
{
	int a = 0;
	int t = 0;
	scanf("%d", &a);
	t = (a / 12 + 1) * 2 + (a / 12) * 2;
	printf("%d", t);
}

//找最大数
void find()
{
	int a = 0;
	int i = 0;
	int max = 0;
	int min = 0;
	for (i = 0; i < 4; i++)
	{
		scanf("%d", &a);
		max = max > a ? max : a;
	}
	printf("%d ", max);	
}



//成绩定级
void rank()
{
	int g = 0;
	scanf("%d", &g);
	if (g >= 90 && g <= 100)
		printf("A");
	else if (g >= 80 && g <= 89)
		printf("B");
	else if (g >= 70 && g <= 79)
		printf("C");
	else if (g >= 60 && g <= 69)
		printf("D");
	else if (g <= 59 && g >= 0)
		printf("E");
	else
		printf("F");
}


//转换	ASCII
void ASCII()
{
	printf("%c%c%c%c%c%c%c%c%c%c%c%c", 73, 32, 99, 97, 110, 32,
		100, 111, 32, 105, 116, 33);
}


//统计输入的正负数
void calc()
{
	int a = 0;
	int i = 0;
	int p = 0;
	int n = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a);
	
	if (a > 0)
		p++;
	else
		n++;
	}
	printf("positive:%d\n", p);
	printf("negative:%d", n);
}



//计算最高最低分差
void num()
{
	int a = 0;
	int i = 0;
	int n = 0;
	int mul = 0;
	scanf("%d", &n);
	int max = 0;
	int min = 100;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a);
		max = max > a ? max : a;
		min = min < a ? min : a;
	}
	mul = max - min;
	printf("%d", mul);
}
int main()
{
	//time();
	//find();
	//rank();
	//ASCII();
	//calc();
	num();
	return 0;
}
