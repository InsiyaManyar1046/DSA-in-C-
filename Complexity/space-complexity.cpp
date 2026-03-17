#include <iostream>
using namespace std;

//O(1)–Constant Space:The program uses only a few variables, so memory does not depend on input size.
int main() {
    int a = 10;
    int b = 20;
    int sum = a + b; //Space Complexity = O(1)

    cout << sum;  
    return 0;
}

//O(n) – Linear Space : Memory increases with input size n.
int main() {
    int n;
    cin >> n;       // space complexity = O(n)
    int arr[n];      // array size depends on n

    for(int i = 0; i < n; i++) {
        arr[i] = i;
    }

    return 0;
}
