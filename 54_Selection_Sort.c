/*Selection Sort: Simply get the minimum element and swap at first
                  Then again get minimum element excluding the first and swap it at second postion.
                  Continue until we reach a sorted array
                  
  Total passes = n-1
  Total comparitions = n-1    // Here we have least no swaps
  Worst case senario O(n^2)
  Best case senario O(n^2)    // As non-adaptive and cannot be made adaptive
  It is non-stable 
  It is non-adaptive
*/ 

#include<stdio.h>

void selectionSort(int * a, int n){
    
    for(int i=0;i<n-1;i++){
        int indexMin=i;
        
        for(int j=i+1 ; j<n ; j++){
            if(a[j] < a[indexMin]){
                indexMin=j;
            }
        }

        // Swapping a[i] and a[indexMin]

        int temp=a[i];
        a[i]=a[indexMin];
        a[indexMin]=temp;
    }
}

void print(int * a , int b){
    for(int i=0;i<b;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

int main(){
    int arr[]={10,7,6,9,15,5,11};
    int n=7;
    print(arr,n);
    selectionSort(arr,n);
    print(arr,n);

    return 0;
}
