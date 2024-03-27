#include "binary_trees.h"

/**
 * binary_tree_size -caclulates the size of a binary tree
 * @tree: root node 
 *
 * Return: zero if node is empty ,size of node
 **/
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return 0;
	else
		return(binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
