// Copy all elements of one array to another.

#include <stdio.h>
void main() 
{
    int n,i,j;
    printf("Enter value of n elements in an array : ");
    scanf("%d",&n);
    int arr1[n],arr2[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the number in arr[%d]: ",i);
        scanf("\n%d",&arr1[i]);
    }
    printf("After Copying all elements from Array1 to Array2 : ");
    for(i=0;i<n;i++)
    {
        arr2[i] = arr1[i];
        printf("\n Value of element %d in Array2 is = %d ",i,arr2[i]);
    }
    
}
