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
	for(j=i+1;j<limit;j++)
	{
		if(a[i]>a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
}
printf(" the sorted array is");
for(i=0;i<limit;i++)
{
	printf("%d",a[i]);
}
}
