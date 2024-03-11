//sll inserting nodes at different positions
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
int count_node(struct node *head)
{
    int count=0;
    struct node *cur=NULL;
    if(head==NULL)
        return count;
    else
        cur=head;
    do
    {
        count++;
        cur=cur->link;
    }while(cur!=NULL);

    return count;
}
struct node *insert_pos(struct node *head,struct node *newn, int pos)
{
    int count=count_node(head);
    struct node *cur=NULL,*next=NULL;
    if(head==NULL)
        printf("The list is empty");
    else if(pos==1)
    {
        newn->link=head;
        head=newn;
    }
    else if(pos>=count+1)
    {
        cur=head;
        while(cur->link!=NULL)
        {
            cur=cur->link;
        }
        cur->link=newn;
    }
    else if(pos>1&&pos<count)
    {
        cur=head;
        for(int i=0;i<pos-1;i++)
            cur=cur->link;
        next=cur->link;
        cur->link=newn;
        newn->link=next;
    }
    return head;
}
int main()
{
    int n,pos;
    struct node *newn=NULL,*head=NULL;
    printf("Enter n value\n");
    scanf("%d",&n);
    if(n>=1)
    {

        for(int i=0;i<n;i++)
         {
          newn=create_node(head);
          head=insert_end(head,newn);

           }
          printf("Enter the position\n");
          scanf("%d",&pos);
          newn=create_node();
          head=insert_pos(head,newn,pos);

           printf("Link list elements are: \n");
         display_list(head);
    }
    return 0;
}

