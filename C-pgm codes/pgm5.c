//check the number fibonicci or not
#include<stdio.h>

int main()
{
    int n,fab;
    printf("Enter number\n");
    scanf("%d",&n);
    if(n>2)
    {
        fab=(n-1)+(n-2);
        printf("%d\n",fab);
    }
    else
        printf("%d\n",n);

    return 0;
}

