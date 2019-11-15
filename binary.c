#include<stdio.h>
void main()
{
int a[10],n,i,s,first,last,middle;
printf("enter the limit");
scanf("%d",&n);
printf("enter the integers ");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
printf("enter the element to be searched");
scanf("%d",&s);
first=0;
last=n-1;
middle=(first+last)/2;
while(first<=last)
{
	if(a[middle]>s)
	{
	last=middle-1;
	}
	else if (a[middle]<s)
	{	
	first=middle+1;
	}
	else
	{
	printf("the element is found at the position %d",middle);
	break;
}
middle=(first+last)/2;
}
if(first>last)
	printf("not present");
}

