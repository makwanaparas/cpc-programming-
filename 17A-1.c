// Print value and address of a variable.

#include<stdio.h>
void main()
{
    int *a,x;
    a=&x;
    printf("Enter value of x = ");
    scanf("%d",&x);
    printf("Value = %d\nAddress = %d",x,a);
}
