#include "binary_trees.h"
#include <stddef.h>
/**
 * binary_tree_nodes - counts the nodes with at leats i child in a binary tree
 * @tree: pointer to the root node
 *
 * Return: o if tree is NULL
 **/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else if (tree->left == NULL && tree->right == NULL)
		return (0);
	else
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
