#include<iostream>
#include<string>
using namespace std;
int main(){
    int* ptr;
    cout<<ptr<<endl; //we did not assign any value to pointer still it will give an address of that pointer
    
    //null pointer 
    int *ptr2=NULL;
    cout<<ptr2<<endl;
    return 0;
}
