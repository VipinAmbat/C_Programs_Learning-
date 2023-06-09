#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *scores,x;

    scores = malloc(sizeof(int)*4);

    if(scores == NULL)
    {
        printf("Memory error");
        return(1);

    }

    *(scores+0)= 100;
    *(scores+1)= 111;
    *(scores+2)= 121;
    *(scores+3)= 131;

    for(x=0;x<4;x++)
        printf("Scores are as follows %d,%d",x+1,*(scores+x));

    return(0);

}
