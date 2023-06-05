#include<stdio.h>
#include<string.h>

int main()
{
    struct date
    {
        int day;
        int year;
        int month;
    };

    struct person
    {

        char name[32];
        struct date birthday;
    };

    struct person friend;

    strcpy(friend.name,"Mukesh Khanna");
    friend.birthday.day=23;
    friend.birthday.month=5;
    friend.birthday.year =1993;

    printf("Name of my friend is %s",friend.name);
    printf("His DOB is %d %d %d",friend.birthday.day,friend.birthday.month,friend.birthday.year);


}
