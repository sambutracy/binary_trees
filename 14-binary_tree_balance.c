#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *binary_tree_height - Measures the height of a binary tree
 *@tree: Pointer to the root node of the tree to measure the height
 *
 *Return: Height of the binary tree, 0 if tree is NULL
 **/
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
/**
 * binary_tree_balance - measure the balance factor of a binary tree
 * @tree: pointer to the root
 *
 * Return: binary tree balance, 0 if tree is NULL
 **/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}
