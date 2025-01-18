#include <iostream>
#include <queue>
using namespace std;

// Node class for the linked list heap
class Node {
public:
    int data;      // Value of the node
    Node *left;    // Pointer to the left child
    Node *right;   // Pointer to the right child
    Node *parent;  // Pointer to the parent node

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
        parent = nullptr;
    }
};

// Class for Max Heap implementation
class MaxHeap {
private:
    Node *root;                // Pointer to the root of the heap
    queue<Node *> nodeQueue;   // Queue to keep track of insertion order

    // Helper function to heapify upwards
    void heapifyUp(Node *node) {
        if (!node || !node->parent)
            return;

        // Swap if parent is smaller
        if (node->data > node->parent->data) {
            swap(node->data, node->parent->data);
            heapifyUp(node->parent);
        }
    }

    // Helper function to heapify downwards
    void heapifyDown(Node *node) {
        if (!node)
            return;

        Node *largest = node;

        // Check left child
        if (node->left && node->left->data > largest->data) {
            largest = node->left;
        }

        // Check right child
        if (node->right && node->right->data > largest->data) {
            largest = node->right;
        }

        // If largest is not the current node
        if (largest != node) {
            swap(node->data, largest->data);
            heapifyDown(largest);
        }
    }

public:
    // Constructor
    MaxHeap() {
        root = nullptr;
    }

    // Insert a new value into the heap
    void insert(int val) {
        Node *newNode = new Node(val);

        if (!root) {
            root = newNode;
            nodeQueue.push(root);
            return;
        }

        Node *parent = nodeQueue.front();
        if (!parent->left) {
            parent->left = newNode;
            newNode->parent = parent;
        } else if (!parent->right) {
            parent->right = newNode;
            newNode->parent = parent;
            nodeQueue.pop(); // Parent is now full
        }

        nodeQueue.push(newNode);
        heapifyUp(newNode);
    }

    // Extract the maximum value from the heap
    int extractMax() {
        if (!root) {
            cout << "Heap is empty!" << endl;
            return -1;
        }

        int maxValue = root->data;

        // Find the last node
        Node *lastNode = nodeQueue.back();
        nodeQueue.pop();

        if (lastNode == root) {
            delete root;
            root = nullptr;
        } else {
            root->data = lastNode->data;

            Node *parent = lastNode->parent;
            if (parent->right == lastNode) {
                parent->right = nullptr;
            } else {
                parent->left = nullptr;
            }

            delete lastNode;
            heapifyDown(root);
        }

        return maxValue;
    }

    // Display the heap in level order
    void display() {
        if (!root) {
            cout << "Heap is empty!" << endl;
            return;
        }

        queue<Node *> q;
        q.push(root);

        while (!q.empty()) {
            Node *current = q.front();
            q.pop();

            cout << current->data << " ";

            if (current->left)
                q.push(current->left);
            if (current->right)
                q.push(current->right);
        }

        cout << endl;
    }
};

// Driver code
int main() {
    MaxHeap heap;

    // Insert elements
    heap.insert(10);
    heap.insert(20);
    heap.insert(5);
    heap.insert(30);
    heap.insert(15);

    cout << "Heap after insertion: ";
    heap.display();

    // Extract maximum
    cout << "Extracted max: " << heap.extractMax() << endl;

    cout << "Heap after extraction: ";
    heap.display();

    return 0;
}
