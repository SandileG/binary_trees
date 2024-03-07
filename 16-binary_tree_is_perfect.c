#include "binary_trees.h"

/**
 * binary_tree_height - Measure the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: The height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	/* Recursively calcluates the height of the left subtree */
	left_height = binary_tree_height(tree->left);

	/* Recursively calculate the height of the right subtree */
	right_height = binary_tree_height(tree->right);

	/* Return maximum height */
	return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_is_perfect - Checks if a binaray tree perfect
 * @tree: A pointer to the root node of the tree to check
 *
 * Return: If the tree is perfect - 1. Orherwise - 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	if (tree == NULL)
		return (0);

	/* Get the height of the left and right subtrees */
	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	/* If the tree is empty or a leaf, it is perfect */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* If height of left and right subtrees are equal, they are perfect */
	if (height_left == height_right &&
	binary_tree_is_perfect(tree->left) &&
	binary_tree_is_perfect(tree->right))
	return (1);

	/* If any of the conditions fail, the tre is not perfect */
	return (0);
}
