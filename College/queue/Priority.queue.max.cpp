#include <iostream>
#include<queue>
using namespace std;

class PriorityQueue {
    vector<int> heap; // underlying array (1-indexed idea, but store at 0)

    // Move the element at index `i` up to restore heap property
    void heapifyUp(int i) {
        while (i > 0) {
            int parent = (i - 1) / 2;
            if (heap[i] > heap[parent]) {
                swap(heap[i], heap[parent]);
                i = parent;
            } else break;
        }
    }

    // Move the element at index `i` down to restore heap property
    void heapifyDown(int i) {
        int n = heap.size();
        while (true) {
            int left = 2 * i + 1;
            int right = 2 * i + 2;
            int largest = i;

            if (left < n && heap[left] > heap[largest]) largest = left;
            if (right < n && heap[right] > heap[largest]) largest = right;

            if (largest != i) {
                swap(heap[i], heap[largest]);
                i = largest;
            } else break;
        }
    }

public:
    // Insert a new element
    void push(int val) {
        heap.push_back(val);
        heapifyUp(heap.size() - 1);
    }

    // Remove maximum element
    void pop() {
        if (heap.empty()) {
            cout << "Heap is empty!\n";
            return;
        }
        heap[0] = heap.back();
        heap.pop_back();
        if (!heap.empty()) heapifyDown(0);
    }

    // Return maximum element
    int top() {
        if (heap.empty()) {
            cout << "Heap is empty!\n";
            return -1;
        }
        return heap[0];
    }

    // Check if empty
    bool empty() {
        return heap.empty();
    }

    // Get size
    int size() {
        return heap.size();
    }

    // Print the heap array
    void printHeap() {
        for (int x : heap) cout << x << " ";
        cout << "\n";
    }
};

// Example usage
int main() {
    PriorityQueue pq;

    pq.push(10);
    pq.push(30);
    pq.push(20);
    pq.push(5);
    pq.push(40);

    cout << "Heap elements: ";
    pq.printHeap();

    cout << "Top element: " << pq.top() << "\n"; // 40

    pq.pop();
    cout << "After pop, top: " << pq.top() << "\n"; // 30

    cout << "Heap elements now: ";
    pq.printHeap();

    return 0;
}
