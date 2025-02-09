//Write a program that takes an input of age
//and prints if you are adult or not
#include<bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cout << "Please enter your age: ";
    cin >> x;
    if(x >= 18) {
        cout << "You are an adult" << "\n";
    }
    else {
        cout << "You are not an adult" << "\n";
    }
}