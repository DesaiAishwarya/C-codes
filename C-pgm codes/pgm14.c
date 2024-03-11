//Display student details and search name of the student
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student_details
{
   char name[10];
   int usn;
   int age;
}STU;

void read_details(STU *dptr,int n)
{
   // printf("Enter number of students\n");
    printf("Enter student details\n");
    printf("Enter name\t,usn\t,age\n");
    for(int i=0;i<n;i++)
    {
    scanf("%s%d%d",&dptr->name,&dptr->usn,&dptr->age);

    dptr++;
    }
}

void display_details(STU *dptr,int n)
{
    printf("The student details are\n");
   printf("name\t,usn\t,age\n");
    for(int i=0;i<n;i++)
    {
     printf("%s\t%d\t%d\n",dptr->name,dptr->usn,dptr->age);

    dptr++;
    }
}
void search_name(STU *dptr,int n,char name[10])
{
    int status=0;
    for(int i=0;i<n;i++)
    {
        if(strcmp(dptr->name,name)==0)
        {
            status=1;
            break;
        }
        dptr++;
    }
    if(status==1)
       printf("%s%d%d",dptr->name,dptr->usn,dptr->age);
       else
        printf("Name was not found\n");
}

int main()
{
    STU *dptr;
    //dptr=&d;
    int n;
    char name[10];
    printf("Enter number of students\n");
    scanf("%d",&n);
    dptr=(STU*)malloc(n*sizeof(STU));
    read_details(dptr,n);
    display_details(dptr,n);
    printf("Enter the name of student\n");
    scanf("%s",name);
    search_name(dptr,n,name);

    free(dptr);
    return 0;
}
