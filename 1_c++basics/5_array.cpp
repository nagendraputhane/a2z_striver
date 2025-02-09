#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[3];
    cin >> arr[0] >> arr[1];
    arr[2] = 2;
    cout << arr[0] << "\n" << arr[1] << "\n" << arr[2] << "\n";

    //2D array
    int arrtwo[3][5]; //3 five boxes
    arrtwo[2][4] = 45;
    cout << "\n" << arrtwo[2][4] << "\n";

    string s = "Striver";
    int len = s.size();
    cout << "Original text: " << s << "\n";
    s[len - 1] = 'z';
    cout << "New text: " << s << "\n";

    return 0;
}