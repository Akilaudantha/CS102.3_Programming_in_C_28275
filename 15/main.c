#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks;
    printf("Enter your marks \n");
    scanf("%d",&marks);
    printf("Your marks is = %d\n",marks);
    if (marks>=75)
    {
        printf(" Grade is A\n");
    }
    else if (75>marks && marks>=65)
    {
        printf("Grade is B\n");
    }
    else if (marks>=55)
    {
        printf("Grade is C");
    }
    else
    {
        printf("Grade is F");
    }

    return 0;
}
