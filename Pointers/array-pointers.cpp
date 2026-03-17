#include<iostream>
#include<string>
using namespace std;
int main(){
    int arr[]={10,20,30};
    cout<<*arr<<endl;

    //arithmatic opertion on pointers
    int a=10;
    int *ptr=&a;
    cout<<ptr<<endl;
    ptr++;
    cout<<ptr<<endl;
    ptr--;
    cout<<ptr<<endl;

    return 0;
}