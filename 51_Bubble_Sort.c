/*Bubble Sort: Simply keep arranging the array until you reach at last (0 to n-1) getting the maximum element at last.
               Then start to arrange elemnts from (0 to n-2) and keep maximum  element at 2nd last
               And keep continueing the passes till (n-1) until you reach the sorted array.

  Total passes = n-1
  Total comparitions = 1+2+3++4 ... + n-1 = (n-1)(n)/2
  Worst case senario O(n^2)
  Best case senario O(n)
  It is stable 
  It is non-adaptive But can be made adaptive
*/ 

#include<stdio.h>

void print(int *a, int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

void bubbleSort(int *a, int n){
    for(int i=0;i<n-1;i++){        // For no of passes (n-1)
        for(int j=0;j<n-i-1;j++){  // Comparing element of each passes 
            int temp;
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        
    }
}

void correctBubbleSort(int *a, int n){
    for(int i=0;i<n-1;i++){
        for(int j=n-1;j>i;j--){
            if(a[j]<a[j-1]){
                int t=a[j];
                a[j]=a[j-1];
                a[j-1]=t;
            }
        }
    }
}

void adaptiveBubbleSort(int *a, int n){
    int flag;
    for(int i=0;i<n-1;i++){        // For no of passes (n-1)
        flag=1;
        printf("Pass %d ",i+1);
        for(int j=0;j<n-i-1;j++){  // Comparing element of each passes 
            int temp;
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=0;
            }
        }
        printf("\n");
        if(flag){     // if flag == 1 then true if true we will wither break or return 
            //break;
            return;
        }
        
    }
}

int main(){
    int n=7,n1=5;
    int arr[]={10,7,6,9,15,5,11};
    int arr2[]={1,2,4,3,5};
    print(arr,n);
    // bubbleSort(arr,n);   // Normally bubble sort is not adaptive but we need to make it adaptive.
    // print(arr,n);
    bubbleSort(arr,n);   // Normally bubble sort is not adaptive but we need to make it adaptive.
    print(arr,n);
    // adaptiveBubbleSort(arr2,n1);   // If the loop is already sorted before a perticular pass tthen no nedd to continue the operation
    // print(arr2,n1);
    return 0;
}