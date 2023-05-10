#include<stdio.h>
#include<stdlib.h>

struct Node{            // Tree using Double linked list
    int data;
    struct Node *right;
    struct Node *left;
};

struct Node* createNode(int d){
    struct Node *n ;
    n = (struct Node *)malloc(sizeof(struct Node));
    n->data=d;
    n->right=NULL;
    n->left=NULL;
    return n;
}

int main(){
    struct Node* p;     // Creating root of the tree using double linked list
    p=createNode(10);
    
    struct Node* p1; struct Node* p2;        // Creating child of the tree
    p1=createNode(4);
    p2=createNode(6);


    p->left=p1;
    p->right=p2;
    



        return 0;
}