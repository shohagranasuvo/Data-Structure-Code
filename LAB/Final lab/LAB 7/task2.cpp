#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        left = nullptr;
        right = nullptr;
    }
};


Node* InsertBSTData(Node*& root, int data) {
    if (root == nullptr) {
        root = new Node(data);
        return root;
    } else if (data > root->data) {
        root->right = InsertBSTData(root->right, data);
    } else {
        root->left = InsertBSTData(root->left, data);
    }
    return root;
}

 void removeFromBST(int id)
 {

 }
void levelOrderTraversal(Node* root) {
    if (root == nullptr) {
        cout << "The inventory is empty!" << endl;
        return;
    }

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* current = q.front();
        q.pop();

        cout << current->data << " ";

        if (current->left != nullptr) {
            q.push(current->left);
        }
        if (current->right != nullptr) {
            q.push(current->right);
        }
    }
    cout << endl;
}


void inorder(Node* node) {
    if (node == nullptr) {
        return;
    }
    inorder(node->left);
    cout << node->data << " ";
    inorder(node->right);
}


int findSmallest(Node* root) {
    if (root == nullptr) {
        cout << "The invertory is empty!" << endl;
        return INT_MIN; }

    Node* current = root;
    while (current->left != nullptr) {
        current = current->left; 
    }
    return current->data;
}


int findLargest(Node* root) {
    if (root == nullptr) {
        cout << "The invertory is empty!" << endl;
        return INT_MIN; 
    }

    Node* current = root;
    while (current->right != nullptr) {
        current = current->right; 
    }
    return current->data;
}

void takeInput(Node*& root) {
    int data;
    cout << "Enter elements of the invertory (-1 to stop): ";
    cin >> data;

    while (data != -1) {
        root = InsertBSTData(root, data);
        cin >> data;
    }
}

int main() {
    Node* root = nullptr;

    
    takeInput(root);

   
    cout << "In-order Traversal: ";
    inorder(root);
    cout << endl;

    
    cout << "Level-order Traversal: ";
    levelOrderTraversal(root);

    
    cout << "Smallest Element: " << findSmallest(root) << endl;
    cout << "Largest Element: " << findLargest(root) << endl;

    return 0;
}
