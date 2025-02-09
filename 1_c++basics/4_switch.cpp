#include<bits/stdc++.h>
using namespace std;

int main() {
    int day;
    cin >> day;

    switch(day) {
        case 1:
            cout << "Monday" << "\n";
            break;
        case 2:
            cout << "Tuesday" << "\n";
            break;
        default:
            cout << "Not a day of the week" << "\n";
    }
    return 0;
}