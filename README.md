# Binary Trees

A binary tree is a hierarchical data structure composed of nodes, where each node has at most two children, referred to as the left child and the right child. It is a fundamental concept in computer science and finds applications in various algorithms and data structures.

# Binary Tree vs. Binary Search Tree (BST)

While both binary trees and binary search trees are composed of nodes with at most two children, they have distinct properties:

* Binary Tree: A general binary tree allows for arbitrary insertion of nodes without any specific order. It only guarantees that each node has at most two children.

* Binary Search Tree (BST): In a binary search tree, the nodes are arranged in a specific order. For any given node:

* The left subtree contains nodes with values lesser than the node's value.
* The right subtree contains nodes with values greater than the node's value.

BSTs enable efficient search, insertion, and deletion operations with average time complexities of O(log n), where n is the number of nodes in the tree.

# Time Complexity Gain compared to Linked Lists

Binary trees can offer significant time complexity gains compared to linked lists for certain operations, especially for search, insertion, and deletion. While linked lists have O(n) time complexity for these operations (where n is the number of elements in the list), binary trees, particularly BSTs, can achieve O(log n) time complexity on average, making them more efficient for large datasets.

# Tree Terminologies

* Depth: The depth of a node is the number of edges from the root node to that particular node.

* Height: The height of a tree is the maximum depth of any node in the tree. It represents the longest path from the root node to any leaf node.

* Size: The size of a binary tree refers to the total number of nodes present in the tree.

# Traversal Methods

There are different ways to traverse a binary tree:

* In-order traversal: Visit the left subtree, then the root node, and finally the right subtree.

* Pre-order traversal: Visit the root node, then the left subtree, and finally the right subtree.

* Post-order traversal: Visit the left subtree, then the right subtree, and finally the root node.

# Types of Binary Trees

* Complete Binary Tree: A binary tree in which every level, except possibly the last, is completely filled, and all nodes are as far left as possible.

* Full Binary Tree: A binary tree in which every node has either zero or two children, but never just one child.

* Perfect Binary Tree: A binary tree in which all interior nodes have two children, and all leaf nodes are at the same level.

* Balanced Binary Tree: A binary tree in which the height of the left and right subtrees of any node differ by at most one.
