#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[20],stream[10];
    int maths,physics,chemistry,max,minimum;
    float average;
    printf("Enter your name - ");
    scanf("%s",&name);
    printf("\nEnter your A/L stream (only maths student can use this) - ");
    scanf("%s",&stream);

    printf("\nYour main subjects are Physics,Maths and Chemistry");
    printf("\n\nEnter your maths marks ");

    scanf("%d",&maths);
    printf("\nEnter your physics marks ");
    scanf("%d",&physics);
    printf("\nEnter your chemistry marks ");
    scanf("%d",&chemistry);

    printf("\n\n\n");
    printf("\nMaths = %d",maths);
    printf("\nPhysics = %d",physics);
    printf("\nChemistry = %d\n\n",chemistry);


    if (maths>=75)
    {
        printf("Maths = A");
    }
    else if (75>maths>=65)
    {
        printf("Maths = B");
    }
    else if (65>maths>=55)
    {
        printf("Maths = C");
    }
    else if (55>maths>=40)
    {
        printf("Maths = S");
    }
    else if (40>maths)
    {
        printf("Maths = F");
    }
    printf("\n");


    if (physics>=75)
    {
        printf("Physics = A");
    }
    else if (75>physics>=65)
    {
        printf("Physics = B");
    }
    else if (65>physics>=55)
    {
        printf("Physics = C");
    }
    else if (55>physics>=40)
    {
        printf("Physics = S");
    }
    else if (40>physics)
    {
        printf("Physics = F");
    }

    printf("\n");

     if (chemistry>=75)
    {
        printf("Chemistry = A");
    }
    else if (75>chemistry>=65)
    {
        printf("Chemistry = B");
    }
    else if (65>chemistry>=55)
    {
        printf("Chemistry = C");
    }
    else if (55>chemistry>=40)
    {
        printf("Chemistry = S");
    }
    else if (40>chemistry)
    {
        printf("Chemistry = F");
    }

    printf("\n");

    average=(float)(maths+physics+chemistry)/3;
    printf("Average is %.4f\n",average);

    if (maths>=40 && physics>=40 && chemistry>=40)
    {
        printf(" Your are pass");
    }
    else
    {
        printf(" Sorry You are fail");
    }
    return 0;
}
