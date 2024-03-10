#include "binary_trees.h"

/**
 * binary_tree_is_bst - Checks if a binary tree is a valid Binary Search
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if tree is a valid BST, 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (bst_util(tree, NULL, NULL));
}

/**
 * bst_util - Utility function to check is binary tree is a valid BST
 * @tree: Pointer to root node of tree to check
 * @min: Pointer to node representing minimum value constraint
 * @max: Pointer to node representing maximum value constraint
 *
 * Return: 1 if tree is valid BST, 0 otherwise
 */
int bst_util(const binary_tree_t *tree, const binary_tree_t *min,
		const binary_tree_t *max)
{
	if (tree == NULL)
		return (1);

	if ((min != NULL && tree->n <= min->n) || (max != NULL && tree->n >= max->n))
	return (bst_util(tree->left, min, tree) && bst_util(tree->right, tree, max));

	/* Incase it messes up 🤷‍♂️ */
	return (1);
}
