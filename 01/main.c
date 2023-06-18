#include <stdio.h>

int main()
{


    int Num01,Num02;
    float avg;
    printf("Enter your fist number ");
    scanf("%d",&Num01);
    printf("Enter your second number ");
    scanf("%d",&Num02);
    avg=(float)(Num01+Num02)/2.0;
    printf("The Average is %.7f\n",avg);
    return 0;
}
