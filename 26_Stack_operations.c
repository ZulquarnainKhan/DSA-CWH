#include<stdio.h>
#include<stdlib.h>

// SEARCHING AND OPERATIONS ARE DONE HERE FROM BOTTOM TO TOP GENERALLY

struct stack{
    int size;
    int top;
    int* arr;
};

int isEmpty(struct stack* ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct stack* ptr){
    if((ptr->top+1)==ptr->size){
        return 1;
    }
    else{
        return 0;
    }  
}

void push(struct stack* ptr,int val){
    if(isFull(ptr)){
        printf("Stack Overflow \n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}   

void pop(struct stack* ptr){
    if(isEmpty(ptr)){
        printf("Stack Overflow \n");
    }
    else{
        ptr->top--;
    }
}

int peek(struct stack* ptr,int pos){
    int val;
    val=ptr->arr[(pos-1)];
    return val;
}

void transversal(struct stack* ptr){
    
    if(isEmpty(ptr)){
        printf("Stack Underflow \n");
    }
    
    else{
        for(int i=0;i<=ptr->top;i++){
            printf("%d ",ptr->arr[i]);
        }
    }
}

int main(){
    struct stack *sp;
    sp->size=5;
    sp->top=-1;
    sp->arr= (int *)malloc(sp->size*sizeof(int));
    push(sp,10);
    push(sp,11);
    push(sp,12);
    push(sp,13);
    push(sp,14);
    push(sp,15);

    transversal(sp);
    printf("\n");
    int x,y;
    x=peek(sp,2);
    y=peek(sp,3);

    // pop(sp);
    // pop(sp);
    // pop(sp);
    // pop(sp);
    // pop(sp);
    
    // transversal(sp);
    printf("%d %d \n",x,y);
}