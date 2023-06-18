#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=100,b=75,c=50;
    if (a>b && a>c)
    {
        printf("Max is %d",a);
    }
    else if(b>a && b>c)
    {
        printf("Max is %d",b);
    }
    else
    {
        printf("Max is %d",c);
    }




    return 0;
}
