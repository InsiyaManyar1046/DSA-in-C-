#include<iostream>
#include<string>
using namespace std;

//reversig an array inside orignal array not in other copy 
//Two pointer object 

void reverse(int arr[], int size){
    int start=0;
    int end=size-1;
    cout<<end;
    for(int i=0; i<size; i++){
        if(start<=end){
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
}
int main(){
    int arr[]={10,20,30,40,50};
    int size=sizeof(arr)/sizeof(int);

    cout<<"The array value before reverse : "<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    reverse(arr, size);

    cout<<"The array value after reverse : "<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}