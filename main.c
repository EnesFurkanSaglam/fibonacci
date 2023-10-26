#include <stdio.h>
#include <stdlib.h>

void fibo(c,a1,a2,a3)
{
    printf("%d\n%d\n",a1,a2);
    for(int i=3;i<=c;i++)
    {
        a3=a1+a2;
        printf("%d\n",a3);
        a1=a2;
        a2=a3;
    }
}

int main(void)
{
    int a1=0; //first number of fibonacci
    int a2=1; //second number of fibonacci
    int = a3,c;
    printf("enter a number: ");
    scanf("%d",&c);
    fibo(c,a1,a2,a3); //values are going function

    return 0;
}
