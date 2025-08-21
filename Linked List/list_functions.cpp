#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> l = {10, 20, 30, 40, 50, 60, 70};

    cout << *next(l.begin(), 1) << endl; // dereference iterator


    for(auto val : l) {
        cout << val << " ";
    }
    cout << endl;

    // auto it = next(l.begin()); // Move iterator to the second element
    // l.insert(it, 5); // Insert 5 before the second element

    // Insert
    // l.insert(next(l.begin(), 1), 15); 
    // Erase
    // l.erase(next(l.begin(), 2)); // Erase the third element
    l.erase(next(l.begin(), 2), next(l.begin(), 4)); // Erase elements from third to fifth

    for(auto val : l) {
        cout << val << " ";
    }
    cout << endl;
}
