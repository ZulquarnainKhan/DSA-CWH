#include<stdio.h>
#include<stdlib.h>

// SEARCHING AND OPERATIONS ARE DONE HERE FROM TOP TO BOTTOM 

struct Node{                             //   |       |
    int data;                            //   |       |    // ptr pointing downwards
    struct Node* next;                   //   |  top  |    // Next of first(at bottom) pointer is null
                                         //   |   |   |
};                                       //   |___n2__|
                                         //       |
void traversal(struct Node* ptr){      //     n1=NULL          
    while(ptr != NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}

int isEmpty(struct Node* top){
    if(top==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct Node* top){
    struct Node* p = (struct Node*)malloc(sizeof(struct Node*));    
    if(p==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

struct Node* push(struct Node* top,int val){
    if(isFull(top)){
        printf("Stack Overflow \n");
    }
    else{
        struct Node* n = (struct Node*)malloc(sizeof(struct Node*));
        n->data=val;
        n->next=top;    // n->next = NULL
        top=n;          // top increased itself upwards
        return top;
    }
    
}

struct Node* pop(struct Node* top){
    if(isEmpty(top)){
        printf("Stack Underflow \n");
    }
    else{
        struct Node* n = (struct Node*)malloc(sizeof(struct Node*));
        n=top;
        top=n->next;   // Top came downward
        free(n);
        return top;
    }
    
}

int peek(struct Node* ptr,int pos){
    for(int i=1;i<pos;i++){
        ptr=ptr->next;
    }
    int val=ptr->data;
    return val;
}

int main(){
    struct Node* top=NULL;

    traversal(top);
    
    top=push(top,10);
    top=push(top,11);
    top=push(top,12);
    top=push(top,13);
    
    traversal(top);

    // top=pop(top);
    // top=pop(top);
    // transversal(top);
    int value=peek(top,2);
    printf("%d \n",value);

    return 0;
}