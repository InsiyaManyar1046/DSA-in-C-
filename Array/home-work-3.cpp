#include<iostream>
#include<string>
using namespace std;

//WAP to print all unique values from array

void unique_val(int arr[], int size){
    for(int i=0; i<size; i++){
        int count=0;
        for(int j=0; j<size; j++){
            if(arr[i]==arr[j])
                count++;
        }
        if(count==1){
            cout<<arr[i]<<" ";
        }
    }
}
int main(){
    int arr[]={10,20,30,40,20,10};
    int size= sizeof(arr)/sizeof(int);

    cout<<"The unique values aer : \n";
    unique_val(arr,size);
    return 0;
}