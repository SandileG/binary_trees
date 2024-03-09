#include "binary_trees.h"

/**
 * bianry_tree_levelorder - Goes through binary tree via level-order traversal
 * @tree: Pointer to the root node of tree to traverse
 * @func: Pointer to function to call for each node
 *
 * Description: If tree of func is NULL, do nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* Initialize queue for level-order traversal */
	binary_tree_t **queue = malloc(sizeof(binary_tree_t *) * 4096);

	if (queue == NULL)
		return;

	int front = 0, rear = 0;
	const binary_tree_t *current;

	/* Enqueue the root node */
	queue[rear++] = (binary_tree_t *)tree;

	/* Continue traversal until queue is empty */
	while (front < rear)
	{
		/* Dequeue current node and precess it */
		current = queue[front++];
		func(current->n);

		/* Enqueue left child if exists */
		if (current->left)
			queue[rear++] = current->left;

		/* Enqueue right child if exists */
		if (current->right)
			queue[rear++] = current->right;
	}

	/* Free the queue */
	free(queue);
}
