//check the prime is prime or not
#include<stdio.h>

int main()
{
    int n,i,status;
    printf("Enter number\n");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            status=0;
            break;
        }
    }
    if(status==0)

        printf("The number is not prime number\n");
        else
        printf("The number is prime number\n");

    return 0;
}
