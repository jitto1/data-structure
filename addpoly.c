#include<stdio.h>
#include<stdlib.h>
struct term
     {
        int coeff;
	int exp;
        struct term *addr;
     };
struct term *createterm(int coeff,int exp)
{
	struct term *p;
	p=(struct term *)malloc(sizeof(struct term ));
	p->coeff=coeff;
	p->exp=exp;
	p->addr=NULL;
	return p;
}
struct term *createpoly(int n)
{
	struct term *head=NULL,*nt,*last;
	int i,c,e;
	for(i=0;i<n;i++)
	{
		printf("enter coefficent and exponent value of the of %d th term",i+1);
		scanf("%d%d",&c,&e);
		nt=createterm(c,e);
		if(head==NULL)
		{
			head=last=nt;
		}
		else
		{
			last->addr=nt;
			last=nt;
		}
	}
	return head;
}
void traversal(struct term *head)
{
	struct term *p;
	p=head;
	while(p!=NULL)
	{
		printf("%dx%d+",p->coeff,p->exp);
		p=p->addr;
	}
	printf("\n");
}
struct term *addpoly(struct term*h1,struct term*h2)
{
	struct term *rh=NULL,*p1,*p2,*n,*last;
	p1=h1;
	p2=h2;
	while(p1!=NULL&&p2!=NULL)
	{
		if(p1->exp>p2->exp)
		{
			n=createterm(p2->coeff,p2->exp);
			p2=p2->addr;
		}
		if(p1->exp<p2->exp)
		{
			n=createterm(p1->coeff,p1->exp);
			p1=p1->addr;
		}
		else
		{
			n=createterm(p1->coeff+p2->coeff,p1->exp);
			p1=p1->addr;
			p2=p2->addr;
		}
		if(rh==NULL)
		{
			rh=last=n;
		}
		else
		{
			last->addr=n;
			last=n;
		}
	}
	while(p1!=NULL)
	{
		n=createterm(p1->coeff,p1->exp);
		p1=p1->addr;
	
		if(rh==NULL)
		{
			rh=last=n;
		}
		else
		{
			last->addr=n;
			last=n;
		}
	}
	while(p2!=NULL)
	{
		n=createterm(p2->coeff,p2->exp);
		p2=p2->addr;
		if(rh==NULL)
		{
			rh=last=n;
		}
		else
		{
			last->addr=n;
			last=n;
		}
	}	
return rh;
}
void main()
{
	struct term *h1;
	struct term *h2;
	struct term *h3;
	int a,b;
	printf("enter the number of terms of first polynomial");
	scanf("%d",&a);
	h1=createpoly(a);
	traversal(h1);
	printf("enter the number of terms of second polynomial");
	scanf("%d",&b);
	h2=createpoly(b);
	traversal(h2);
	h3=addpoly(h1,h2);
	printf("the resultant polynomial is \n");
	traversal(h3);
}	
