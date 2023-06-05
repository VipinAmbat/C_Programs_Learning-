#include<stdio.h>

int main()
{
    struct bank
    {
        int account;
        float balance;

    };

    struct bank person;

    person.account = 123;
    person.balance= 890.90;

    printf("The person has %d of account no with balance %f",person.account,person.balance);

    return(0);


}

