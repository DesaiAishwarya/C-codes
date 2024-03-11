//sort the give sequence using any sorting technique
#include<stdio.h>
#define max 10

int main()
{
    int n,num[10];
    printf("Enter no of elements in the sequence\n");
    scanf("%d",&n);
    int temp,i,j;
    printf("Enter the elements in the list\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
        printf("%d",num[i]);
    }

    for(i=0;i<n-1;i++)
    {
      for(j=i+1;j<n;j++)
     {
        if(num[i]>num[j])
        {
           temp=num[i];
           num[i]=num[j];
           num[j]=temp;

        }
     }
    }
        printf("\n");
        for(i=0;i<n;i++)
    {
        printf("%d",num[i]);
    }

    return 0;
}
