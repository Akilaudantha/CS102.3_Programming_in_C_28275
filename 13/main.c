#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=10,b=5,c;
    printf("A = %d\n",a);
    printf("B = %d\n\n",b);

    c=++a+b;
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    printf("c = %d\n\n",c);

    return 0;
}
