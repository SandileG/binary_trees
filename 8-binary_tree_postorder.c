#include "binary_trees.h"

/**
 * binary_trees_postorder - Performs a post-order traversal of a binary tree
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	/* Recursively traverse the left subtree */
	binary_tree_postorder(tree->left, func);

	/* Recursively traverse the right subtree */
	binary_tree_postorder(tree->right, func);

	/* Call the function with the value of the current node */
	func(tree->n);
}
