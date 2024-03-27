#include "binary_trees.h"
/**
 * recursive - Checks if a binary tree is full recursively
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If tree is not full  0 ,else 1
 */
int recursive(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
				(tree->left == NULL && tree->right != NULL) ||
				recursive(tree->left) == 0 ||
				recursive(tree->right) == 0)
			return (0);
	}
	return (1);
}
/**
 * binary_tree_is_full - checks if binary is full
 * @tree: pointer to root node
 *
 * Return: 1 if tree is full
 **/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (recursive(tree));
}
