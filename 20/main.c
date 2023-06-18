#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day;
    printf("Enter day number ");
    scanf("%d",&day);
    switch(day)
    {
       case 01: printf("Monday");
       break;
       case 02: printf("Tuesday");
       break;
       case 03: printf("Wednsday");
       break;
       case 04: printf("Thursday");
       break;
       case 05: printf("Friday");
       break;
       case 06: printf("Saturday");
       break;
       case 07: printf("Sunday");
       break;
       default: printf("Please enter value date");

    }

    return 0;
}
