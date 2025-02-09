//Write a program that takes an input of age
//and prints if you are adult or not
#include<bits/stdc++.h>
using namespace std;

int main() {
    int age;
    cout << "Please enter your age: ";
    cin >> age;
    if(age >= 18) {
        cout << "You are an adult" << "\n";
    }
    else {
        cout << "You are not an adult" << "\n";
    }
    return 0;
}