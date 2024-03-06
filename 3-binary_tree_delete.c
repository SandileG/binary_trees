#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 *
 * This function performs a post-order traversal of a binary tree,
 * recursively deleting each node and its children before freeing the
 * memory of the current node. It effectively deallocates the entire
 * binary tree.
 *
 * If tree is NULL, do nothing.
 *
 * Return: None (void function)
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	/* Delete left subtree */
	binary_tree_delete(tree->left);

	/* Delete right subtree */
	binary_tree_delete(tree->right);

	/* Free current node */
	free(tree);
}

