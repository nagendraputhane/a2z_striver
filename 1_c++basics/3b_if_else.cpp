#include<bits/stdc++.h>
using namespace std;

int main() {
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;
    if(marks < 25) {
        cout << "F" << "\n";
    }
    else if(marks >= 25 && marks < 45) {
        cout << "C" << "\n";
    }
    else if(marks < 80) { //already checked till 45, so no need of checking it again
        cout << "B" << "\n";
    }
    else if(marks <= 100) {
        cout << "A" << "\n";
        if(marks > 90) {
            cout << "You are AIR 1" << "\n";
        }
    }
    return 0;
}