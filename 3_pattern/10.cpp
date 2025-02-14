#include<bits/stdc++.h>
using namespace std;

int main() {
    //rows=9=2n-1(n=5)
    //columns=5.
    //1st row-j should run once = i (n-4) n-(n-i)
    //6th row-j should run 4 times = (n-1) n-positive(n-i)
    int n=5;
    for(int i = 1; i <= 2*n-1; i++) {
        for(int j = 0; j < n-abs(n-i); j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}