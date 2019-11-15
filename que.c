#include<stdio.h>
int rear=-1,front=-1,queue[50],size=50;
void enqueue(int data)
{
if(rear==size-1)
{
printf("Overflow");
}
else
{
if(rear==-1)
{
front=0;
}
queue[++rear]=data;
}
};
int dequeue()
{
int d;
if(front==-1)
{
printf("Underflow");
}
else
{
d=queue[front];
if(front==rear)
{
front=rear=-1;
}
else
{
front++;
}
}
return d;
};
void display()
{
int i;
for(i=front;i<=rear;i++)
{
printf("%d\n",queue[i]);
}
};
void main()
{
int ch,d1;
while(1)
{
printf("Enter your choice: 1.ENQUEUE 2.DEQUEUE 3.DISPLAY : ");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("Enter the data to insert\n");
      scanf("%d",&d1);
      enqueue(d1);
      break;
case 2:dequeue();
      break;
case 3:display();
      break;
}
printf("\n\n");
}
}
