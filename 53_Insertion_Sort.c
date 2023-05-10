/*Insertion Sort: The elment asks the prevoius elemenets if they are larger or smaller then itself
                  if element is greater then swap postion with it until a smaller element appears
                  And the passes continue until it we get sorted array.
                  
  Total passes = n-1
  Total comparitions = 1+2+3++4 ... + n-1 = (n-1)(n)/2
  Worst case senario O(n^2)
  Best case senario O(n)
  It is stable 
  It is adaptive
*/ 

#include<stdio.h>

// void insertionSort(int * a, int n){
//     for(int i=0;i<n-1;i++){
//         for(int j=i;j>=0;j--){
//             if(a[j+1]<a[j]){
//                 int temp=a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=temp;
                
//             }
//         }
//     }
// }


// ====================== Do it this way =============================
void insertion(int * a, int n){
    for(int i=1;i<n;i++){
        int t=a[i];
        int j;
        for(j=i-1;j>=0;j--){
            if(a[j] > t){
                a[j+1] = a[j];          
            }
            else{
                break;
            }
        }
        a[j+1] = t;
        printf("\n");
        // printf("%d ", a[j+1]);
        
    }
}

void print(int * a , int b){
    printf("\n");
    for(int i=0;i<b;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

int main(){
    int arr[]={10,7,6,9,15,5,11};
    int n=7;
    print(arr,n);
    // insertionSort(arr,n);
    insertion(arr,n);

    print(arr,n);

    return 0;
}