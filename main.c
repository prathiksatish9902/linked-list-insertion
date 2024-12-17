#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node *newnode;
struct node *temp;
//head = 0;
int choice =1 ;
struct node* createNode(struct node * head){
    while(choice){
        newnode = (struct node *)malloc(sizeof(struct node));
        if(newnode == 0)
        {
            printf("Memory allocation failed\n");
            return ;
        }
        printf("enter the data");
        scanf("%d",&newnode->data);
        newnode->next = 0;
        if (head == 0){
            head = temp = newnode;
        }
        else{
            temp->next = newnode;
            temp = newnode;
        }
        printf("do you want to continue (0,1)?");
        scanf("%d",&choice);
    }
    return head;
}
int display(struct node * head,int count){
    struct node *temp;
    temp = head;
    while(temp != 0)
    {
        printf("%d",temp->data);
        temp = temp->next;
        ++count;
    }
    printf("\ncount = %d",count);
    return count;
}
struct node* insertAtBeginning(struct node *head)
{
    newnode = (struct node *) malloc (sizeof(struct node));
    printf("enter new data at beginning");
    scanf("%d",&newnode->data);
    newnode->next = head;
    head = newnode;
    return head;
}
struct node * insertAtEnd(struct node * head)
{
    newnode = (struct node *) malloc (sizeof(struct node));
    printf("enter new data at end");
    scanf("%d",&newnode->data);
    newnode->next = 0;
    temp = head;
    while (temp->next !=0)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    return head;
}
struct node *  insertAtPosition(struct node * head,int count){
    int pos ,i =1;
    printf("enter the position :");
    scanf("%d",&pos);
    if(pos>count)
    {
        printf("invalid position");
    }
    else
    {
        temp = head;
        while(i<pos){
            temp = temp->next;
            i++;
        }
        newnode= (struct node *) malloc (sizeof(struct node));
        printf("enter the data at position");
        scanf("%d",&newnode->data);
        newnode->next = temp->next;
        temp->next = newnode;
    }
    return head;
}
int main()
{
    struct node *head = 0;
    int choice =1,option = 1 ;
    int count = 0;
    while(choice)
    {
        printf("\n1.create node\n");
        printf("2.insert at beginning\n");
        printf("3.insert at end\n");
        printf("4.insert at position\n");
        printf("5. display\n");
        printf("6.exit\n");
        printf("enter your choice:");
        scanf("%d",&option);
        switch(option){
        case 1 :
            head = createNode(head);
            break;
        case 2:
            head = insertAtBeginning(head);
            break;
        case 3:
            head = insertAtEnd(head);
            break;
        case 4:
            head = insertAtPosition(head,count);
            break;
        case 5:
            count = display(head,count);
            break;
        case 6:
            exit(0);
            break;
        default:
            printf("invalid choice");
            break;
        }
    }
    return 0;
}
