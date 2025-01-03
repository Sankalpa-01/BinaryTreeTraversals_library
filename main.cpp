// JUST FOR AN EXAMPLE OF HOW TO USE THE HEADERFILE AND WRITE THE CODE.
// ALL THE INFO ARE GIVEN IN README FILE PLEASE READ IT

#include <iostream>
#include "binary_treetraversal.h"

using namespace std;

int main()
{
    // Build the tree interactively
    cout << "Building the tree:\n";
    BinaryTreeTraversals *root = BinaryTreeTraversals::buildTree();

    // Perform various traversals
    cout << "Level Order Traversal:\n";
    root->levelOrderTraversal();

    cout << "Inorder Traversal: ";
    root->inorderTraversal();
    cout << endl;

    cout << "Preorder Traversal: ";
    root->preorderTraversal();
    cout << endl;

    cout << "Postorder Traversal: ";
    root->postorderTraversal();
    cout << endl;

    cout << "Reverse Inorder Traversal: ";
    root->reverseInorderTraversal();
    cout << endl;

    cout << "Reverse Preorder Traversal: ";
    root->reversePreorderTraversal();
    cout << endl;

    cout << "Reverse Postorder Traversal: ";
    root->reversePostorderTraversal();
    cout << endl;

    delete root; // Clean up allocated memory
    return 0;
}