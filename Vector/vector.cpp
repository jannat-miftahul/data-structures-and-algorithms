#include <bits/stdc++.h>
using namespace std;

int main() {
    // Create a vector of integers
    // vector<int> vec;
    // vector<int> vec2(10); // Create a vector of size 10 with default values (0 for int)

    vector<int> v(5, -1);
    vector<int> v2(v); // Copy constructor

    // insert function
    v2.insert(v2.begin() + 1, 3); // Insert 5

    cout << v2.size() << endl; // Output the size of the vector
    for(int i = 0; i < v2.size(); i++){
        cout << v2[i] << " ";
    } 
    cout << endl;


    int a[4] = {12,13,14,15};
    vector<int> v3(a, a+4);
    cout << v3[3] << endl; 

    return 0;
}