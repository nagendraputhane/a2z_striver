#include<bits/stdc++.h>
using namespace std;

int main() {
    int x =10;              //2 billion, 4 bytes. long same. 10^9
    long long y = 1000000;  //10^4 trillion, 8 bytes. 10^12
    float x2 = 5.6;  //4 bytes
    double y2 = 9.9; //8 bytes

    //string and getline
    string s;
    cin >> s;
    cout << s << "\n";
    string str;
    getline(cin, str);
    cout << "Get line:" << str << "\n";

    char ch = 'g';
    cout << ch << "\n";
    return 0;
}