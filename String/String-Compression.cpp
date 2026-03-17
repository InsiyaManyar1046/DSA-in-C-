/*Input: chars = ["a","a","b","b","c","c","c"]
Output: 6 
Explanation: The groups are "aa", "bb", and "ccc". This compresses to "a2b2c3". */

#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int compress(string &str){
    int n=str.length();
    int index=0;

    for(int i=0; i<n;i++){
        char ch=str[i];
        int count=0;

        while(i<n && str[i]==ch){
            count++; i++;
        }
        if(count==1){
            str[index++]=ch;
        }
        else {
            str[index++]=ch;
            string x=to_string(count);
            for(char val : x){
                str[index++]=val;
            }
        }
        i--;
    }
    return index;
}
int main(){
    string str="aabbccc";
    int len =compress(str);
    cout<<"Compressed String : " << str.substr(0,len) << endl;
    cout<<"Length : "<<len<<endl;
}