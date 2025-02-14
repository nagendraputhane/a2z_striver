//rows=n=5
//columns=print 1 if odd, 0 if even
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 5;
    for(int i = 1; i <= n; i++) {
        int k = 1;
        for(int j = 1; j <= i; j++) {
            if(i % 2 == 1) { //if row is odd
                int a = k % 2; //start with 1
                k++;
                cout << a;
            }
            if(i % 2 == 0) { //if row is even
                int a = k % 2; //start with 0
                a = abs(a - 1);
                k++;
                cout << a;
            }
        }
        cout << endl;
    }
    return 0;
}