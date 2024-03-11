//palindrome number
#include<stdio.h>

int main()
{
    int n,rem,temp;
    printf("Enter number\n");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        rem=n%10;
       printf("%d\n",rem);
        n=n/10;

    }
        if(temp==rem)
        {
        printf("The given number is palindrome\n");
        }
        else
            printf("The given number is not palindrome\n");


    return 0;
}
