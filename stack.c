#include<stdio.h>
int s[100],i,ch,top;
void push()
{
int a,top;
if(top==a)
printf("stack is full\n");
else
{
printf("Enteer element to push\n");
scanf("%d", &a);
top=top+1;
s[top]=a;
}
}
void pop()
{
if(top==-1)
printf("stack is empty\n");
else
top=top-1;
}
void show()
{
for(i=top;i>=0;i--)
{
printf("%d",s[i]);
}
}
void main()
{
int n;
printf("enter no.of elements\n");
scanf("%d",&n);
while(ch!=4)
{
printf("1.push\n2.pop\n3.show\n4.exit\n");
printf("enter choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
{
push();
break;
}
case 2:
{
pop();
break;
}
case 3:
{
show();
break;
}
default:
{
printf("Invalid entry");
}
};
}
}
