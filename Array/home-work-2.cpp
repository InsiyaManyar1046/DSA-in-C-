#include<iostream>
#include<string>
using namespace std;

//WAP to swap minimum and maximum number of array

void swapMinMax(int arr[], int size){
    int min1=arr[0];
    int max1=arr[0];
    int minIndex,maxIndex;
    minIndex=maxIndex=0;
    for(int i = 1; i<size; i++) {
        if(arr[i] > max1) {
            max1 = arr[i];
            maxIndex = i;  // update index of max
        }
        if(arr[i] < min1) {
            min1 = arr[i];
            minIndex = i;  // update index of min
        }
    }
    swap(arr[maxIndex],arr[minIndex]);
}
int main(){
    int arr[]={10,20,5,34,60};
    int size= sizeof(arr)/sizeof(int);

    cout<<"The array before swapping min max values : "<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    swapMinMax(arr,size);

    cout<<"The array after swapping min max values : "<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

}