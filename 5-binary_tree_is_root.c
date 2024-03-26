#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node is a root
 * @node: Pointer to the node to check
 *
 * Return: 1 if node is a root, 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	/* If node is NULL or has no parent, it is a root */
	if (node == NULL || node->parent == NULL)
		return (1);
	else
		return (0);
}
