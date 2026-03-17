//Vector functions:-
//1) size 
//2) push_back
//3) pop_back
//4) front
//5) back
//6) at

#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    // size()
    vector<char> vec={'a','b','c','d','e'};
    cout<<"Size : " << vec.size()<<endl;

    // push_back : to push values in vector at the end
    vector<int> vec1;
    cout<<"Size (before adding value) : "<<vec1.size()<<endl;
    vec1.push_back(10);
    vec1.push_back(20);
    vec1.push_back(30);
    cout<<"Size (after adding value): "<<vec1.size()<<endl;

    //pop_back : to delete from back
    vec1.pop_back();
    cout<<"Size (after deleting value): "<<vec1.size()<<endl;

    //front : to access first value from vector
    cout<<"First value: "<<vec.front()<<endl;

    //back : to access last value from vector
    cout<<"Last value: "<<vec.back()<<endl;

    //at : to access value at particular index
    cout<<"Value at particular index :"<<endl;
    cout<<vec.at(0)<<endl;
    cout<<vec.at(4)<<endl;
    
    return 0;
}
