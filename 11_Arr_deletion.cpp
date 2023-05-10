#include<iostream>
using namespace std;

// CODE FOR TRAVERSAL IN AN ARRAY
void display(int array[],int n){    // Traversal of an array
    for(int i=0;i<n;i++){
        cout<<"The value at position "<<(i+1)<<" is "<<array[i]<<endl;
    }
    cout<<endl;
}

// CODE FOR DELETION IN AN ARRAY
void deletion(int array[],int total,int u_size,int posn){
    for(int i=(posn-1);i<u_size;i++){
        array[i]=array[i+1];
    } 
}

int main(){
    int total_size=100;
    int used_size=4;
    int arr[total_size] = {1,2,6,78};

    display(arr,4);

    int position;
    cout<<"Enter the position in array you want to delete "<<endl;
    cin>>position;

    deletion(arr,total_size,used_size,position);

    display(arr,3);

    return 0;
}