#include<bits/stdc++.h>

using namespace std;

struct Node {
    int val;
    Node *left;
    Node *right;
    Node(int val) : val(val), left(nullptr), right(nullptr) {}
};

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

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
    
    
    cout << root->left->val << endl; // Prints 1
    cout << root->right->val << endl; // Prints 2
}
