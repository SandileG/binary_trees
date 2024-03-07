#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: A pointer to the first node
 * @second: A pointer to the second node
 *
 * Return: A pointer to the lowest ancestor node
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
					const binary_tree_t *second)
{
	const binary_tree_t *ancestor;

	if (first == NULL || second == NULL)
		return (NULL);

	/* Traverse from first node to root */
	for (ancestor = first; ancestor != NULL; ancestor = ancestor->parent)
	{
		/* Check if ancestor is equal to second node */
		for (const binary_tree_t *temp = second; temp != NULL; temp = temp->parent)
		{
			if (ancestor == temp)
				return ((binary_tree_t *)ancestor);
		}
	}

	return (NULL);
}
