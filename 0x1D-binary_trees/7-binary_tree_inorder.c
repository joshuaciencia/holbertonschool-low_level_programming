#include "binary_trees.h"
/**
 * binary_tree_inorder - retrace tree with in-order way
 * @tree: tree to be retraced
 * @func: func to be called from each node visited
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	(*func)(tree->n);
	binary_tree_inorder(tree->right, func);
}
