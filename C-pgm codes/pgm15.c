//create the node and display using sll
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};

struct node *create_node()
{
    struct node *newn=(struct node*)malloc(sizeof(struct node));
    if(newn==NULL)
        printf("Memory is not created\n");
    else
    {
        printf("Enter the data\n");
       scanf("%d",&newn->data);
        newn->link=NULL;
    }
    return newn;
}
void display_list(struct node *head)
{
    if(head==NULL)
        printf("List is empty\n");
    else
    {
       struct node *cur=head;
        while(cur!=NULL)
        {
        printf("%d\t",cur->data);
            cur=cur->link;
        }
    }
  printf("\n");
}
struct node *insert_end(struct node *head,struct node *newn)
{
  if(head==NULL)
        head=newn;
  else
  {
      struct node *cur=head;
      while(cur->link!=NULL)
        cur=cur->link;
      cur->link=newn;
  }
  return head;
}
int main()
{
    int n;
    struct node *newn=NULL,*head=NULL;
    printf("Enter n value\n");
    scanf("%d",&n);
    if(n>=1)
    {

        for(int i=0;i<n;i++)
         {
          newn=create_node();
          head=insert_end(head,newn);
           }
           printf("Link list elements are: \n");
         display_list(head);
    }
    return 0;
}
