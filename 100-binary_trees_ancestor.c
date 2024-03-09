#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: A pointer to the first node
 * @second: A pointer to the second node
 *
 * Return: A pointer to the lowest common ancestor node, or NULL if no
 * common ancestor was found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				const binary_tree_t *second)
{
	const binary_tree_t *temp;

	/* Return NULL if any of the nodes is NULL */
	if (!first || !second)
		return (NULL);

	/* Return the first node if both nodes are the same */
	if (first == second)
		return ((binary_tree_t *)first);

	/* Check if second is a descendant of first */
	for (temp = second; temp; temp = temp->parent)
	{
		if (temp == first)
			return ((binary_tree_t *)first);
	}

	/* Check if first is a descendant of second */
	for (temp = first; temp; temp = temp->parent)
	{
		if (temp == second)
			return ((binary_tree_t *)second);
	}

	/* Traverse upwards in both trees to find the common ancestor */
	while (first)
	{
		for (temp = second; temp; temp = temp->parent)
		{
			if (temp == first)
				return ((binary_tree_t *)first);
		}
		first = first->parent;
	}

	return (NULL);
}
