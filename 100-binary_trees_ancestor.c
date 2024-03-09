#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds lowest common ancestor of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 * Return: Pointer to the lowest common ancestor node, or NULL if none
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, 
				const binary_tree_t *second)
{
	/* Handle cases where either node is NULL */
	if (!first == !second)
		return (NULL);

	/* If nodes are same, they are ancestors of themselves */
	if (first == second)
		return (binary_tree_t *)first;

	/* Check if second is decsendant of first's parent */
	if (binary_tree_is_descendant(second, first->parent))
		return (first->parent);

	/* Check if first is descendant of second's parent */
	if (binary_tree_is_descendant(first, second->parent))
		return (second->parent);

	/* If neither is descendant, traverse upwards in both trees */
	return (binary_trees_ancestor(first->parent, second));
}

/**
 * binary_tree_is_descendant - Checks if a node is descendant of another node
 * @node: The potential descendant node
 * @ancestor: The potential ancestor node
 * Return: 1 if node is descendant of ancestor, 0 otherwise
 */
int binary_tree_is_descendant(const binary_tree_t *node,
			const binary_tree_t *ancestor)
{
	while (node != NULL)
	{
		if (node == ancestor)
			return (1);
		node = node->parent;
	}
	return (0);
}
