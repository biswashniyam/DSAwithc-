#include <iostream>
using namespace std;

class PriorityQ {
private:
    static const int Size = 10; // Assuming a maximum size for the circular queue
    int P_QUEUE[Size];
    int FRONT, REAR;

public:
    // Constructor
    PriorityQ() {
        REAR=FRONT=-1;

    }

    // Check if the queue is full
    bool isFull() {
        return (REAR + 1) % Size == FRONT;
    }

    // Check if the queue is empty
    bool isEmpty() {
        return FRONT == -1 && REAR == -1;
    }

    // Enqueue an item into the priority queue
    void Enqueue(int item) {
        if (isFull()) {
            cout << "\nQueue is Full.";
            return;
        } else {
            if (FRONT == -1 && REAR == -1) {
                FRONT = REAR = 0;
            } else {
                REAR = (REAR + 1) % Size;
            }
            P_QUEUE[REAR] = item;
        }
    }
    // Dequeue an item with the highest priority from the priority queue
    int Dequeue() {
        int item;

        if (isEmpty()) {
            cout << "\nQueue is empty";
            return 0;
        } else {
            int i, indx;
            indx = FRONT;
            int large = P_QUEUE[indx];

            // Finds the max element
            for (i = indx + 1; i <= REAR; i++) {
                if (large < P_QUEUE[i]) {
                    large = P_QUEUE[i];
                    indx = i;
                }
            }
            item = P_QUEUE[indx];

            if (FRONT == REAR) {
                FRONT = REAR = -1;
            } else {
                for (int i = indx; i < REAR; i++) {
                    P_QUEUE[i] = P_QUEUE[i + 1];
                }
                REAR--;
            }
        }
        return item;
    }
    void Display() {
        if (isEmpty()) {
            cout << "\nQueue is empty";
        } else {
            cout << "\nPriority Queue: ";
            int i = FRONT;
            do {
                cout << P_QUEUE[i] << " ";
                i = (i + 1) % Size;
            } while (i != (REAR + 1) % Size);
            cout << endl;
        }
    }
};

int main() {
    PriorityQ priorityQueue;

    // Enqueue some items
    priorityQueue.Enqueue(5);
    priorityQueue.Enqueue(3);
    priorityQueue.Enqueue(8);
    priorityQueue.Enqueue(1);
    priorityQueue.Display();

    // Dequeue items with the highest priority
    cout << "Dequeued: " << priorityQueue.Dequeue() << endl;
    cout << "Dequeued: " << priorityQueue.Dequeue() << endl;

    return 0;
}
