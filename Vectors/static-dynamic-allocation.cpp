//Static vs Dynamic Allocation
//Static memory allocation occurs at compile time whereasa Dynamic at run time
//Static memory allocation uses stack memory for allocation whereas as Dynamic allocation uses heap memory for allocation
//Static example : int array[5]; , Dynamic example: vector<int> vec;

#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    //size is the number of elements currently stored
    //capacity is the total number of elements the vector can hold 
    
    cout<<"Size : "<<vec.size()<<endl;
    cout<<"Capacity : "<<vec.capacity()<<endl;

    vec.push_back(40);
    vec.push_back(50);
    cout<<"Size and Capacity after adding one more value :\n";
    cout<<"Size : "<<vec.size()<<endl;
    cout<<"Capacity : "<<vec.capacity()<<endl;

    return 0;
}