//swapping of 2 numbers
#include<stdio.h>

int main()
{
    int a,b,temp=0;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("Swapped numbers are %d%d\n",a,b);

    return 0;
}
