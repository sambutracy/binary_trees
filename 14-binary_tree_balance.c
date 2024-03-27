#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
#include "9-binary_tree_height.c"
/**
 * binary_tree_balance - measure the balance factor of a binary tree
 * @tree: pointer to the root
 *
 * Return: binary tree balance,0 if tree id NULL
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
