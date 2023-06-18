#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[20],stream,sub;
    int maths,bio,physics,chemistry,it,max,min,sum=0;
    float average;

    printf("Enter your name - ");
    scanf ("%s",&name);
    printf("\n");
    printf("Hello %s, enter your A/L stream ( Maths/Bio )- ",name);
    scanf("%s",&stream);

    switch (stream)
    {
        case 'M':
            printf("\n\nHello , Your main subjects are Combine maths, physics, chemistry or IT");
            printf("\n\n");
            printf("Enter your Combine maths marks - ");
            scanf("%d",&maths);
            printf("\n");
            printf("Combine maths - %d",maths);
            printf("\n");

            if (maths>=75)
            {
                printf("Combine maths - A");
            }
            else if (maths<75 && maths>=65)
            {
                printf("Combine maths - B");
            }
            else if (maths<65 && maths>=55)
            {
                printf("Combine maths - C");
            }
            else if (maths<55 && maths>=40)
            {
                printf("Combine maths - S");
            }
            else if (maths<40)
            {
                printf("Combine maths - F");
            }
            printf("\n\n");
            break;


        case 'B':
            printf("\n\nHello , Your main subjects are Bio, physics, chemistry or IT");
            printf("\n");
            printf("Enter your Bio marks - ");
            scanf("%d",&bio);
            printf("\n\n");
            printf("Bio - %d",bio);
            printf("\n");

            if (bio>=75)
            {
                printf("Bio - A");
            }
            else if (bio<75 && bio>=65)
            {
                printf("Bio - B");
            }
            else if (bio<65 && bio>=55)
            {
                printf("Bio - C");
            }
            else if (bio<55 && bio>=40)
            {
                printf("Bio - S");
            }
            else if (bio<40)
            {
                printf("Bio - F");
            }
            printf("\n\n");
            break;

    }
         printf("\nWhat is your subject chemistry or IT ? - ");
            scanf("%s",&sub);
            printf("\n");
        printf("Enter your Physics marks - ");
            scanf("%d",&physics);
            printf("Physics - %d",physics);
            printf("\n\n\n");

        switch (sub)
            {
            case 'C':
                printf("Enter your Chemistry marks - ");
                scanf("%d",&chemistry);
                printf("Chemistry - %d",chemistry);
                printf("\n\n\n");

            if (chemistry>=75)
            {
                printf("Chemistry - A");
            }
            else if (chemistry<75 && chemistry>=65)
            {
                printf("Chemistry - B");
            }
            else if (chemistry<65 && chemistry>=55)
            {
                printf("Chemistry - C");
            }
            else if (chemistry<55 && chemistry>=40)
            {
                printf("Chemistry - S");
            }
            else if (chemistry<40)
            {
                printf("Chemistry - F");
            }
            printf("\n");
                break;

            case 'I':
                printf("Enter your IT marks - ");
                scanf("%d",&it);
                printf("\n");
                printf("IT - %d",it);
                printf("\n\n");

                 if (it>=75)
            {
                printf("IT - A");
            }
            else if (it<75 && it>=65)
            {
                printf("IT - B");
            }
            else if (it<65 && it>=55)
            {
                printf("IT - C");
            }
            else if (it<55 && it>=40)
            {
                printf("IT - S");
            }
            else if (it<40)
            {
                printf("IT - F");
            }
            printf("\n");
            break;
            default: printf("Please enter Chemistry or IT");
            break;
            }


            if (physics>=75)
            {
                printf("Physics - A");
            }
            else if (physics<75 && physics>=65)
            {
                printf("Physics - B");
            }
            else if (physics<65 && physics>=55)
            {
                printf("Physics - C");
            }
            else if (physics<55 && physics>=40)
            {
                printf("Physics - S");
            }
            else if (physics<40)
            {
                printf("Physics - F");
            }
            printf("\n\n\n");

            //average(float)=(maths+physics+chemistry+it)/3;
            //printf("Your average is = %.2f",average);

            sum=(bio+maths+physics+chemistry+it);
            printf("Sum is %d",sum);

            printf("\n\n\n");

            if(maths>physics && maths>chemistry && maths>it && maths>bio)
            {
                printf("Max is maths = %d",maths);
            }
            else if (bio>maths && bio>physics && bio>chemistry && bio>it)
            {
                printf("Max is bio = %d",bio);
            }
            else if (physics>maths && physics>chemistry && physics>it && physics>bio)
            {
                printf("Max is physics = %d",physics);
            }
            else if (chemistry>maths && chemistry>physics && chemistry>it && chemistry>bio)
            {
                printf("Max is chemistry = %d",chemistry);
            }
            else if (it>maths && it>physics && it>chemistry && it>bio)
            {
                printf("Max is IT = %d",it);
            }

    return 0;
}
