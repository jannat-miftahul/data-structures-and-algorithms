#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> l = {10, 20, 10, 40, 70, 50, 60};

    // l.remove(10); // Remove all occurrences of 10

    // l.sort(); // Sort the list
    // l.sort(greater<int>()); // Sort in descending order
    l.reverse(); // Reverse the list

    // l.unique(); // Remove consecutive duplicates
    // only works if the list is sorted

    for(auto val : l) {
        cout << val << " ";
    }
    cout << endl;
}
