#include <iostream>
#include<queue>
using namespace std;
// In C++ (STL)
// By default, priority_queue in C++ is implemented as a max heap.
// The largest element is always at the top.
// If you want a min heap, you must explicitly specify a comparator:

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

class Solution {
  public:
  void find(Node* root, int pos, int &l, int &r){
      if(!root){
          return;
      }
      l=min(pos,l);
      r=max(pos, r);
      find(root->left, pos-1,l,r);
      find(root->right,pos+1, l, r);
}
    void Tview(Node* root, int pos, vector<int> &ans, vector<int> &level,int l){
        if(!root){
            return;
        }
        if(level[pos]>l){
            ans[pos]=root->data;
            level[pos]=l;
        }
        //now 
        Tview(root->left, pos-1, ans, level, l+1);
        Tview(root->right, pos+1, ans,level,l+1);
    }
  
  
  
    // Function to return a list of nodes visible from the top view
    // from left to right in Binary Tree.
    vector<int> topView(Node *root) {
        // code here
        int l=0, r=0; 
        find(root, 0, l, r);
        vector<int> ans(r-l+1);
        vector<int> level (r-l+1, INT_MAX);
        Tview(root,-1*l, ans, level , 0);
        return ans; 
    }
};