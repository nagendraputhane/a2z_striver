#include<bits/stdc++.h>
using namespace std;

int main() {
    list<int> ls;
    ls.push_back(1);
    ls.push_back(2);
    ls.push_front(3);
    for(auto it : ls) {
        cout << it;
    }
    cout << endl;
    return 0;
}