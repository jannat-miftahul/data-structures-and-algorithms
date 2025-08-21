#include <bits/stdc++.h>
using namespace std;


int main() {
    priority_queue<int> pq; // default max-heap

    // Inserting elements into the priority queue
    pq.push(10);
    pq.push(20);
    pq.push(15);

    // Displaying the top element
    cout << "Top element: " << pq.top() << endl; // Should print 20

    // Removing the top element
    pq.pop();
    cout << "Top element after pop: " << pq.top() << endl; // Should print 15

    // Checking if the priority queue is empty
    if (pq.empty()) {
        cout << "Priority queue is empty." << endl;
    } 
    else {
        cout << "Priority queue is not empty." << endl;
    }
    cout << endl;

    // min-heap
    priority_queue<int, vector<int>, greater<int>> minHeap;
    minHeap.push(10);
    minHeap.push(5);
    minHeap.push(15);

    cout << "Top element in min-heap: " << minHeap.top() << endl; // Should print 5

    return 0;
}