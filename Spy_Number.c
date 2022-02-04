//A Number is spy number if the sum of its digits equals the product of its digits.

#include<stdio.h>

int main()
{
int num,s=0,m=1,temp,d;
scanf("%d",&num);
 temp=num;
while(temp!=0)
{
 d=temp%10;
 s=s+d;
 m=m*d;
 temp=temp/10;
}
if(s==m)
printf("Spy Number");
else
printf("Not Spy Number");
return 0;
}