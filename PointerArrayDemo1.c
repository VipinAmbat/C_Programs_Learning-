#include<stdio.h>

int main()
{

    int x;
    int arr[]={12,13,14,15};
    int *apt;

    apt = arr;

    for(x=0;x<4;x++)
    {
        printf("The element %d has value %d\n",x+1,*apt);
        apt++;
    }


    return(0);



}
