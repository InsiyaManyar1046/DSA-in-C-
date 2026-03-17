//Vector are the dynamic array: to use vector we have to add it's header file at the top as "#inculde<vector>
//syntax
//1) vector<datatypes> vector_name ; eg: vector<int> vec;
//2) vector<datatype> vector_name={....}; eg: vector<int> vec={10,20,30};
//3) vector<datatype> vector_name(size_of_vector , value); eg :vector<int> vec(3,0);
// Inside the for loop the iteratoe will gonna store value of i insted the index number of vector 

#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    //vector of intiger number 
    vector<int> vec={10,20,30};
    cout<<vec[0]<<endl;

    vector<int> vec1(3,0);
    cout<<"The valuedof vector when we provide size and value :\n";
    cout<<vec1[0]<<" "<<vec1[1]<<" "<<vec1[2]<<endl;

    //Accessing elements using for loop
    vector<int> vec2(4,1);
    cout<<"The intiger value of vector using for loop \n";
    for(int i : vec2){
        cout<<i<<" ";
    }cout<<endl;

    //Character type of vector 
    vector<char> vec3={'a','b','c','d'};
    cout<<"The character value of vector using for loop \n";
    for(char val : vec3){
        cout<<val<<" ";
    }cout<<endl;
    return 0;
}