#include<stdio.h>
int main()
{
    float r,d,c,area;
    printf("enter value for radius  :   ");
    scanf("%f" ,&r);
    d=2*r;
    c=2*(22.0/7.0)*r;
    area=(22.0/7.0)*r*r;
    printf("the diameter of circle is  :    %f" ,d);
    printf("the cicumference of the circle is   :    %f" ,c);
    printf("the area of circle is   :  %f  " ,area );
    return 0;
}
