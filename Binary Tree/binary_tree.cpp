#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node(int val) {
        this->val = val;
        left = NULL;
        right = NULL;
    }
}; 

int sumnodes(Node* root) {
    if(root == NULL) return 0;

    if(root->left == NULL && root->right == NULL){
        return 0;
    }
    return root->val + sumnodes(root->left) + sumnodes(root->right);
}

int main() {
    int val;
    cin >> val;

    Node* root = new Node(val);
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        Node* cur = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node* left, *right;
        if(l == -1) left = NULL;
        else{
            left = new Node(l);
        }
        if (r == -1) right = NULL;
        else{
            right = new Node(r);
        }

        cur->left = left;
        cur->right = right;

        if(cur->left) q.push(cur->left);
        if(cur->right) q.push(cur->right);
    }

    cout << sumnodes(root) << endl;
    return 0;
}
