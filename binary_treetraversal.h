#ifndef BINARY_TREETRAVERSAL_H
#define BINARY_TREETRAVERSAL_H

#include <bits/stdc++.h>
using namespace std;

class BinaryTreeTraversals {
public:
    int data;
    BinaryTreeTraversals *right;
    BinaryTreeTraversals *left;

    // Constructor
    BinaryTreeTraversals(int d) {
        this->data = d;
        this->right = nullptr;
        this->left = nullptr;
    }

    ~BinaryTreeTraversals() {
        destroyTree(this);
    }

    // Destroy the tree
    void destroyTree(BinaryTreeTraversals *node) {
        if (node) {
            destroyTree(node->left);
            destroyTree(node->right);
            delete node;
        }
    }

    // Build the tree from user input
    static BinaryTreeTraversals* buildTree(const string& position = "root") {
    int data;
    cout << "Enter the value for the " << position << " node (-1 for NULL): ";
    cin >> data;

    if (data == -1) {
        return nullptr;
    }

    BinaryTreeTraversals *node = new BinaryTreeTraversals(data);
    cout << "Building left child of " << data << ":\n";
    node->left = buildTree("left");
    cout << "Building right child of " << data << ":\n";
    node->right = buildTree("right");

    return node;
}


    // Level order traversal
    void levelOrderTraversal() {
        queue<BinaryTreeTraversals *> q;
        q.push(this);
        q.push(nullptr);

        while (!q.empty()) {
            BinaryTreeTraversals *temp = q.front();
            q.pop();

            if (temp == nullptr) {
                cout << endl;
                if (!q.empty()) {
                    q.push(nullptr);
                }
            } else {
                cout << temp->data << " ";
                if (temp->left) {
                    q.push(temp->left);
                }
                if (temp->right) {
                    q.push(temp->right);
                }
            }
        }
    }

    // Traversals
    void inorderTraversal() {
        if (this == nullptr) return;
        this->left->inorderTraversal();
        cout << this->data << " ";
        this->right->inorderTraversal();
    }

    void preorderTraversal() {
        if (this == nullptr) return;
        cout << this->data << " ";
        this->left->preorderTraversal();
        this->right->preorderTraversal();
    }

    void postorderTraversal() {
        if (this == nullptr) return;
        this->left->postorderTraversal();
        this->right->postorderTraversal();
        cout << this->data << " ";
    }

    void reverseInorderTraversal() {
        if (this == nullptr) return;
        this->right->reverseInorderTraversal();
        cout << this->data << " ";
        this->left->reverseInorderTraversal();
    }

    void reversePreorderTraversal() {
        if (this == nullptr) return;
        this->right->reversePreorderTraversal();
        this->left->reversePreorderTraversal();
        cout << this->data << " ";
    }

    void reversePostorderTraversal() {
        if (this == nullptr) return;
        cout << this->data << " ";
        this->right->reversePostorderTraversal();
        this->left->reversePostorderTraversal();
    }
};

#endif