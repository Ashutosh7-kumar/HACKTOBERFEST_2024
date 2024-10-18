#include <iostream>
using namespace std;

class CircularQueue {
    int *queue;
    int front, rear, size;

public:
    CircularQueue(int s) {
        front = rear = -1;
        size = s;
        queue = new int[s];
    }

    // Function to insert an element into the circular queue
    void enqueue(int value) {
        // Check if the queue is full
        if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1))) {
            cout << "Queue is full\n";
            return;
        }
        // Insert the first element
        else if (front == -1) {
            front = rear = 0;
            queue[rear] = value;
        }
        // Circularly increment rear and insert the element
        else if (rear == size - 1 && front != 0) {
            rear = 0;
            queue[rear] = value;
        }
        else {
            rear++;
            queue[rear] = value;
        }
        cout << "Inserted " << value << endl;
    }

    // Function to delete an element from the circular queue
    void dequeue() {
        if (front == -1) {
            cout << "Queue is empty\n";
            return;
        }

        cout << "Deleted " << queue[front] << endl;

        // Only one element left in the queue
        if (front == rear) {
            front = rear = -1;
        }
        // Circularly increment front
        else if (front == size - 1) {
            front = 0;
        }
        else {
            front++;
        }
    }

    // Function to display elements in the circular queue
    void display() {
        if (front == -1) {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Elements in the circular queue are: ";
        if (rear >= front) {
            for (int i = front; i <= rear; i++) {
                cout << queue[i] << " ";
            }
        }
        else {
            for (int i = front; i < size; i++) {
                cout << queue[i] << " ";
            }
            for (int i = 0; i <= rear; i++) {
                cout << queue[i] << " ";
            }
        }
        cout << endl;
    }
};

int main() {
    CircularQueue cq(5);

    cq.enqueue(10);
    cq.enqueue(20);
    cq.enqueue(30);
    cq.enqueue(40);
    cq.enqueue(50);  // Queue is full now
    cq.display();

    cq.dequeue();
    cq.enqueue(60);
    cq.display();

    return 0;
}


/*Explanation:
enqueue(int value): Adds an element to the circular queue at the rear. If the queue is full, it won’t insert the element.
dequeue(): Removes the element from the front of the queue.
display(): Displays all elements in the queue, handling the circular nature.
This C++ code follows similar logic to the Python implementation but uses manual memory management with arrays. It efficiently handles both the insertion and deletion in a circular fashion.






*/
