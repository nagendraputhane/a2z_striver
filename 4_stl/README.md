The C++ STL is divided into 4 parts:
1. Algorithms
2. Containers
3. Functions
4. Iterators

Pairs: (data type)

    Part of utility lib.

    pair<int, int> p = {1, 3};

        p.first, p.second;

    pair<int pair<int, int>> p = {1, {1, 3}}

    pair<int, int> arr[2] = {{1, 2}, {3, 4}}; //array of pairs.

        arr[1].second;

Vectors: (Container)

    arrays are constant in size, thus can't modify its size afterwards.

    Vector - dynamic in nature.

    vector<int> v;      //creates empty container

    v.push_back(1);     //pushes values to vector

    v.emplace_back(2)   //dynamically increases size and inserts 2 in the back. //faster than push_back

    vector<pair<int, int>> v;

    vector<int> v(5, 100);  //{100, 100, 100, 100, 100}

    vector<int> v(5);

    vector<int> p(v);

    v[0];  //access

    Iterator:

        vector<int>::iterator it = v.begin();

        Points to the memory address.

        *(it) = access the value.

        v.begin = memory address

        it++ = shift to next memory

        v.end()     //memory location after the last element. it-- will move to last element.

        reverse iterator:

        v.rbegin()  //reverse begin = will point to last element. it++ will move to second last.

        v.rend()    //reverse end = will point to address before first element.

        v.back()    //last element

        iterating example:

            for(vector<int>::iterator it = v.begin; it != v.end(); it++) {

                cout << *(it);

            }

            for(auto it = v.begin; it != v.end(); it++) { //auto - auto assign datatype v.begin

                cout << *(it)

            }

            for(auto it : v) {

                cout << it;

            }

v.erase(address begin, address end)***    //v.erase(v.begin, v.end) //last element should be after the element I want to be deleted

v.insert(position, no.of items, value)***

v.insert(position, vector.begin(), vector.end());  //insert vector inside another vector

v.size()

v.pop_back()    //pop first element

v1.swap(v2)     //swap two Vectors

v.clear()       //empty it

v.empty()       //checks if empty or not.

List: (Container)

    Double linked List

    Vector - single single list.

    list<int> ls;

    ls.push_back(2);

    ls.emplace_back(4);

    ls.push_front(5);   //faster than v.insert

    ls.emplace_front;

    all other functions similar to Vector.
    