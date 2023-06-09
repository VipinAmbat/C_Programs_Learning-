#include<stdio.h>
#include<stdlib.h>
#define SIZE 1024

int main()
{
    char *sto;

    sto = malloc(sizeof(char)*SIZE);

    if(sto == NULL)
    {
        printf("Memory error");
        return(1);

    }

    else
        {
            printf("%d Bytes of Memory allocated is at %p",SIZE,sto);

        }

        return(0);


}
