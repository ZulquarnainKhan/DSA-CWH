#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;   // Making a self referencing structure
};

void linkedListTraversal(struct Node* ptr){
    
    while(ptr!= NULL){
        printf("%d ",ptr->data);
        ptr = ptr-> next;
    }
    printf("\n");
}

struct Node* insertAtFirst(struct Node * head, int data){
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->next=head;
    ptr->data=data;
    return ptr;

}

struct Node* insertAtLast(struct Node* head,int data){
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node* p = head;

    while(p->next != NULL){
        p=p->next;
    }
    p->next=ptr;
    ptr->data=data;
    ptr->next=NULL;

}

struct Node* insertInBetween(struct Node* head,int posn,int data){
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node* p = head;

    for(int i=1;i<(posn-1);i++){
        p=p->next;
    }

    ptr->next=p->next;
    p->next=ptr;
    ptr->data=data;
}

struct Node* insertAfterNode(struct Node *head, struct Node *prevNode , int data){
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=prevNode->next;
    prevNode->next=ptr;

}


int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *forth;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    forth = (struct Node*)malloc(sizeof(struct Node));

    head->data=7;
    head->next = second;

    second->data=8;
    second->next = third;

    third->data=9;
    third->next = forth;

    forth->data=10;
    forth->next = NULL;

    linkedListTraversal(head);

    head=insertAtFirst(head,3);
    linkedListTraversal(head);

    insertAtLast(head,15);
    linkedListTraversal(head);

    insertInBetween(head,3,4);
    linkedListTraversal(head);

    insertAfterNode(head,head,20);
    linkedListTraversal(head);

    return 0;
}