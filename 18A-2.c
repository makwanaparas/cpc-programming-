// Find maximum and minimum between two numbers using function.

#include<stdio.h>

int maxmin(int,int);
void main(){
    int a,b;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    int res=maxmin(a,b);

}
int maxmin(int a,int b){
    if(a>b){
        printf("The number a is the greatest &\nThe number b is smallest");

    }
    else{
        printf("The number b is the greatest &\nThe number a is smallest");
    }
}