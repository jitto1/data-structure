#include<stdio.h>
#include<stdlib.h>
struct node *createnode(int item);
struct node *insert(struct node *n,struct node *rootnode);
void inorder(struct node *rootnode);
struct node
{
int data;
struct node *lchild,*rchild;
};
struct node *createnode(int item)
{
struct node *p;
p=(struct node *)malloc(sizeof(struct node));
p->data=item;
p->lchild=NULL;
p->rchild=NULL;
return p;
}
void main()
{
int ch,data;
struct node *n,*rootnode=NULL;




while(1)
{
printf("enter the data");
scanf("%d",&data);
n=createnode(data);
rootnode=insert(n,rootnode);


inorder(rootnode);

}
}
struct node *insert(struct node *n,struct node *rootnode)
{
struct node *p,*ptr;
if (rootnode==NULL)
{
rootnode=n;
}
else
{
ptr=rootnode;
while(ptr!=NULL)
{
if(ptr->data>=n->data)
{
p=ptr;
ptr=ptr->lchild;
}
else
{
p=ptr;
ptr=ptr->rchild;
}
}

if(p->data>=n->data)
{
p->lchild=n;
}
else
{
p->rchild=n;
}
}
return rootnode;
}
void inorder(struct node *rootnode)
{
if(rootnode!=NULL)
{
inorder(rootnode->lchild);
printf("%d",rootnode->data);
inorder(rootnode->rchild);
}
}
