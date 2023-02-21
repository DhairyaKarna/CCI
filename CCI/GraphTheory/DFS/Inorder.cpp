#include<bits/stdc++.h>

using namespace std;

struct Node {
    int val;
    Node *left;
    Node *right;
    Node(int val) : val(val), left(nullptr), right(nullptr) {}
};

// In Inorder Traversal Logic is done after going to left child and before right child
// Inorder - in the middle of children
void dfs(Node* node){
    if(node==nullptr){
        return;
    }
    
    dfs(node->left);
    cout<<node->val<<endl;
    dfs(node->right);
}

int main() {
    /*
    The following code builds a tree that looks like:
        0
      /   \
     1     2
    */
    
    Node* root = new Node(0);
    Node* one = new Node(1);
    Node* two = new Node(2);
    
    root->left = one;
    root->right = two;
    
    dfs(root);
}