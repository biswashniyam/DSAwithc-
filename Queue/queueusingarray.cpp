#include<iostream>
using namespace std;
#define SIZE 10

class queue {
    int arra[SIZE];
    int FRONT;
    int REAR;

public:
    queue() {
        FRONT = -1;
        REAR = -1;
    }

    bool isEmpty() {
        return (FRONT == -1 && REAR == -1);
    }

    bool isFull() {
        return (REAR == SIZE - 1);
    }

    void enQueue(int item) {
        if (isFull()) {
            cout << "Queue overflow" << endl;
        }
        else {
            if (isEmpty()) {
                FRONT = 0;
            }
            REAR++;
            arra[REAR] = item;
            cout << endl << "Inserted " << item << endl;
        }
    }

    void Dequeue() {
        if (isEmpty()) {
            cout << "Queue is already empty" << endl;
        }
        else {
            int itemToDelete = arra[FRONT];
            if (FRONT == REAR) {
                FRONT = -1;
                REAR = -1;
            }
            else {
                FRONT++;
            }
            cout << endl << "Deleted " << itemToDelete << endl;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << endl << "Empty queue" << endl;
        }
        else {
            cout << endl << "Front index-> " << FRONT;
            cout << endl << "Items-> " << endl;
            for (int i = FRONT; i <= REAR; i++) {
                cout << arra[i] << " ";
            }
            cout << endl << "Rear index-> " << REAR << endl;
        }
    }
};

int main() {
    queue qu;
    qu.enQueue(1);
    qu.enQueue(2);
    qu.enQueue(3);
    qu.enQueue(4);
    qu.enQueue(5);
    qu.enQueue(6);
    qu.enQueue(7);
    qu.enQueue(8);
    qu.enQueue(9);
    qu.enQueue(10);
    qu.enQueue(11); // This will show overflow message in the corrected code
    // Display queue items 
    qu.display();

    return 0;
}
