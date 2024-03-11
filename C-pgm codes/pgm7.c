//check the given year is leap or not
#include<stdio.h>

int main()
{
    int y;
    printf("Enter year\n");
    scanf("%d",&y);
    if(y%4==0)
        printf("The year is leap year\n");
    else
        printf("The year is not leap year\n");

    return 0;
}
