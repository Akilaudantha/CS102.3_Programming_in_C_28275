#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,max,low,difference,product;
    float average,divide;
    char name[30];
    printf("Hello! What is your name ? ");
    scanf("%s",name);
    printf("Hellow %s",name);
    printf("\n\n1st subject marks = \n");
    scanf("%d",&a);
    printf("2nd subject marks = \n");
    scanf("%d",&b);
    if(a>=40)
    {
        printf("1st one is Pass\n");
    }
    else
    {
        printf("1st one is Fail\n");
    }
    if (b>=40)
    {
        printf("2nd one is Pass\n");
    }
    else
    {
        printf("2nd one is Fail\n");
    }
    if (a>b)
        max=a;
    else
        max=b;
    {
        printf("Max is = %d\n",max);
    }
    if (a<b)
        low=a;
    else
        low=b;
    {
        printf("Low is = %d\n",low);
    }
    if (a>b)
        difference=a-b;
    else
        difference=b-a;
    {
        printf("Difference is = %d\n",difference);
    }
    product=a*b;
    printf("Product is = %d\n",product);

    average=(float)(a+b)/2.0;
    printf("Average is = %.5f\n",average);

    divide=(float)(a/b);
    printf("Divide is = %.5f\n",divide);



    return 0;
}
