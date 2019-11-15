#include<stdio.h>
#include<math.h>
#include<ctype.h>
int size=100,top=-1,front=-1;
char expr[100];
float xopy(int x, int y, int op)
{
if(op=='+')
{
return x+y;
}
if(op=='-')
{
return x-y;
}
if(op=='*')
{
return x*y;
}
if(op=='/')
{
return x/y;
}
if(op=='^')
{
return x^y;
}
};
void push(char data)
{
if(top==size-1)
{
printf("OVERFLOW\n");
}
else
{
top=top+1;
expr[top]=data;
}
};
char pop()
{
char d;
if(top==-1)
{
printf("UNDERFLOW");
}
else
{
d=expr[top];
if(front==top)
{
front=-1;
top=-1;
}
else
{
top--;
}
return d;
}


};


void main()
{
char y,x,r;int a[100];
float result;
int i;
printf("Expression:");
scanf("%s",&expr);
for(i=0;expr[i]!='\0';i++)
{
	if(isdigit(expr[i]))
	{
		push(expr[i]);
	}
else
{
y=pop();
x=pop();
result=xopy(x-'0',y-'0',expr[i]);
printf(" result is %f",result);
   push(result);
}
}
r=pop();
//printf("RESULT:%c\n",r);
}


