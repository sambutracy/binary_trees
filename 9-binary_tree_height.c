#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the binary tree, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	/* If tree is NULL, return 0 */
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	/* Calculate the height of the left subtree */
	left_height = binary_tree_height(tree->left);

	/* Calculate the height of the right subtree */
	right_height = binary_tree_height(tree->right);

	/* Return the maximum of the two heights plus 1 */
	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
