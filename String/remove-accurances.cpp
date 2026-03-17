/*Given two strings s and part, perform the following operation on s until all occurrences of the substring part are removed:
Find the leftmost occurrence of the substring part and remove it from s.
Return s after removing all occurrences of part.
A substring is a contiguous sequence of characters in a string.

Example 1:
Input: s = "daabcbaabcbc", part = "abc"
Output: "dab" */

#include<iostream>
#include<string>
using namespace std;

void removeO(string &str, string part){
    while(str.length()>0 && str.find(part)<str.length()){
        str.erase(str.find(part), part.length());
    }
}
int main(){
    string str="daabcbaabcbc", part = "abc";
    cout<<"Original string "<<endl;
    cout<<str<<endl;

    removeO(str,part);

    cout<<"String after removing occurance :"<<endl;
    cout<<str<<endl;
}
