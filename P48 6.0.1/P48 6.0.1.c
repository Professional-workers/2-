//����һ��������6��������A,���Ǵ�A��ʼ������4�����֡���������е���������ɵ����ظ����ֵ���λ��
#include<stdio.h>
int main()
{
	int a;        //�û��������    ����2��Ҫ�õ�2 3 4 5
	scanf_s("%d",&a);
	int i, j, k;  //�����õ���
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