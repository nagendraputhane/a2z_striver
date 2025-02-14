#include<bits/stdc++.h>
using namespace std;

void printPattern() {
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            //connect - 5 enteries for each row
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    printPattern();
    return 0;
}