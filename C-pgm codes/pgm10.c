//armstrong number
#include<stdio.h>

int main()
{
    int rem,n,temp,sum=0;
    printf("Enter number\n");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        rem=n%10;
        //printf("%d",rem);
        sum=sum+(rem*rem*rem);
       // a_no=sum*sum*sum;
       // printf("%d\n",sum);
        n=n/10;
    }
    if(temp==sum)
    printf("The number is armstrong number\n");
    else
        printf("The number is not armstrong number\n");

    return 0;
}
