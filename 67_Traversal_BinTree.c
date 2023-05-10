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

void preOrderTraversal(struct Node* root){
    if(root!=NULL){
        printf("%d ",root->data);
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }
}

void postOrderTraversal(struct Node* root){
    if(root!=NULL){
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        printf("%d ",root->data);
    }
}

void inOrderTraversal(struct Node* root){
    if(root!=NULL){
        inOrderTraversal(root->left);
        printf("%d ",root->data);
        inOrderTraversal(root->right);
    }
}

int main(){
    struct Node* p;         // Creating root of the tree using double linked list
    p=createNode(4);
    
    struct Node* p1;
    struct Node* p2;        // Creating child of the tree
    p1=createNode(1);
    p2=createNode(6);
    p->left=p1;
    p->right=p2;
    struct Node* p11=createNode(5);
    struct Node* p12=createNode(2);
    p1->left=p11;
    p1->right=p12;

/* Finally the tree will look like this
           4
          / \
         1   6
        / \
       5   2    
*/

    preOrderTraversal(p);  // Root  LeftSubTree  RightSubTree i.e ( 4 1 5 2 6 )
    printf("\n");
    postOrderTraversal(p);  // LeftSubTree  RightSubTree  Root  i.e ( 5 2 1 6 4 )
    printf("\n");
    inOrderTraversal(p);  // LeftSubTree  Root  RightSubTree i.e ( 5 2 1 4 6 )
    printf("\n");
 

    



    return 0;
}