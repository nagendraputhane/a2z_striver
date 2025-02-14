//rows - 5 (0-4)
//columns - 9 - 2*1+1
//first row - 9 * -> i will be 0. (n-i)*2-1
    //5-0*2-1=9;5-1*2-1=7.
//first row - 0 spaces - print i spaces
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 5;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) {
            cout << ".";
        }
        for(int j = 0; j < (n-i)*2-1; j++) { 
            cout << "*";
        }
        for(int j = 0; j < i; j++) {
            cout << ".";
        }
        cout << endl;
    }
    return 0;
}

//last pattern was 2i+1 = 1,3,5
//here it is reduing to 1, so total is 2n = so 2n - 2i+1