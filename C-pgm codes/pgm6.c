//simple calculator
#include<stdio.h>

int main()
{
    int a,b,c=1,add,sub,mul,div;
    printf("Enter number\n");
    scanf("%d%d",&a,&b);

    switch(c)
    {
        case 1:
              add=a+b;
              printf("addition is %d\n",add);

        case 2:
              sub=a-b;
              printf("subtraction %d\n",sub);

        case 3:
              mul=a*b;
              printf("multiplication %d\n",mul);

        case 4:
              div=a%b;
              printf("division %d\n",div);

    }
    return 0;
}
