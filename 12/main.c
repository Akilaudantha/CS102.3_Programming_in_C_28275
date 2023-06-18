#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=10,b=5,c,d,e,f,g,h,i,j,k,l,m,n;

    //AND operator
    c=(a<b)&&(a<=b);
    printf("c is = %d\n",c);
    d=(a>b)&&(a<b);
    printf("d is = %d\n",d);
    e=(a<b)&&(a>b);
    printf("e is = %d\n",e);
    f=(a>b)&&(a>b);
    printf("f is = %d\n\n",f);

    //OR Operator
    g=(a<b)||(a<b);
    printf("g is = %d\n",g);
    h=(a>b)||(a<b);
    printf("h is = %d\n",h);
    i=(a<b)||(a>b);
    printf("i is = %d\n",i);
    j=(a>b)||(a>b);
    printf("j is = %d\n\n",j);

    //XOR Operator
    k=(a<b)^(a<b);
    printf("k is = %d\n",k);
    l=(a>b)^(a<b);
    printf("L is = %d\n",l);
    m=(a<b)^(a>b);
    printf("M is = %d\n",m);
    n=(a>b)^(a>b);
    printf("N is = %d\n",n);


    return 0;
}
