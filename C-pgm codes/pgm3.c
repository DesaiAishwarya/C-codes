//check the number is even or odd
#include<stdio.h>

int main()
{
    int a,even=0,odd=0;
    printf("Enter number\n");
    scanf("%d",&a);
    if(a%2==0)
        printf("The number is even\n");
    else
        printf("The number is odd\n");

    return 0;
}
