// Swap value of two numbers using pointer.

#include<stdio.h>

void main(){
    int *v1,*v2,a,b,temp;
    v1=&a;
    v2=&b;

    printf("Enter the value of a : ",a);
    scanf("%d",&a);

    printf("Enter the value of b : ",b);
    scanf("%d",&b);
    temp = *v1;
    *v1 = *v2;
    *v2 = temp;

    printf("The value after swapping Numbers is:-\na = %d\nb = %d",a,b);
}