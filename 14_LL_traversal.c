#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;   // Making a self referencing structure using pointer
};

void linkedListTraversal(struct Node* ptr){
    while(ptr != NULL){
        printf("%d ",ptr->data);
        ptr = ptr-> next;
    }
    printf("\n");
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


    return 0;
}