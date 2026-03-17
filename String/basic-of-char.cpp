#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str[] = "hello";

    // Counting length of string
    cout << "Length of string : " << strlen(str) << endl;

    // Take input from user as char array
    /*char str1[15];
    cout << "Enter char array: ";
    cin >> str1;
    cout << "Output : " << str1 << endl;*/

    // If user enters "hello world", cin will only store "hello"
    // because cin stops reading after whitespace.

    // Using getline to read full line including spaces
    char str2[15];
    cout << "Enter string : ";
    cin.getline(str2,100);
    cout << "Output : " << str2 << endl;

    //accesing each char from string
    cout<<"The characters are : "<<endl;
    for(char val:str2){
        cout<<val<<" ";
    }cout<<endl;

    //accesing each char from string using another way 
    //i<str[i] != '\0' here '\0' denoted last value of string
    for(int i=0; i<str[i] != '\0'; i++){
                cout<<str2[i]<<" ";
    }
    return 0;
}