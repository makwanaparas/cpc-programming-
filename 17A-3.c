// Calculate sum of two numbers using pointer.

#include<stdio.h>

void main(){
    int *v1,*v2,a,b,sum;
    v1=&a;
    v2=&b;

    printf("Enter the value of a : ",a);
    scanf("%d",&a);

    printf("Enter the value of b : ",b);
    scanf("%d",&b);
    sum = *v1+*v2;
    printf("Sum = %d",sum);
}