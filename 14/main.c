#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter a =");
    scanf("%d",&a);
    printf("\nEnter b = ");
    scanf("%d",&b);

    c=a%b;
    printf("\nc = %d",c);
    return 0;
}
