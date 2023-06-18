#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no1,no2,no3,no4,no5,max;
    float avg;
    printf("Enter Fist Number ");
    scanf("%d",&no1);
    printf("Enter Second Number ");
    scanf("%d",&no2);
    printf("Enter Third Number ");
    scanf("%d",&no3);
    printf("Enter Fourth Number ");
    scanf("%d",&no4);
    printf("Enter Fifth Number ");
    scanf("%d",&no5);
    avg=(float)(no1+no2+no3+no4+no5)/2.0;
    printf("Average is %.2f\n",avg);
    if (no1>no2)
        max=no1;
    else
    max=no2;
    if (no1>no3)
    max=no1;
    else
    max=no3;
    if (no1>no4)
    max=no1;
    else
    max=no4;
    if (no1>no5)
    max=no1;
    else
    max=no5;
    printf("The highest number is %d\n",max);
    return 0;
}
