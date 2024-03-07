#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: A pointer to the root node of the tree to chack
 *
 * Return: If the tree is full - 1. Otherwise - 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* If the node has no children, it is a leaf */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* If the node has both children, continue checkign recursively */
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	/* If only one child is present, tree is not full */
	return (0);
}
