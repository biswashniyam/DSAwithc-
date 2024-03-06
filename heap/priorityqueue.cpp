#include<iostream>
#include <queue>

using namespace std;

int main() {
    // Creating a max priority queue
    priority_queue<int> pq;

    // Inserting elements into the priority queue
    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);

    // Displaying the element at the top (max element)
    cout << "Element at the top: " << pq.top() << endl;

    // Removing the element at the top
    pq.pop();

    // Displaying the new element at the top
    cout << "Element at the top after pop: " << pq.top() << endl;

    // Displaying the size of the priority queue
    cout << "Size is: " << pq.size() << endl;

    // Checking if the priority queue is empty
    if (pq.empty()) {
        cout << "Priority queue is empty" << endl;
    } else {
        cout << "Priority queue is not empty" << endl;
    }

    // Creating a min priority queue
    priority_queue<int, vector<int>, greater<int>> minheap;
    minheap.push(4);
    minheap.push(2);
    minheap.push(5);
    minheap.push(3);

    // Displaying the element at the top (min element)
    cout << "Element at the top: " << minheap.top() << endl;

    // Removing the element at the top
    minheap.pop();

    // Displaying the new element at the top
    cout << "Element at the top after pop: " << minheap.top() << endl;

    // Displaying the size of the priority queue
    cout << "Size is: " << minheap.size() << endl;

    // Checking if the priority queue is empty
    if (minheap.empty()) {
        cout << "Priority queue is empty" << endl;
    } else {
        cout << "Priority queue is not empty" << endl;
    }

    return 0;
}
