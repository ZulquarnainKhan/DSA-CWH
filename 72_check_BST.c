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

void inOrderTraversal(struct Node* root){
    if(root!=NULL){
        inOrderTraversal(root->left);
        printf("%d ",root->data);
        inOrderTraversal(root->right);
    }
}

int isBST(struct Node* root){
    static struct Node* prev = NULL;   // Only one time the value of prev Node is NULL other wise it continues or Not NULL  
    if(root!=NULL){
        if(!isBST(root->left)){
            return 0;
        }
        if(prev != NULL && root->data <= prev->data){
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else{
        return 1;
    }
}

int main(){
    struct Node* p;         // Creating root of the tree using double linked list
    p=createNode(4);
    
    struct Node* p1=createNode(2);
    struct Node* p2=createNode(6);       // Creating child of the tree   
    p->left=p1;
    p->right=p2;
    struct Node* p11=createNode(1);
    struct Node* p12=createNode(3);
    p1->left=p11;
    p1->right=p12;

/*  The BST will look like this
           4
          / \
         2   6
        / \
       1   3    
*/

    inOrderTraversal(p);  // LeftSubTree  Root  RightSubTree i.e ( 5 2 1 4 6 )
    printf("\n");
    printf("%d ",isBST(p));
 

    



    return 0;
}