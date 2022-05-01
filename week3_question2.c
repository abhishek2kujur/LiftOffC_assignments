#include<stdio.h>
int Prime(int a);
int i;
int main()
{
    int a,p;
    printf(" Input a number :    \n");
    scanf("%d",&a);
    i = a/2;
    p=Prime(a);
    if(p==1)
        printf(" The number is prime %d ",a);
    else
        printf(" The number is not prime %d ",a);
    return 0;
}
int Prime(int a)
{
    if(i==1)
    {
        return 1;
    }
    else if(a %i==0)
    {
         return 0;
    }     
    else
       {
        i = i -1; 
        Prime(a);
      }
}
