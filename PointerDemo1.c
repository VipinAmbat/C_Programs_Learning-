#include<stdio.h>
/* program to show address in pointer */

int main()
{

int *p;
int pokey;

p=&pokey;
printf("The address of the pokey variable %p\n",&pokey);

printf("The address of 'p' is %p\n",p);

return(0);
}
