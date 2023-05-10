#include<iostream>
using namespace std;

class myArray{
    int total_size;
    int used_size;
    int *ptr;

    public:
        myArray(int tSize,int uSize){      // A constructor used to create an array
            total_size=tSize;
            used_size=uSize;
            ptr = new int [total_size];
        }

        void setValue(){
            for(int i=0;i<used_size;i++){
                cout<<"Enter the value of element "<<i+1<<endl;
                cin>>ptr[i];
            }
        }

        void show(){
            for(int i=0;i<used_size;i++){
                cout<<"The value of arr["<<i<<"] is "<<ptr[i]<<endl;
            }
        }
    
};

int main(){
    myArray marks(5,3);
    marks.setValue();
    marks.show();

    
    return 0;
}