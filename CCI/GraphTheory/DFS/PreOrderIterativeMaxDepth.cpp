#include<bits/stdc++.h>

using namespace std;

struct Node {
    int val;
    Node *left;
    Node *right;
    Node(int val) : val(val), left(nullptr), right(nullptr) {}
};

// Function To get max depth of a tree iteratively using Preorder traversal
// O(n) - n is number of nodes

// Depth here means the number of nodes in the longest path
int maxDepth(Node* root) {
        if (root == nullptr) {
            return 0;
        }
        
        stack<pair<Node*, int>> stack;
        stack.push(pair(root, 1));
        int ans = 0;
        
        while (!stack.empty()) {
            auto [node, depth] = stack.top();
            stack.pop();
            ans = max(ans, depth);
            
            if (node->left != nullptr) {
                stack.push(pair(node->left, depth + 1));
            }
            
            if (node -> right != nullptr) {
                stack.push(pair(node->right, depth + 1));
            }
        }
        
        return ans;
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
    
    cout<<maxDepth(root);
}