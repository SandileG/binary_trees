#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: The height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	/* Recursively calculate the height of the left subtree */
	left_height = binary_tree_height(tree->left);

	/* Recursively calculate the height of the right subtree */
	right_height = binary_tree_height(tree->right);

	/* Return the maximum height */
	return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_balance - Measure the balance factor of binary tree
 * tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: The balance factor of the tree, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	/* Calculate the height of the left subtree */
	left_height = binary_tree_height(tree->left);

	/* Calculate the height of the right subtree */
	right_height = binary_tree_height(tree->right);

	/* Return balance factor */
	return (left_height - right_height);
}
