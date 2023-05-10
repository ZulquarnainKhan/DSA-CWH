#include<stdio.h>
#include<stdlib.h>

struct stack{
    int top;
    int size;
    char *arr;
};

int isEmpty(struct stack * ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct stack * ptr){
    if(ptr->top == ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}
void push(struct stack* ptr,char val){
    if(isFull(ptr)){
        printf("Stack Overflow\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}

char pop(struct stack * ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflow\n");
        return -1;
    }
    else{
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

char stackTop(struct stack* ptr){
    int val=ptr->arr[ptr->top];
    return val;
}

int match(char a,char b){
    if(a=='('&& b==')'){
        return 1;
    }
    if(a=='{'&& b=='}'){
        return 1;
    }
    if(a=='['&& b==']'){
        return 1;
    }
    else{
        return 0;
    }
}

int paranthesis_matching(char * exp){
    struct stack *sp;
    sp->size=100;
    sp->top=-1;
    sp->arr = (char*)malloc(sp->size*sizeof(char));

    char popped_ch;
    for(int i=0;exp[i]!='\0';i++){
        if(exp[i]=='(' || exp[i]=='[' || exp[i]=='{'){
            push(sp,exp[i]);
        }
        else if(exp[i]==')'|| exp[i]==']'|| exp[i]=='}'){
            if(isEmpty(sp)){
                return 0;
            }
            //popped_ch=pop(sp);
            if(!match(stackTop(sp),exp[i])){
                    return 0;        
            }
            if(match(stackTop(sp),exp[i])){
                popped_ch=pop(sp);
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
    char * exp="[a-6]((8){(9-8)})";
    if(!paranthesis_matching(exp)){
        printf("The parenthesis is not balanced\n");
    }
    else{
        printf("The parantheisis is balanced\n");
    }
    return 0;
}