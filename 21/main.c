#include <stdio.h>
#include <stdlib.h>

int main()
{
  int  a,b,c,max;
    printf("enter first number\n");
    scanf("%d",&a);
    printf("enter second  number\n");
    scanf("%d",&b);
    printf("enter third number\n");
    scanf("%d",&c);

    if (a>b && a>c)
    {
    max=a;
    }
    else if (b>a && b>c)
    {
        max=b;
    }
    else if (c>a && c>b)
    {
        max=c;
    }
    printf("max = %d",max);

    return 0;
}
