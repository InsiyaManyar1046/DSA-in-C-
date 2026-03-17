#include<iostream>
#include<string>
using namespace std;

//WAP to calculate sum and product of allthe numbers from array

int sum(int arr[], int size){
    int sum=0;
    for(int i=0; i<size; i++){
        sum=sum+arr[i];
    }
    return sum;
}

int product(int arr[], int size){
    int pro=1;
    for(int i=0; i<size; i++){
        pro=pro*arr[i];
    }
    return pro;
}

int main(){
    int arr[]={10,20,30};
    int size= sizeof(arr)/sizeof(int);

    cout<<"The sum of all elements : "<<sum(arr,size)<<endl;
    cout<<"The product of all elements : "<<product(arr,size)<<endl;
    return 0;
}