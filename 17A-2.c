// Demonstrate int, float, double and char pointer.

#include<stdio.h>

void main(){
    int i,*ip;
    float ff,*fp;
    double d,*dp;
    char ch,*chp;

    printf("Enter integer : ");
    scanf("%d",&i);

    printf("Enter float : ");
    scanf("%f",&ff);

    printf("Enter double : ");
    scanf("%lf",&d);

    printf("Enter character : ");
    scanf(" %c",&ch);

    ip=&i;
    fp=&ff;
    dp=&d;
    chp=&ch;

    printf("\nAdrress contained in ip is : %u",ip);
    printf("\nAdrress contained in fp is : %u",fp);
    printf("\nAdrress contained in dp is : %u",dp);
    printf("\nAdrress contained in chp is : %u",chp);

    printf("\nValue of i using ip pointer is : %d",*ip);
    printf("\nValue of ff using fp pointer is : %f",*fp);
    printf("\nValue of d using dp pointer is : %lf",*dp);
    printf("\nValue of ch using chp pointer is : %c",*chp);
}