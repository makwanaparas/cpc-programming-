// Return the maximum of three floating-point numbers.

#include<stdio.h>

int rtnmax(float,float,float);
void main(){
    float a,b,c;
    printf("Enter the value of a : ");
    scanf("%f",&a);
    printf("Enter the value of b : ");
    scanf("%f",&b);
    printf("Enter the value of c : ");
    scanf("%f",&c);
    int res=rtnmax(a,b,c);

}
int rtnmax(float a,float b,float c){
    if(a>b && a>c){
        printf("The number a is the greatest");
    }
    if(b>a && b>c){
        printf("The number b is the greatest");
    }
    if(c>a && c>b){
        printf("The number c is the greatest");
    }
}