//给定一个不超过6的正整数A,考虑从A开始的连续4个数字。请输出所有的由它们组成的无重复数字的三位数
#include<stdio.h>
int main()
{
	int a;        //用户输入的数    输入2，要得到2 3 4 5
	scanf_s("%d",&a);
	int i, j, k;  //存入获得的数
	int cnu = 0;
	for(i = a; i <=a + 3; i++)     // 
	{
		for (j = a; j <= a + 3; j++)
		{
			for (k = a; k <= a + 3; k++)
			{
				if (i != j)
				{
					if (i != k)
					{
						if (j != k)
						{
							cnu++;
							printf("%d%d%d", i, j, k);
							if (cnu == 6)
							{
								printf("\n");
								cnu = 0;
							}
							else
							{
								printf(" ");
							}
						}
					}
				}
			}
		}
	}
	return 0;
}