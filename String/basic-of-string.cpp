#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="insiya manyar"; //dynamic in nature => runtime resize 
    cout<<str<<endl;

    str="hello"; //can be updated , we can't use same name of variable in char or it is non updatable
    cout<<str<<endl;

    //concatination
    string str1="Zeal";
    string str2="College";
    string str3=str1+str2;
    cout<<str3<<endl;

    //check of two string are equal
    cout<<(str1==str2)<<endl;

    //lenght of string
    cout<<"Lenght : "<<str1.length()<<endl;

    //lopp to show each elemet from string 
    for(char val:str){
        cout<<val<<" ";
    }cout<<endl;
    return 0;
}
