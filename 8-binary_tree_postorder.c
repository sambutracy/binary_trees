#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through a binary tree with post-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * If tree or func is NULL, do nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Check if tree or func is NULL */
	if (tree == NULL || func == NULL)
		return;

	/* Recursive call for left subtree */
	binary_tree_postorder(tree->left, func);

	/* Recursive call for right subtree */
	binary_tree_postorder(tree->right, func);

	/* Call func on the current node */
	func(tree->n);
}
