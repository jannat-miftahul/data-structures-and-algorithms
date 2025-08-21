#include <bits/stdc++.h>
using namespace std;

// int main(){
//     int x = 10;
//     int *p = new int; // Dynamically allocate memory for an integer
//     *p = 100; // Assign value to the allocated memory
//     cout << "Value pointed to by p: " << *p << endl; // Output: 100
//     delete p; // Free the dynamically allocated memory
// }


// using heap memory 
int* p;
void dynamicVariable() {
    int* x = new int; // Dynamically allocate memory for an integer
    *x = 10; 
    p = x;
    cout << "Value pointed to by x: " << *x << endl; // Output: 10
    return;
}

int main() {
    dynamicVariable();
    cout << "Value pointed to by p: " << *p << endl; // different output
    return 0;
}