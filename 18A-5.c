// Swap two numbers using call by value and call by reference.

#include<stdio.h>

int swap(int,int);
void main(){
    int a,b;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    int res=swap(a,b);

}
int swap(int a,int b){
    int temp=0;
    temp=a;
    a=b;
    b=temp;
    printf("The value of a after swapping is : %d &\nThe value of b after swapping is : %d",a,b);
}