#include<stdio.h>
void main()
{
int limit,a[100],i,b,c;
printf("enter the limit");
scanf("%d",&limit);
printf("enter the elements");
for(i=0;i<limit;i++)
{
	scanf("%d",&a[i]);
}
printf("enter the element to be searched");
scanf("%d",&b);
for(i=0;i<limit;i++)
{
	if(a[i]==b)
		c=1;
}
if(c==1)
{
	printf("the given element is present");
}
else
{
	printf("the given element is not present");
}
}
