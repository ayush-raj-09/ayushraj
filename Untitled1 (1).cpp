#include<stdio.h>
#include<conio.h>
int main()
{
	int x[3][3],y[3][3];
	int i,j;
	printf("enter 9 values in the first  matrix of size 3x3:\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			scanf("%d",&x[i][j]);
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					y[j][i]=x[i][j];
					
					
					printf("\n The matrix values are=\n");
					for(i=0;i<3;i++)
					{
						for(j=0;j<3;j++)
						{
							printf("\n");
							getch();
						}
					}
				}
			}
			}	}
}
