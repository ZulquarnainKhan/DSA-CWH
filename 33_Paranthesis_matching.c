#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    char *arr; 
};

int isEmpty(struct stack *ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct stack *ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(struct stack *ptr,char c){
    if(isFull(ptr)){
        printf("Stack Overflow\n");
    }
    else{
        ptr->arr[ptr->top]=c;
        ptr->top++;
    }
}

char pop(struct stack* ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflow\n");
        return -1;
    }
    else{
        char c1=ptr->arr[ptr->top];
        ptr->top--;
        return c1;   
    }
}

int paranthesisMatch(char *exp){
    // Create and initialise the stack
    struct stack *sp;
    sp->size=100;
    sp->top=-1;
    sp->arr=(char*)malloc(sp->size*sizeof(char));

    for(int i=0; exp[i]!='\0';i++){
        if(exp[i]=='('){
            push(sp,exp[i]);    
        }
        else if(exp[i]==')'){
            if(isEmpty(sp)){
                return 0;
            }
            else{
                pop(sp);
            }  
        }
    }
    if(isEmpty(sp)){
        return 1;
    }
    else{
        return 0;
    }
}



int main(){
    char *exp="((8)((*--$$9))";
    if(paranthesisMatch(exp)){
        printf("The paranthesis is matching\n");
    }
    else{
        printf("The paranthsis is not matching\n");
    }


    return 0;
}