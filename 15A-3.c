// Count number of elements divisible by 3 in array.

#include<stdio.h>

void main(){
    int i,j,n;
    printf("Enter value of n elements in an array : ");
    scanf("\n%d" ,&n);
    int arr[n];
    for(i=0;i<n;i++){
    printf("Enter the number in arr[%d]: ",i);
    scanf("\n%d",&arr[i]);
    }
    int cn=0;
    for(i=0;i<n;i++) {
        if(arr[i]%3==0){
            cn++;
        }
        else{

        }
    }
    printf("The total numbers of elemnents divisible by 3 in an array is %d" ,cn);
}