#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node is a root node
 * @node: Pointer to the node to check
 *
 * This function checks if a given binary tree node is a root node
 * of the tree. A root node is defined as a node that does not have a
 * parent node.
 *
 * Return:
 *   - 1 if the node is a root node, otherwise 0.
 *   - 0 if the input `node` is NULL.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	/* Check if node has no parent */
	if (node->parent == NULL)
		return (1);

	return (0);
}
