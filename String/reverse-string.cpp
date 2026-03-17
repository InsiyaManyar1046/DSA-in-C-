#include<iostream>
#include<string>
#include<algorithm>   // required for reverse()

using namespace std;

void reverseStr(string &str){
    int start=0;
    int end=str.length()-1;
    for(char val : str){
        if(start <= end){
            swap(str[start],str[end]);
            start++;
            end--;
        }
    }
}
int main(){
    string str="insiya";
    cout<<"The original string : "<<str<<endl;
    reverseStr(str);
    cout<<"The reversed string : "<<str<<endl;

    //other way to reverse string using buid in function
    string str1="maaz";
    cout<<"The original string : "<<str1<<endl;
    reverse(str1.begin(), str1.end());
    cout<<"The reversed string : "<<str1<<endl;
    
}