//attach & in the function -> takes the address
//arrays are passed by reference
#include<bits/stdc++.h>
using namespace std;

void values(int num) {
    num = num + 2;
}

void references(int &num) {
    num = num + 2;
}

void referenceArray(int arr[]) {
    for(int i = 0; i < 2; i++) {
        arr[i] = arr[i] + 2;
    }
}

int main() {
    int num = 5;
    values(num);
    cout << "After addition of 2 in function: " << num << endl;
    references(num);
    cout << "After addition of 2 in function: " << num << endl;

    int arr[2];
    cout << "Enter 2 values\n";
    cin >> arr[0] >> arr[1];
    referenceArray(arr);
    for(int i = 0; i < 2; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}