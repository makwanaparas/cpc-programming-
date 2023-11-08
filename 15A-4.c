// Search element in array.

#include<stdio.h>

void main(){
    int n,i,count=0,search;
    printf("Enter value of n elements in an array : ");
    scanf("\n%d" ,&n);
    int arr[n];
    for(i=0;i<n;i++){
    printf("Enter the number in arr[%d]: ",i);
    scanf("\n%d",&arr[i]);
    }
    printf("Search the element in given array  : ");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
    if(arr[i]==search){
        printf("The element %d is in index [%d]\n",search,i);
    }
    else{
        printf("The element %d is not found in the given array.",search);
        break;
    }
    
}
}