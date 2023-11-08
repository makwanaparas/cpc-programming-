// Add two numbers using function.

#include<stdio.h>

int add(int,int);
void main(){
    int a,b;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    int res=add(a,b);

}
int add(int a,int b){
    int sum=0;
    printf("The Addition of the given numbers is : %d",sum=a+b);
}