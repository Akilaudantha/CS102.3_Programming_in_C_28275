#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mark;
    printf("Write your marks = ");
    scanf("%d",&mark);
    if (mark>=40)
    {
        printf("\nPass");
    }
    else
    {
        printf("\nFail");
    }
    return 0;
}
