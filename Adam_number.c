#include<stdio.h>

int main()
{
    int d,rev1=0,n,s,s1,r,f,rev=0;
    scanf("%d",&n);
    f=n;
    s=n*n;
    while(f!=0)
    {
        r=f%10;
        rev=rev*10+r;
        f=f/10;
    }
    s1=rev*rev;
    while(s1!=0)
    {
        d=s1%10;
        rev1=rev1*10+d;
        s1=s1/10; 
    }
    if(s==rev1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}