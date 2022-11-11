#include <stdio.h>

int main()
{
    
    int a;
    
    printf("Verify if the number is greater than 10\n");
    printf("Enter the number");
    scanf("%d",&a);
    if(a>10)
    {
        printf("Entered number is %d\n",a);
        printf("The number is greather than 10");
    }
    else if(a==10)
    {
        printf("Entered number is %d\n",a);
        printf("The number is equal to 10");
    }
    else if(a<10)
    {
        printf("Entered number is %d\n",a);
        printf("The number is less than 10");
    }
   
    
}