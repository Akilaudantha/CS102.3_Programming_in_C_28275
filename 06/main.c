#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,sum,difference,product;
    printf("Enter two numbers ");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("Sum = %d\n",sum);
    if (a>b)
        difference=a-b;
    else
        difference=b-a;
    printf("Difference is %d\n",difference);
    product=a*b;
    printf("Product is %d",product);
    return 0;
}
