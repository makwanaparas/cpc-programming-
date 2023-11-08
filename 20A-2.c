// Create a structure book with book title, author, publication, and price. 
// Read data of 3 books and display.

#include<stdio.h>

struct Book{
    char book_title[30];
    char Author[30];
    char Publication[30];
    float Price;
};

void main(){
    struct Book b[4];
    int i;
    for(i=1;i<5;i++){
    printf("Provide the Tiltle of the Book : ");
    scanf("%s",b[i].book_title);
    printf("Provide the Author's name of the Book : ");
    scanf("%s",&b[i].Author);
    printf("Provide the Publication of the Book : ");
    scanf("%s",&b[i].Publication);
    printf("Provide the Price of the Book : ");
    scanf("%f",&b[i].Price);
    printf("%s \n%s \n%s \n%f \n",b[i].book_title,b[i].Author,b[1].Publication,b[1].Price);
    }

}