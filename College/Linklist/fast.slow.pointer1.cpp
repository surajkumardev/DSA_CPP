#include <iostream>

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Function to detect cycle using Floyd’s Cycle Detection Algorithm
bool hasCycle(Node* head) {
    Node* slow = head;
    Node* fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            return true;
    }
    return false;
}

// Example usage
int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    // Create a cycle for testing
    head->next->next->next->next = head->next;

    if (hasCycle(head))
        std::cout << "Cycle detected\n";
    else
        std::cout << "No cycle\n";

    // Note: Memory leak here for simplicity, as cycle makes deletion tricky
    return 0;
}