//pass by reference using : pointer 
#include<iostream>
#include<string>
using namespace std;

void change(int a){ //pass by value any changed made here will not get reflect on main variable
    a=20;
}

void change1(int *b){//pass by reference any changed made in function will get affected in main variable
    *b=20;
}

void change2(int &c){//passing reference using alias
    c=20;
}
int main(){
    int a=10;
    change(a);
    cout<<"Inside main function a: "<<a<<endl;

    int b=10;
    change1(&b); //passing address of b 
    cout<<"Inside main fcuntion b: "<<b<<endl;

    int c=10;
    change2(c); 
    cout<<"Inside main fcuntion c: "<<b<<endl;
    return 0;
}



