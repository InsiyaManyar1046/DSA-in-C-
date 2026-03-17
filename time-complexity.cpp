#include<iostream>
#include<string>
using namespace std;
//Example of liner time complexity
int main(){
    int n,m;
    cout<<"enter values of n and m :\n";
    cin>>n>>m;

    for(int i =0; i<=n; i++){ //time complexity = o(n)
        cout<<i<<endl;
    }

    for(int i =0; i<=m; i++){ //time complexity = o(m)
        cout<<i+1<<endl; 
    }

    for(int i =0; i<5*n; i++){ //time complexity = o(n)
        cout<<i<<endl;
    }
    return 0;
    //Total time complexity = o(n)+o(m)+o(n) = o(n+m)
}

//Example of constant time complexity
int main(){

    for(int i=0; i<10; i++){ //time complexity = o(10) => o(1)
        cout<<i<<" ";
    }

    int n=7;
    for(int i =0; i<=n; i++){ //time complexity = o(7) => o(1)
        cout<<n<<" ";
    }
    return 0;
}

//Example of quadratic time complexity
int main(){
    int n,m;
    cout<<"Enter value of n and m :"<<endl;
    cin>>n>>m;

    for(int i=0; i<=n; i++){ //time complexity = o(n*2)
        for(int j=0; j<=m; j++){
            cout<<i*j<<endl;
        }
    }

    for(int i=0; i<n*n; i++){ //time complexity = o(n*2)
        cout<<i<<endl;
    }
}

//Example of logirithmic time complexity
int main(){
    int n,m;
    cout<<"Enter value of n and m :"<<endl;
    cin>>n>>m;
    for(int i=0; i<n*n; i=i*2){ //time complexity = O(log2(n))
        cout<<i<<endl;
    }

    for(int i=0; i<n*n; i=i*3){ //time complexity = O(log3n)
        cout<<i<<endl;
    }

    for(int i=0; i<n*n; i=i*m){ //time complexity = O(logm(n))
        cout<<i<<endl;
    }
}

//Example of exponential time complexity
#include <iostream>
using namespace std;

int main() {
    int n = 3;

    for(int i = 1; i <= (1 << n); i++) { //time complexity = O(2ⁿ)
        cout << i << " ";
    }
    //(1 << n) means 2ⁿ
    //If n = 3, loop runs 2³ = 8 times.
    return 0;
}

//Example of logirithmic time complexity
int main(){
    int n,m;
    cout<<"Enter value of n and m :"<<endl;
    cin>>n>>m;
    for(int i=0; i<n*n; i++){// runs n times
        for(int j = 1; j < n; j = j * 2) { // runs log n times
            cout << i << " " << j << endl;
        }
    }//time complexity = o(n logn)
    return 0;
}


