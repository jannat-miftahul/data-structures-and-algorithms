#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> l(10, 6); // Create a list of size 10, initialized with 6
    list<int> l2 = {1, 2, 3, 4, 5}; // Create a list with initializer list
    list<int> l3(l2);
    l.push_front(0); // Insert 0 at the front

    cout << l.size() << endl; 
    cout << l.front() << endl; // Access the first element
    cout << l.back() << endl; // Access the last element
    cout << *l.begin() << endl; // Access the first element using iterator
    cout << *l.rbegin() << endl; // Access the last element using reverse iterator

    for(auto it = l.begin(); it != l.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Range-based for loop
    for(auto val : l3) {
        cout << val << " ";
    }
    cout << endl;



    list<int> myList(5, 2);
    cout << "size=" << myList.size() << endl; // Output the size of the list
    cout << "max size=" << myList.max_size() << endl; // Output the maximum size of the list
    cout << "empty=" << myList.empty() << endl; // Output whether the list is empty
    myList.clear(); // Clear the list
    cout << "size=" << myList.size() << endl;
    cout << "empty=" << myList.empty() << endl;
    myList.resize(10, 5); // Resize the list to 10 elements, initialized with 5
    cout << "resize=" << myList.size() << endl; // Output the new size
}