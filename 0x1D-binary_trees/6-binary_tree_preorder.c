#include "binary_trees.h"
/**
 * binary_tree_preorder - retrace the tree with pre-order way
 * @tree: tree to be retraced
 * @func: funct to be called for each node visited
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	(*func)(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
