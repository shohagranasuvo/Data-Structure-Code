#include <iostream>
using namespace std;
 
class Node
{
public:
   int data;         
   Node* left;       
   Node* right;      
   Node(int value) 
   {
       data = value;
       left = nullptr;
       right = nullptr;
   }
};
 
Node* insert(Node* root, int value)
{
   if (root == nullptr) 
   {
       return new Node(value);
   }
 
   if (value < root->data) 
   {
       root->left = insert(root->left, value); 
   } 
   else if (value > root->data) 
   {
       root->right = insert(root->right, value);
   }
}
 
bool search(Node* root, int target)
{
   if (root == nullptr) 
   {
       return false;
   }
 
   if (root->data == target) 
   {
       return true;
   }
 
   if (target < root->data) 
   {
       return search(root->left, target);
   }
   else 
   {
       return search(root->right, target); 
   }
}
 
void inorder(Node* root)
{
   if (root == nullptr) 
   {
       return;
   }
   inorder(root->left);
   cout << root->data << " ";
   inorder(root->right);
}
 
Node* deleteNode(Node* root, int value)
{
   if (root == nullptr) 
   {
       return nullptr;
   }
 
   if (value < root->data) 
   {
       root->left = deleteNode(root->left, value); // Recur on the left subtrees
   } 
   else if (value > root->data) 
   {
       root->right = deleteNode(root->right, value); // Recur on the right subtree
   } 
   else 
   {
       if (root->left == nullptr && root->right == nullptr) 
       {
           delete root;
           return nullptr;
       } 
      
      else if (root->left == nullptr) 
       {
           Node* temp = root->right;
           delete root;
           return temp;
       } 
       else if (root->right == nullptr) 
       {
           Node* temp = root->left;
           delete root;
           return temp;
       } 
       else 
       {
           Node* temp = root->right;
 
           while (temp->left != nullptr) 
           {
               temp = temp->left;
           }
 
           root->data = temp->data;
 
           root->right = deleteNode(root->right, temp->data);
       }
   }
}
 
int main()
{
   Node* root = nullptr;
 
   int n = 10;
   int values[n] = { 10, 30, 56, 42, 85, 11, 96, 75, 36, 55 };
 
   for (int i = 0; i < n; i++) 
   {
       root = insert(root, values[i]) ;
   }
 
   cout << "The Binary Search Tree in ascending order: ";
   inorder(root);
   cout << endl;
 
 
 
 int target;
   cout << "Enter a value to search in the BST: ";
   cin >> target;
   if (search(root, target)) 
   {
       cout << "Value " << target << " is found in the BST." << endl;
   } 
   else 
   {
       cout << "Value " << target << " is NOT found in the BST." << endl;
   }
 
   int value_delete;
   cout << "Enter a value to delete: ";
   cin >> value_delete;
   root = deleteNode(root, value_delete);
 
   cout << "The BST after deletion: ";
   inorder(root);
   cout << endl;
 
}