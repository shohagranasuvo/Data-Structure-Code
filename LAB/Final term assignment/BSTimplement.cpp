#include <iostream>
using namespace std;

struct Node {
    int key;
    Node* left;
    Node* right;
    Node(int item) {
        key = item;
        left = nullptr;
        right = nullptr;
    }
};

Node* insert(Node* node, int key) {
    if (node == nullptr)
        return new Node(key);
    if (node->key == key)
        return node;
    if (node->key < key)
        node->right = insert(node->right, key);
    else
        node->left = insert(node->left, key);
    return node;
}

Node* search(Node* root, int key) {
    if (root == nullptr || root->key == key)
        return root;
    if (root->key < key)
        return search(root->right, key);
    return search(root->left, key);
}

void inorder(Node* root) {
    if (root != nullptr) {
        inorder(root->left);
        cout << root->key << " ";
        inorder(root->right);
    }
}

Node* findMinNode(Node* curr) {
    curr = curr->right;
    while (curr != nullptr && curr->left != nullptr)
        curr = curr->left;
    return curr;
}

Node* deleteNode(Node* root, int x) {
    if (root == nullptr)
        return root;
    if (root->key > x)
        root->left = deleteNode(root->left, x);
    else if (root->key < x)
        root->right = deleteNode(root->right, x);
    else {
        if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        Node* succ = findMinNode(root);
        root->key = succ->key;
        root->right = deleteNode(root->right, succ->key);
    }
    return root;
}

int main() {
    Node* root = new Node(500);
    root = insert(root, 300);
    root = insert(root, 200);
    root = insert(root, 440);
    root = insert(root, 760);
    root = insert(root, 640);
    root = insert(root, 8440);
    cout<<"After insert in order travarsal :";
     inorder(root);
     cout<<endl;
    int x;
    cout << "Which number want to search: ";
    cin >> x;
    
    Node* temp = search(root, x);
    if (temp == nullptr){
        cout << x << " not Found" << endl;}
    else
      {  cout << x << " Found" << endl;}
    cout << endl; 
    root = deleteNode(root, 440);
    cout<<"After delete node 440 ,in order travarsal :"<<endl;
    inorder(root);
    cout << endl;
    
    return 0;
}
