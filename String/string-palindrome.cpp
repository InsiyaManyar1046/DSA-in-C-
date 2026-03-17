#include<iostream>
#include<string>
using namespace std;

//first way using two pointers
/*
bool isPalindrome(string str){
    int start=0;
    int end=str.size()-1;
    for(int i=0; i<str.size()/2; i++){
        if(start<=end){
            if(str[start]!=str[end]){
                return false;
                break;
            }
        }
        start++;
        end--;
    }
    return true;
}
int main(){
    string str="level";
    if(isPalindrome(str)){
        cout<<"The string is pallindrome"<<endl;
    }
    else {
        cout<<"Not palindrome "<<endl;
    }

} */

//second way using reverse string 
string reverseStr(string str){
    int start=0;
    int end=str.size()-1;
    for(char val : str){
        if(start<end){
            swap(str[start++],str[end--]);
        }
    }
    return str;
}
int main(){
    string str="Madam";
    string rev=reverseStr(str);
    
    //to convert both string into lower case 
    for(char &val : str){
        val=tolower(val);
    }
    for(char &val1: rev){
        val1=tolower(val1);
    }

    //Checking palindrome
    if(str==rev){
        cout<<"The string is pallindrome"<<endl;
    }
    else {
        cout<<"Not palindrome "<<endl;
    }
}

