#include "binary_trees.h"

/**
 * binary_tree_is_complete - Checks if a binary tree is complete
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is complete, 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int nodes_count = 0;
	int index = 0;

	if (tree == NULL)
		return (0);

	nodes_count = binary_tree_size(tree);

	return (is_complete_util(tree, index, nodes_count));
}

/**
 * is_complete_util - Utility function to check if a binary tree is complete
 * @tree: Pointer to the root node of the tree to check
 * @index: Current index
 * @nodes_count: Total number of nodes in the tree
 *
 * Return: 1 if the tree is complete, 0 otherwise
 */
int is_complete_util(const binary_tree_t *tree, int index, int nodes_count)
{
	/* An empty tree is complete */
	if (tree == NULL)
		return (1);

	if (index >= nodes_count)
		return (0);

	/* Recur for left and right subtrees */
	return (is_complete_util(tree->left, 2 * index + 1, nodes_count) &&
		is_complete_util(tree->right, 2 * index + 2, nodes_count));
}

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure the size
 *
 * Return: Size of the tree, or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
