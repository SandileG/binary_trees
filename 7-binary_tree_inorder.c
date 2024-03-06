#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Description: This function traverses the binary tree using in-order
 * traversal, meaning it first recursively traverses the left subtree, then
 * visits the root node, and finally recursively traverses the right subtree.
 * For each visited node, the function calls the given function `func` with
 * the value of the node as a parameter.
 *
 * If tree or func is NULL, do nothing.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* Recursively traverse the left subtree */
	binary_tree_inorder(tree->left, func);

	/* Call the function with the value of the current node */
	func(tree->n);

	/* Recursively traverese the right subtree */
	binary_tree_inorder(tree->right, func);
}
