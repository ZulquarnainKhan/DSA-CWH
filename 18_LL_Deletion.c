#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void LLtransversal(struct Node* ptr){
    //ptr=(struct Node*)malloc(sizeof(struct Node));   // We shall not write this.
    
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    
    printf("\n");
}

struct Node* deleteAtFirst(struct Node* head){
    struct Node* ptr = head;
    head=head->next;
    free(ptr);
    return head;
}

struct Node* deleteAtEnd(struct Node*head){
    struct Node* ptr=head;
    struct Node* q=head->next;
    
    while(q->next !=NULL){
        ptr=ptr->next;
        q=q->next;
    }
    ptr->next=NULL;
    free(q);

}

struct Node* deleteAtNode(struct Node* head,int posn){
    struct Node* ptr=head;
    for(int i=1;i<posn-1;i++){
        ptr=ptr->next;
    }
    struct Node* q= ptr->next;
    ptr->next=q->next;
    free(q);
}

int main(){
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* forth;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    forth = (struct Node*)malloc(sizeof(struct Node));

    head->next=second;
    head->data=10;
    second->next=third;
    second->data=11;
    third->next=forth;
    third->data=12;
    forth->next=NULL;
    forth->data=13;

    LLtransversal(head);

    // head=deleteAtFirst(head);

    // LLtransversal(head);

    // deleteAtNode(head,2);

    // LLtransversal(head);

    deleteAtEnd(head);

    LLtransversal(head);


    return 0;

}