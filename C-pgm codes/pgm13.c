//print star series of different pattern
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter number of stars\n");
    scanf("%d",&n);

    for(i=0;i<5;i++)
    {
        for(j=0;j<i;j++)
        {
            //if(i==j)
            printf("*");
        }
        printf("\n");
    }
    return 0;

}
