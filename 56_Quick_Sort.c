/* Quick Sort:
    Best case : O(n.logn)
    Worst case : O(n^2)     // When the array is already sorted, it will give the worst case senario
    avg case : O(n.logn)
    Non-Adaptive 
    Non-Stable
    Inplace algorithm as it doesnot takes extra space

*/

/* Partitioning process:
    1)i = low
    2)j = high
    3)pivot > low
    4)i++ until element > pivot, is found
    5)j-- until element <= pivot, is found 
    6)Swap a[i] and a[j] and repeat 4 and 5 until (j<=i)
    7)Swap pivot and A[j]

*/
#include<stdio.h>

void print(int * a ,int n){
    for (int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

int partition(int *a ,int low ,int high){
    int pivot = a[low];
    int i=low+1;
    int j=high;
    int temp;

    do{
        while(a[i]<=pivot){
            i++;
        }
        while(a[j]>pivot){
            j--;
        }
        if(i<j){       // Swapping a[i] and a[j] at the time i and j crosses each other
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }while(i<j);

    // Swap a[low] and a[j] 
    temp=a[low];
    a[low]=a[j];
    a[j]=temp;
    return j;
}

void quickSort(int * a , int low , int high){
    int partitionIndex;   // Index of pivot after partition
    if(low<high){
        partitionIndex = partition(a,low,high);
        quickSort(a,low,partitionIndex-1);  // Sort left Subarray
        quickSort(a,partitionIndex+1,high); // Sort right Subarray

    }
}

int main(){
    int arr[]={10,7,6,9,15,5,11};
    int n=7;
    print(arr,n);
    quickSort(arr,0,n-1);
    print(arr,n);

    return 0;
}