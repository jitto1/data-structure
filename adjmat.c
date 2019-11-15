#include<stdio.h>
void main()
{
	int mat[10][10],n,ne=0,i=0,j=0,start=0,end=0;
	printf("ENter the no of node");
	scanf("%d",&n);
	printf("Enter the no of edges");
	scanf("%d",&ne);
	for(i = 0; i < ne; i++)
	{
		for(j = 0; j < ne; j++)
		{
		        mat[i][j] = 0;
		}
	}
	for(i=0;i<ne;i++)
	{
		printf("Enter %d th edge",i);
		printf(" Start");
		scanf("%d",&start);
		printf(" end");
		scanf("%d",&end);
		mat[start][end]=1;
		mat[end][start]=1;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%4d", mat[i][j]);
		}
	printf("\n");
	}
}


