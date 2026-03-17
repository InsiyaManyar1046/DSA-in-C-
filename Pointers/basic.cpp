
//Pointers : special variables that stors address of other variables

// Pointers : special variables that store address of other variables
#include<iostream>
#include<string>
using namespace std;

int main(){
    int a = 10;

    cout << "Address of variable a : " << &a << endl;

    // pointer to store the address of variable a
    int* ptr = &a;

    cout << "Address stored in pointer (address of a) : " << ptr << endl;

    cout << "Address of pointer variable : " << &ptr << endl;

    cout << "Value of a using pointer : " << *ptr << endl;

    //Pointer to pointer  : stores the address of another pointer
    int** ptr2= &ptr;
    cout << "Address stored in another pointer (address of ptr) : " << ptr2 << endl;
    cout << "Value of a using pointer to pointer : " << **ptr2 << endl;

    //derefference operator (*) : used to extract the value from address
    cout<<"VAalues of a : "<<*(&a)<<endl;

}