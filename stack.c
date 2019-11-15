#include<stdio.h>
int top=-1,stack[50],size=50;
void push(int data)
{
if (top==size-1)
{
printf("overflow");
//exit;
}
else
{
top=top+1;
stack[top]=data;
}
};
int pop()
{
if (top==-1)
{
printf("Underflow");
}
else
{
return(stack[top--]);
}
};
void display()
{
int i;
for(i=top;i>=0;i--)
{
printf("%d\n",stack[i]);
}
};
void main()
{
int ch,d1;
while(1)
{
printf("Enter your choice: 1.PUSH 2.POP 3.DISPLAY : ");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("Enter the data to insert\n");
      scanf("%d",&d1);
      push(d1);
      break;
case 2:pop();
      break;
case 3:display();
      break;
}
printf("\n\n");
}
}
