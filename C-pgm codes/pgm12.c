//find distance between two points
#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,y1,y2,dist;
    printf("Enter points\n");
    scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
    dist=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("%d",dist);

    return 0;
}
