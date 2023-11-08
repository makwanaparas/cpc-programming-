// Count simple interest using function.

#include<stdio.h>

int smplintr(int,int,int);
void main(){
    int p,r,t;
    printf("Enter the value of principle p : ");
    scanf("%d",&p);
    printf("Enter the value of rate r : ");
    scanf("%d",&r);
    printf("Enter the value of time t : ");
    scanf("%d",&t);
    int res=smplintr(p,r,t);

}
int smplintr(int p,int r,int t){
    float smplintr;
    printf("The value of the Simple Interest is : %f", smplintr=(p*r*t)/100.0);
}