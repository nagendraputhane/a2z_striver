#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    v.push_back(3);
    v.emplace_back(4);
    v.push_back(5);
    for(auto it : v) {
        cout << it << endl; //1 2 3 4 5
    }
    vector<int> p(v);
    cout << p[0] << endl;

    vector<int>::iterator it = v.begin();
    cout << it[0] << endl << *(it) << endl;
    it++;
    cout << it[0] << endl << *(it) << endl;
    vector<int>::iterator end = v.end();
    end--;
    cout << *(end) << endl;
    vector<int>::reverse_iterator rbein = v.rbegin();
    cout << *(rbein) << endl;

    for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *(it);
    }
    cout << endl;
    for(auto it = v.begin(); it != v.end(); it++) {
        cout << *(it);
    }
    cout << endl;
    for(auto it : v) {
        cout << it;
    }
    cout << endl;

    v.insert(v.end(), 1, 6);
    for(auto it : v) {
        cout << it;
    }
    cout << endl;
    v.erase(v.end() - 1, v.end());
    for(auto it : v) {
        cout << it;
    }
    cout << endl;

    v.insert(v.begin(), 1, 0);
    for(auto it : v) {
        cout << it;
    }
    cout << endl;
    return 0;
}