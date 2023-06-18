#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day;
    printf("enter day number");
    scanf("%d",&day);
    switch(day)
    {
    case 1:
        printf("monday");
        break;
    case 2:
        printf("tuesday");
        break;
    case 3:
        printf("wedsday");
        break;
    case 4:
        printf("thuesday");
        break;
    case 5:
        printf("friday");
        break;
    case 6:
        printf("satarday");
        break;
    case 7:
        printf("sunday");
    default:
        printf("please enter valid day");
    }









    return 0;
}
