//insert the node at different position using sll
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
void delete_pos(struct node *head, int pos)
{
    int count=count_node(head);
    struct node *cur=NULL, *prev=NULL;
    if(head==NULL)
        printf("The list is empty");
    else if(head->link==NULL&&pos==1)
    {
        printf("%d\n",head->data);
        free(head);
        head=NULL;
    }
    else if(pos==1)
    {
        cur=head;
        printf("%d\n",cur->data);
       head=head->link;
       free(cur);
    }
    else if(pos==count)
    {
        prev=NULL;
        cur=head;
        while(cur->link!=NULL)
        {
            prev=cur;
            cur=cur->link;
        }
        printf("%d\n",cur->data);
        prev->link=NULL;
        free(cur);
    }
    else if(pos>1&&pos<count)
    {
        prev=NULL;
        cur=head;
        for(int i=1;i<pos;i++)
        {
            prev=cur;
            cur=cur->link;
        }
        prev->link=cur->link;
        printf("%d\n",cur->data);
        free(cur);
    }
    else if(pos>count)
    {
        printf("Invalid position");
    }
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
          newn=create_node();
          head=insert_end(head,newn);

           }
          printf("Enter the position\n");
          scanf("%d",&pos);
          //newn=create_node();
          delete_pos(head,pos);

           //printf("Link list elements are: \n");
         //display_list(head);
         printf("After deleting the node Link list elements are: \n");
         display_list(head);

    }
    return 0;
}

