#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stdlib.h>

/* Basic Binary Tree Structure */
typedef struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
} binary_tree_t;

/* Function Prototypes */
/*binary tree print*/
void binary_tree_print(const binary_tree_t *tree);
/* Task 0 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
/*Task 1*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
/*Task 2*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
/*task 3*/
void binary_tree_delete(binary_tree_t *tree);
/*task 4*/
int binary_tree_is_leaf(const binary_tree_t *node);
/*task 5*/
int binary_tree_is_root(const binary_tree_t *node);
/*task 6*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
/*task 7*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
/*task 8*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
/*task 9*/
size_t binary_tree_height(const binary_tree_t *tree);
/*task 10*/
size_t binary_tree_depth(const binary_tree_t *tree);
/*task 11*/
size_t binary_tree_size(const binary_tree_t *tree);
#endif /* BINARY_TREES_H */
