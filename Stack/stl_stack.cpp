#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> st;

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        st.push(x);
    }

    // Display the size of the stack
    cout << "Size of stack: " << st.size() << endl;

    // Display the elements of the stack until it is empty
    while(!st.empty()) {
        // Print the top element and then pop it
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    return 0;
}