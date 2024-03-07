#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree
 * @node: A pointer to the node to find the sibling of.
 *
 * Return: A pointer to the sibling node, or NULL if sibling is found.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/* If node is left child, return right child */
	if (node->parent->left == node)
		return (node->parent->left);

	/* If node is right child, return left child */
	if (node->parent->right == node)
		return (node->parent->left);

	/* If node is neither left nor right child, return NULL */
	return (NULL);
}
