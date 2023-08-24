#include<stdio.h>
int find_transpose(int r,int c,int array[r][c])
{
    int i,j,transpose[c][r];
    for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			if(i==j)
			{
				transpose[i][j]=array[i][j];
			}
			else
			{
				transpose[i][j]=array[j][i];
			}
		}
	}
	printf("\nTranspose:\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d",transpose[i][j]);
			printf("\t");
		}
		printf("\n");
	}
}
int main()
{
	int r,c,i,j;
	printf("Enter the number of rows:");
	scanf("%d",&r);
	printf("Enter the number of columns:");
	scanf("%d",&c);
	int array[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&array[i][j]);
		}
	}
	printf("\nArray:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",array[i][j]);
			printf("\t");
		}
		printf("\n");
	}
    find_transpose(r,c,array);


}

