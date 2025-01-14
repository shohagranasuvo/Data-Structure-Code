#include <iostream>
using namespace std;

class BST {
    struct Node {
        int data;
        Node* left;
        Node* right;

        Node(int val) {
            data = val;
            left = nullptr;
            right = nullptr;
        }
    };

    Node* root;

    Node* insert(Node* node, int value) {
        if (node == nullptr) {
            return new Node(value);
        }
        if (value < node->data) {
            node->left = insert(node->left, value);
        } else {
            node->right = insert(node->right, value);
        }
        return node;
    }

    Node* deleteNode(Node* root, int value) {
        if (root == nullptr) {
            return root;
        }

        if (value < root->data) {
            root->left = deleteNode(root->left, value);
        } else if (value > root->data) {
            root->right = deleteNode(root->right, value);
        } else {
            if (root->left == nullptr) {
                Node* temp = root->right;
                delete root;
                return temp;
            } else if (root->right == nullptr) {
                Node* temp = root->left;
                delete root;
                return temp;
            }

            Node* temp = minValueNode(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
        return root;
    }

    Node* minValueNode(Node* node) {
        Node* current = node;
        while (current && current->left != nullptr) {
            current = current->left;
        }
        return current;
    }

    bool search(Node* node, int value) {
        if (node == nullptr) {
            return false;
        }
        if (node->data == value) {
            return true;
        }
        if (value < node->data) {
            return search(node->left, value);
        } else {
            return search(node->right, value);
        }
    }

    void inOrder(Node* node) {
        if (node != nullptr) {
            inOrder(node->left);
            cout << node->data << " ";
            inOrder(node->right);
        }
    }

public:
    BST() : root(nullptr) {}

    void insert(int value) {
        root = insert(root, value);
    }

    void deleteValue(int value) {
        root = deleteNode(root, value);
    }

    bool search(int value) {
        return search(root, value);
    }

    void inOrderTraversal() {
        inOrder(root);
        cout << endl;
    }
};

int main() {
    BST bst;
    int n, value, searchValue, deleteValue;

    cout << "Enter the number of elements to insert: ";
    cin >> n;

    cout << "Enter values to insert into BST: ";
    for (int i = 0; i < n; i++) {
        cin >> value;
        bst.insert(value);
    }

    cout << "Enter value to search: ";
    cin >> searchValue;
    if (bst.search(searchValue)) {
        cout << searchValue << " found in BST" << endl;
    } else {
        cout << searchValue << " not found in BST" << endl;
    }

    cout << "Enter value to delete: ";
    cin >> deleteValue;
    bst.deleteValue(deleteValue);

    cout << "In-order traversal after all operations: ";
    bst.inOrderTraversal();

    return 0;
}