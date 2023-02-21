#include<bits/stdc++.h>

using namespace std;

struct Node {
    int val;
    Node *left;
    Node *right;
    Node(int val) : val(val), left(nullptr), right(nullptr) {}
};

// In Postorder Traversal Logic is done after going through both the children
// In this the leaf node is prioritized
// Postorder - after the children
void dfs(Node* node){
    if(node==nullptr){
        return;
    }
    
    dfs(node->left);
    dfs(node->right);
    cout<<node->val<<endl;
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