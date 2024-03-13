#include "binary_trees.h"

/**
 * bst_minimum - Finds the node with the minimum value in a BST
 * @node: A pointer to the root node of the subtree to search
 *
 * Return: A pointer to the node with the minimum value
 */
bst_t *bst_minimum(bst_t *node)
{
	while (node->left != NULL)
		node = node->left;

	return (node);
}

/**
 * bst_remove - Removes a node from a Binary Search Tree
 * @root: A pointer to the root node of the tree
 * @value: The value to remove from the tree
 *
 * Return: A pointer to the root node of the tree after removing the value
 */
bst_t *bst_remove(bst_t *root, int value)
{
	if (root == NULL)
		return (NULL);

	if (value < root->n)
		root->left = bst_remove(root->left, value);
	else if (value > root->n)
		root->right = bst_remove(root->right, value);
	else
	{
		if (root->left == NULL)
		{
			bst_t *temp = root->right;

			free(root);

			return (temp);
		}
		else if (root->right == NULL)
		{
			bst_t *temp = root->left;

			free(root);

			return (temp);
		}
		bst_t *temp = bst_minimum(root->right);

		root->n = temp->n;

		root->right = bst_remove(root->right, temp->n);
	}
	return (root);
}
