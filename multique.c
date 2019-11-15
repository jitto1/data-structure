#include<stdio.h>
int front[10],rear[10],boundary[10],que[50],d,size=10;
void enque(int i,int data)
{
	if(rear[i]==boundary[i+1])
	{
		printf("overflow");
	}
	else
	{
		if(rear[i]==boundary[i])
			front[i]++;
			que[++rear[i]]=data;
	}
}
int deque(int i)
{
	if(front[i]==boundary[i])
	{
		printf("empty");
	}
	else
	{
		d=que[front[i]];
		if(front[i]==rear[i])
			front[i]=rear[i]=boundary[i];
		else
			front[i]++;
	}
	return d;
}
void main()
{
int ch,d1,n,i;
int k;
printf("enter the no of divisions");
scanf("%d",&n);
front[0]=boundary[0]=-1;
for(i=1;i<=n;i++)
{
	front[i]=boundary[i]=(size-1)*i/n;
}
while(1)
{
printf("Enter your choice: 1.enque 2.deque : ");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("Enter the data to insert\n");
      scanf("%d",&d1);
	printf("enter the value of i");
	scanf("%d",&i);
      enque(i,d1);
      break;
case 2:
	printf("enter the value of i");
	scanf("%d",&i);

	k=deque(i);
	printf("poped value is %d",k);
      break;
}
printf("\n\n");
}
}
