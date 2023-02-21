#include<bits/stdc++.h>

using namespace std;

// DFS keeps on going left until it reaches null and then it goes back to the parent of the node earlier
// To keep track of nodes before it can be implemented using stack but generally is implemented using recursion
struct Node {
    int val;
    Node *left;
    Node *right;
    Node(int val) : val(val), left(nullptr), right(nullptr) {}
};

// In Preorder Traversal Logic is done before going to the children
// Preorder - Before children
void dfs(Node* node){
    if(node==nullptr){
        return;
    }
    
    cout<<node->val<<endl;
    dfs(node->left);
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