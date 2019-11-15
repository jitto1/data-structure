#include<stdio.h>
void main()
{
int limit,a[100],j,i,temp,b,c;
printf("enter the limit");
scanf("%d",&limit);
printf("enter the elements");
for(i=0;i<limit;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<limit;i++)
{
	for(j=0;j<(limit-i);j++)
	{
		if(a[j]>a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
}
printf(" the sorted array is");
for(i=0;i<limit;i++)
{
	printf("%d",a[i]);
}
}
