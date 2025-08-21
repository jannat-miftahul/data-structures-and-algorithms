#include <bits/stdc++.h>
using namespace std;

int* dynamicArray() {
    int* arr = new int[5]; // Dynamically allocate memory for an array of integers
    for (int i = 0; i < 5; i++) {
        arr[i] = i + 2; // Initialize the array with values
    }
    return arr; // Return the pointer to the allocated memory
}

int main(){
    int* x = dynamicArray();
    cout << "Values in the dynamically allocated array: ";
    for (int i = 0; i < 5; i++) {
        cout << x[i] << " ";
    }
    return 0;
}