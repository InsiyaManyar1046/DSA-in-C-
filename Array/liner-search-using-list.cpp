#include<iostream>
#include<string>
using namespace std;
//liner function to find target value , target=1
int liner_fun(int arr[], int size, int target){
    for(int i=0; i<size; i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1; // not found then return -1
}

int main(){
    int arr[]={10,20,8,-3,4,1,6};
    int target=1;
    cout<<"The index at which we found target: "<<liner_fun(arr, sizeof(arr)/sizeof(int), target);
    return 0;
}