#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node
 *
 * Return: number of leaves in a tree, 0 if tree is NULL
 **/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else if (tree->left == NULL  && tree->right == NULL)
		return (1);
	else
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
