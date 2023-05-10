#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int element){
    int mid , low , high , flag, posn;
    low=0;
    high=size-1;

    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==element){
            flag=1;
            posn=mid;
            break;
        }
        else if(arr[mid]<element){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    if(flag==1){
        cout<<"The entered element is present in array at "<<posn+1<<endl;
    }
    else{
        cout<<"The entered element is not present in the array"<<endl;
    }
}

int main(){
    int t_size=100;
    int u_size=9;
    int arr[100]={11,22,33,44,55,66,77,88,99};

    int a;
    cout<<"Enter an integer "<<endl;
    cin>>a;

    binarySearch(arr,u_size,a);
    

    return 0;
}