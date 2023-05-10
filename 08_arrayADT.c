#include<stdio.h>
#include<stdlib.h>

struct myArray{
    
    int total_size;   // We must make an array that has size more than the number of elements in array (To Reserve memory)
    int used_size;    // No of elements in that array (Memory to be used)
    int *ptr;

};

void createArray(struct myArray *ptr1,int tSize , int uSize){
    (*ptr1).total_size = tSize;
    (*ptr1).used_size = uSize;
    (*ptr1).ptr = (int *) malloc(tSize * sizeof(int));      // malloc is same as new operator

    // ptr1->total_size = tSize;
    // ptr1->used_size = uSize;                             // Both are same we can use both
    // ptr1->ptr = (int *) malloc(tSize * sizeof(int));
}

void show(struct myArray *ptr2){
    for(int i=0 ; i<(*ptr2).used_size ; i++){
        printf("marks[%d] is %d \n",i,(*ptr2).ptr[i]);
    }
}

int main(){
    struct myArray marks;
    createArray(&marks,100,20);
    show(&marks);

    return 0;
}