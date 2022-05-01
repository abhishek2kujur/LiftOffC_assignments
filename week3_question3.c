#include<stdio.h>
int check(int n);
int rem;
int main()
{
	int n,r;
	printf("enter a number:   \n");
	scanf("%d",&n);
	rem=n%2;
	r=check(n);
	if(r==1)
        printf(" The number is odd %d ",n);
    else
        printf(" The number is even %d  ",n);
    return 0;
}
int check(int n)
{
	if(rem==1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
