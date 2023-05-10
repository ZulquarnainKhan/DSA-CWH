#include<iostream>
using namespace std;

// ---------- CODE FOR LINEAR SEARCHING IN AN ARRAY ----------

void Lsearch(int arr[],int s,int u_size){
    int count;
    int i;
    for(int i=0;i<u_size;i++){
        if(s==arr[i]){
            count=1;
            break;
        }
        else{
            continue;
        }
    }
    if(count==1){
        cout<<"The entered value is present in array  "<<endl;
    }
    else{
        cout<<"The entered number is not present in the array "<<endl;
    }


}

int main(){
    int snum, used_size;
    used_size=7;

    int arr[10]={1,2,3,4,5,6,7};

    cout<<"Enter the element you want to search "<<endl;
    cin>>snum;

    Lsearch(arr,snum,used_size);


    return 0;
}