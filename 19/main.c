#include <stdio.h>
#include <stdlib.h>

int main()
{
    float b=5.63;
    char c[0];
    printf("enter your name \n");
    scanf("%s",c);
    printf("Name : %s\n",c);

    int a=0,size01,size02,size03;
    size01=sizeof(a);
    size02=sizeof(b);
    size03=sizeof(c);

    printf("Integer size is %d\n",size01);
    printf("Float size is %d\n",size02);
    printf("Charactor size is %d\n",size03);

    return 0;
}
