#include<stdio.h>
int GCD(int n1,int n2);
int main()
{
  int n1,n2,gcd;
  printf(" enter two number to find GCD ");
  scanf("%d%d",&n1,&n2);
  gcd = GCD(n1,n2);
  printf("\n The GCD of %d and %d is: %d",n1,n2,gcd);
  return 0;
}

int GCD(int a,int b)
{
     while(a!=b)
     {
          if(a>b)
              return GCD(a-b,b);
          else
             return GCD(a,b-a);
     }
     return a;
}
