/***It's a linked list function on C language***/
//@Author - Soumyadip Ghosh(GitHub-https://github.com/SoumyadipGhosh23 )
#include <stdio.h>
#include <stdlib.h>

//creation of linked  list
struct node
{
    int data;
    struct node *next;
};

//printing the linked list
void traversalLinkedlist(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

/***************Insertion In the Linked List********************/

//Case 1
struct node *insertionBeginnig(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

//Case 2
struct node *insertionAtIndex(struct node *head, int data, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;

    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

//Case 3
struct node* insertionAtEnd(struct node* head,int data){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node* p = head;
    while(p->next != NULL){
        p = p->next;
    }
    ptr->data = data;
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

//Case 4
struct node* insertionAfterNode(struct node* head, struct node* preavnode, int data){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data= data;
    ptr->next = preavnode->next;
    preavnode->next = ptr;
    return head;
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    //assigning value and linking the linked list

    head->data = 65;
    head->next = second;

    second->data = 54;
    second->next = third;

    third->data = 22;
    third->next = NULL;

    traversalLinkedlist(head);

    head = insertionBeginnig(head, 32);
    printf("Printing after insertion at the beginning: \n");
    traversalLinkedlist(head);

    head = insertionAtIndex(head,5,2);
    printf("Printing after insertion at index: \n");
    traversalLinkedlist(head);

    head= insertionAtEnd(head,2002);
    printf("Printing after insertion at the end: \n");
    traversalLinkedlist(head);

    head = insertionAfterNode(head,second,555);
    printf("Printing after insertion after the second node: \n");
    traversalLinkedlist(head);
    free(head);
    free(second);
    free(third);
}
