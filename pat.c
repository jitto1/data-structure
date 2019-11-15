#include<stdio.h>
#include<string.h>
void main()
{
int i=0,j=0,lens,lenp,k,flag;
char string[100],pat[100];
printf("enter the string and pattern");
scanf("%s",&string);
scanf("%s",&pat);
lens=strlen(string);
lenp=strlen(pat);
while(i<lens && j<lenp)
{
if(j==0)
{
k=i;
}
if(string[i]==pat[j])
{
i++;
j++;
flag=1;
}
else
{
i=k+1;
j=0;
flag=0;
}

}
if(flag==1)
{
printf("present");
}
else
{
printf("not present");
}
i=k+lenp;
while(string[i]!='\0')
{
string[k]=string[i];
k++;
i++;
}
string[k]='\0';
printf("string after deletion%s",string);

}
