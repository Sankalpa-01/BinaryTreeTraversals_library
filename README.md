# Binary Tree Traversals Library (Header-Only)

## Overview
This header-only C++ library provides comprehensive traversal functionalities for binary trees. Users can build binary trees interactively, perform various types of traversals, and manage tree memory effectively. The library is encapsulated within the `BinaryTreeTraversals` class.

## Features
- **Tree Traversals**:
  - Level Order Traversal
  - Inorder Traversal (LNR)
  - Preorder Traversal (NLR)
  - Postorder Traversal (LRN)
  - Reverse Inorder Traversal (RNL)
  - Reverse Preorder Traversal (NRL)
  - Reverse Postorder Traversal (RLN)
- **Tree Construction**:
  - Build a binary tree interactively from user input.
- **Memory Management**:
  - Automatically deallocates tree nodes using a destructor.

## Installation
1. Copy the `binary_treetraversal.h` file to your project directory.
2. Include the header file in your C++ program:
   ```cpp
   #include "binary_treetraversal.h"
   ```

## Usage
### Example Program
```cpp
#include "binary_treetraversal.h"
#include <iostream>
using namespace std;

int main() {
    // Build the tree interactively
    cout << "Building the tree:\n";
    BinaryTreeTraversals* root = BinaryTreeTraversals::buildTree();

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
```

### Example Output
```
Building the tree:
Enter the value for the root node (-1 for NULL): 10
Enter the value for the left subtree of 10 (-1 for NULL): 5
Enter the value for the left subtree of 5 (-1 for NULL): -1
Enter the value for the right subtree of 5 (-1 for NULL): -1
Enter the value for the right subtree of 10 (-1 for NULL): 20
Enter the value for the left subtree of 20 (-1 for NULL): -1
Enter the value for the right subtree of 20 (-1 for NULL): -1

Level Order Traversal:
10
5 20

Inorder Traversal: 5 10 20
Preorder Traversal: 10 5 20
Postorder Traversal: 5 20 10
Reverse Inorder Traversal: 20 10 5
Reverse Preorder Traversal: 10 20 5
Reverse Postorder Traversal: 20 5 10
```

## API Reference
### Class: `BinaryTreeTraversals`
#### Constructor
- **`BinaryTreeTraversals(int data)`**: Creates a new binary tree node with the specified data.

#### Destructor
- **`~BinaryTreeTraversals()`**: Automatically deletes all nodes in the tree, freeing memory.

#### Static Methods
- **`BinaryTreeTraversals* buildTree()`**: Interactively builds a binary tree based on user input.

#### Member Functions
- **`void levelOrderTraversal()`**: Prints the tree level by level.
- **`void inorderTraversal()`**: Prints the tree in inorder (LNR).
- **`void preorderTraversal()`**: Prints the tree in preorder (NLR).
- **`void postorderTraversal()`**: Prints the tree in postorder (LRN).
- **`void reverseInorderTraversal()`**: Prints the tree in reverse inorder (RNL).
- **`void reversePreorderTraversal()`**: Prints the tree in reverse preorder (NRL).
- **`void reversePostorderTraversal()`**: Prints the tree in reverse postorder (RLN).

## How to Compile
1. Save your program (e.g., `main.cpp`) and ensure `binary_treetraversal.h` is in the same directory.
2. Compile the program using any C++ compiler:
   ```bash
   g++ -o main main.cpp
   ./main
   ```

## License
This library is open-source and can be freely used and distributed. Attribution is appreciated but not required.

## Contributions
Feel free to suggest improvements, report issues, or contribute new features!

