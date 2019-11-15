#include<stdio.h>
int top[10],boundary[10],stack[50],d,size=10;
void push(int i,int data)
{
	if(top[i]==boundary[i+1])
	{
		printf("overflow");
	}
	else
	{
		stack[++top[i]]=data;
	}
}
int pop(int i)
{
	if(top[i]==boundary[i])
	{
		printf("underflow");
	}
	else
	{
		d=stack[top[i]];
		top[i]--;
	}
	return d;
}
void main()
{
int ch,d1,n,i;
int k;
printf("enter the no of divisions");
scanf("%d",&n);
top[0]=boundary[0]=-1;
for(i=1;i<=n;i++)
{
	top[i]=boundary[i]=(size-1)*i/n;
}
while(1)
{
printf("Enter your choice: 1.PUSH 2.POP : ");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("Enter the data to insert\n");
      scanf("%d",&d1);
	printf("enter the value of i");
	scanf("%d",&i);
      push(i,d1);
      break;
case 2:
	printf("enter the value of i");
	scanf("%d",&i);

	k=pop(i);
	printf("poped value is %d",k);
      break;
}
printf("\n\n");
}
}
