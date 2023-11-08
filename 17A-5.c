// Store n elements in an array and print the elements using pointer.

#include<stdio.h>

void main(){
    int *p,i,n;
    printf("Enter value of n : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter Value of a[%d] :",i);
        scanf("%d",&a[i]);
    }
    printf("Elements are :-");
    for(i=0;i<n;i++)
    {
        p = &a[i];
        printf("\n%d ",*p);
    }
}