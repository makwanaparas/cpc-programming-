//Sort elements of an array in an ascending order.

#include <stdio.h>
    void main()
    {
 
    int i, j, a, n, number[30];
    printf("Enter the value of array : ");
    scanf("%d", &n);
 
    printf("\nEnter the numbers : ");
	for (i=0;i<n;i++)
    scanf("%d", &number[i]);
 
    for (i=0;i<n;i++) 
    {
 
    for (j=i+1;j<n;j++)
    {
 
    if (number[i] > number[j]) 
   {
 
    a =  number[i];
    number[i] = number[j];
    number[j] = a;
 
    }
 
    }
 
    }

    printf("The numbers arranged in ascending order are given below :- \n");
	for (i=0;i<n;i++)
	printf("%d\n", number[i]);

}