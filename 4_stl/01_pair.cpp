#include<bits/stdc++.h>
using namespace std;

int main() {
    pair<int, int> p = {1, 3};
    cout << p.first << endl;
    pair<int, pair<int, int>> q = {1, {2, 3}};
    cout << q.second.first << endl;
    return 0;
}