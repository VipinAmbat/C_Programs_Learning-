#include <stdio.h>

int main()
{
    
    puts("Get a string and print it using array");
    
    char name[20];
    
    puts("Enter the string");
    
    fgets(name,20,stdin); // fgets use imput2,array size and stdin 
    
    printf("Enetered string is %s",name);
   
    
}
