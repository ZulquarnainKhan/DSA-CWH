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

struct Node* SearchBST(struct Node* root,int key){
    if(root==NULL){
        return NULL;
    }
    if(root->data==key){
        return root;
    }
    else if(root->data > key){
        return SearchBST(root->left,key);
    }
    else if(root->data < key){
        return SearchBST(root->right,key);
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

struct Node* IterSearch(struct Node* root,int key){
    while(root != NULL){
        if(root->data==key){
            return root;
        }
        else if(root->data > key){
            return IterSearch(root->left,key);
        }
        else{
            return IterSearch(root->right,key);
        }
    }
    return NULL;    // If the root is NULL from start then it will not enter the while loop and thus we have to return NULL
}

int main(){
    struct Node* p;         // Creating root of the tree using double linked list
    p=createNode(50);
    
    struct Node* p1=createNode(40);
    struct Node* p2=createNode(60);       // Creating child of the tree   
    p->left=p1;
    p->right=p2;
    struct Node* p11=createNode(30);
    struct Node* p12=createNode(45);
    p1->left=p11;
    p1->right=p12;
    struct Node* p21=createNode(55);
    struct Node* p22=createNode(70);
    p2->left=p21;
    p2->right=p22;

/*  The BST will look like this
           50
         /    \
        40     60
       / \    /  \      
      30 45  55  70         
*/
    int key;
    printf("Enter the element you want to find: \n"); scanf("%d",&key);
    struct Node* n=IterSearch(p,key);
    if(n != NULL){
        printf("Element Found : %d \n",n->data);
    }
    else{
        printf("Element Not Found \n");
    }
    
 
    return 0;
}