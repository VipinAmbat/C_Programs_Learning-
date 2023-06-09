#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char *name;

    name = malloc(sizeof(char)*64);

    if(scores == NULL)
    {
        printf("Memory error");
        return(1);

    }

    puts("Enter the name you would like to see");

    fgets(name,64,stdin);

    printf("The name entered is %s",name);


    return(0);

}
