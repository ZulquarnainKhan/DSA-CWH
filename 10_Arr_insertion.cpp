#include<iostream>
using namespace std;

// -------------Traversal and insertion in an array---------------

// CODE FOR TRAVERSAL IN AN ARRAY
void display(int array[],int n){    // Traversal of an array
    for(int i=0;i<n;i++){
        cout<<"The value at position "<<(i+1)<<" is "<<array[i]<<endl;
    }
    cout<<endl;
}

// CODE FOR INSERTIONN IN AN ARRAY

void insert(int array[],int total,int u_size,int l,int v){     // Insertion in an Array
    
    for(int i=(total-1);i>=(l-1);i--){
        array[i+1]=array[i];
    }
    array[(l-1)] = v;

}

int main(){
    int total_size=100;
    int used_size=4;
    int arr[total_size] = {1,2,6,78};
    display(arr,4);

    int location,value;
    cout<<"Enter the position you want to insert a number in an array "<<endl;
    cin>>location;
    cout<<"Enter the value you want to enter "<<endl;
    cin>>value;

    insert(arr,total_size,4,location,value);
    used_size++;
    
    display(arr,used_size);

    return 0;
}