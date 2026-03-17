#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string rW(string str){
    reverse(str.begin(), str.end());
    string words="";
    string result="";
    for(int i=0; i<str.length(); i++){
        if(str[i] !=' '){
            words=words+str[i];
        }
        else{
            reverse(words.begin(), words.end());
            result=result+words+' ';
            words="";
        }
    }
    reverse(words.begin(), words.end());
    result = result + words;
    return result;
}
int main(){
    string str="hello world";
    cout<<rW(str)<<endl;
}