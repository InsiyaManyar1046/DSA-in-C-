#include<iostream>
#include<string>
using namespace std;

//pass by reference 
void change(int array[],int size){
    for(int i=0; i<size; i++){
        array[i]=2*array[i];
    }
}

int main(){
    int arr[]={10,20,30,40,50};
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    cout<<arr[3]<<endl;
    cout<<arr[4]<<endl;

    cout<<"Size of array :"<<sizeof(arr)<<endl;
    cout<<"Total variables in array :"<<sizeof(arr)/sizeof(int)<<endl;

    cout<<"To show the veriales using loop :\n";
    for(int i=0; i<sizeof(arr)/sizeof(int); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //Creating new array to find smallest and lagest number from it 
    int arr1[]={5,15,22,1,120,-15,24};
    int min1,max1;
    min1=max1=arr1[0];
    for(int i =0; i<sizeof(arr1)/sizeof(int); i++){
        if(arr1[i]>=max1){
            max1=arr1[i];
        }
        if(arr1[i] < min1) {
            min1 = arr1[i];  // update minimum
        }
    }
    cout<<"Maximum Value is :"<<max1<<endl;
    cout<<"Maximum Value is :"<<min1<<endl;

    //displaying min max using buit in function 
    int max_buit_in,min_buit_in;
    for(int i=0; i<sizeof(arr1)/sizeof(int); i++){
        max_buit_in=max(arr1[i],max1); //readymade function to find max between two values 
        min_buit_in=min(arr1[i],min1);
    }
    cout<<"Maximum Value using build in :"<<max_buit_in<<endl;
    cout<<"Maximum Value using build in :"<<min_buit_in<<endl;

    //displaying min max values with their index 
    int min2 = arr1[0];
    int max2 = arr1[0];
    int minIndex,maxIndex;
    minIndex=maxIndex=0;
    for(int i = 1; i <sizeof(arr1)/sizeof(int) ; i++) {
        if(arr1[i] > max2) {
            max2 = arr1[i];
            maxIndex = i;  // update index of max
        }
        if(arr1[i] < min2) {
            min2 = arr1[i];
            minIndex = i;  // update index of min
        }
    }
    cout << "Maximum Value is: " << max2 << " at index: " << maxIndex << endl;
    cout << "Minimum Value is: " << min2 << " at index: " << minIndex << endl;

    //pass by reference :- starting address of array get shared/passed to the function 
    change(arr,sizeof(arr1)/sizeof(int));
    cout<<"The values of array after multiplying with 2 :\n";
    for(int i=0; i<sizeof(arr)/sizeof(int); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
