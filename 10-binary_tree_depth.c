#include "binary_trees.h"

/**
 * binary_tree_depth - Measuures the depth of a node in a binary tree
 * @tree: Pointe to the node to measure the depth
 *
 * Return: The depth of the node, or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	/* Traverse up the tree while moving towards the root */
	while (tree->parent != NULL)
	{
		tree = tree->parent;
		depth++;
	}

	return (depth);
}
