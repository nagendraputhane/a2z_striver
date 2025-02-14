#include<bits/stdc++.h>
using namespace std;

int main() {
    for(int i = 0; i < 5; i++) {
        //j should print 5th -> 4th, 5th, 6th -> 
        //j should print 4 spaces and 1 star, 3 spaces and 3 stars, 2 spaces and 5 stars
        for(int j = 0; j < 5-i-1; j++) { 
            cout << ".";
        }
        for(int j = 0; j < (i*2)+1; j++) {
            cout << "*";
        }
        for(int j = 0; j < 5-i-1; j++) { 
            cout << ".";
        }
        cout << endl;
    }
    return 0;
}