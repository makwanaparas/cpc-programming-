// Create, declare and initialize structure employee.
#include<stdio.h>
struct employee{
    char employee_name[30];
    int salary;
    int ID;

};

void main(){
    struct employee e1;
    char employee_name[30];
    int salary;
    int ID;  
    printf("Enter the Name of the Employee : ");
    scanf("%s",e1.employee_name);
    printf("Enter the Salary of the Employee : ");
    scanf("%d",&e1.salary);
    printf("Enter the ID of the Employee : ");
    scanf("%d",&e1.ID);

}