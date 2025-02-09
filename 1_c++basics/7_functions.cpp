//void -> doesn't return anything
//parametrized -> send parameters
//retrun -> returns values
#include<bits/stdc++.h>
using namespace std;

void printName(string name) {
    cout << "Hey " << name << "\n";
}

int printSum(int num1, int num2) {
    return num1 + num2;
}

int main() {
    string name;
    cout << "Enter your name\n";
    cin >> name;
    printName(name);

    int num1, num2, sum;
    cout << "Enter two numbers\n";
    cin >> num1 >> num2;
    sum = printSum(num1, num2);
    cout << "Sum is: " << sum << "\n";
    return 0;
}