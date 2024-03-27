#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure the depth
 *
 * Return: Depth of the node, 0 if tree is NULL or if the node is the root
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	/* If tree is NULL or the node is the root, return 0 */
	if (tree == NULL || tree->parent == NULL)
		return (0);

	/* Traverse up to the root while incrementing depth */
	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
