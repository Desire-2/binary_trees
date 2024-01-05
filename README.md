# ALX Project 0x1D - C Binary Trees

## Description

This project is part of the ALX Software Engineering program and focuses on the implementation and manipulation of binary trees in the C programming language. Binary trees are hierarchical data structures composed of nodes, where each node has at most two children, referred to as the left child and the right child. The goal of this project is to provide a hands-on experience in working with binary trees, including creating, traversing, and manipulating them.

## Table of Contents

1. [Introduction](#introduction)
2. [Installation](#installation)
3. [Usage](#usage)
4. [Binary Tree Functions](#binary-tree-functions)
5. [File Descriptions](#file-descriptions)
6. [Contributing](#contributing)
7. [License](#license)

## Introduction

Binary trees are fundamental data structures that are widely used in computer science. They are employed in various applications, such as expression trees, file systems, and hierarchical structures. This project provides a set of functions to work with binary trees, including creating, traversing, and manipulating the tree nodes.

## Installation

To use the functions provided in this project, you need to download the source code and include the necessary files in your C project. Follow these steps to get started:

1. Clone the repository:

   ```bash
   git clone https://github.com/Desire-2/binary_trees.git
   ```

2. Include the relevant header file in your C code:

   ```c
   #include "binary_trees.h"
   ```

3. Compile your code along with the binary tree source files:

   ```bash
   gcc your_code.c binary_trees/*.c -o your_executable
   ```

## Usage

To use the binary tree functions in your code, you can follow the examples provided in the `examples/` directory. Make sure to include the appropriate header file and link the source files during compilation.

```c
#include "binary_trees.h"

int main(void) {
    /* Your code here */
    return 0;
}
```

## Binary Tree Functions

This project provides several functions to manipulate binary trees, such as:

- `binary_tree_node`: Create a new binary tree node.
- `binary_tree_insert_left`: Insert a node as the left child of a given node.
- `binary_tree_insert_right`: Insert a node as the right child of a given node.
- `binary_tree_delete`: Delete an entire binary tree.
- `binary_tree_preorder`: Traverse a binary tree in preorder.
- `binary_tree_inorder`: Traverse a binary tree in inorder.
- `binary_tree_postorder`: Traverse a binary tree in postorder.
- `binary_tree_height`: Get the height of a binary tree.
- `binary_tree_depth`: Get the depth of a node in a binary tree.
- `binary_tree_size`: Get the size (number of nodes) of a binary tree.
- `binary_tree_leaves`: Count the leaves in a binary tree.
- `binary_tree_nodes`: Count the nodes with at least one child in a binary tree.
- `binary_tree_balance`: Check if a binary tree is balanced.

Refer to the header file `binary_trees.h` for a complete list of functions and their descriptions.

## File Descriptions

- `binary_trees.h`: Header file containing function prototypes and structure definitions.
- `0-binary_tree_node.c`: Implementation of the `binary_tree_node` function.
- `1-binary_tree_insert_left.c`: Implementation of the `binary_tree_insert_left` function.
- `2-binary_tree_insert_right.c`: Implementation of the `binary_tree_insert_right` function.
- `3-binary_tree_delete.c`: Implementation of the `binary_tree_delete` function.
- `4-binary_tree_is_leaf.c`: Implementation of the `binary_tree_is_leaf` function.
- `5-binary_tree_preorder.c`: Implementation of the `binary_tree_preorder` function.
- `6-binary_tree_inorder.c`: Implementation of the `binary_tree_inorder` function.
- `7-binary_tree_postorder.c`: Implementation of the `binary_tree_postorder` function.
- `8-binary_tree_height.c`: Implementation of the `binary_tree_height` function.
- `9-binary_tree_depth.c`: Implementation of the `binary_tree_depth` function.
- `10-binary_tree_size.c`: Implementation of the `binary_tree_size` function.
- `11-binary_tree_leaves.c`: Implementation of the `binary_tree_leaves` function.
- `12-binary_tree_nodes.c`: Implementation of the `binary_tree_nodes` function.
- `13-binary_tree_balance.c`: Implementation of the `binary_tree_balance` function.

## Contributing

Contributions to this project are welcome. To contribute, follow these steps:

1. Fork the repository.
2. Create a new branch for your feature or bug fix.
3. Make your changes and commit them.
4. Push your changes to your fork.
5. Submit a pull request to the main repository.

