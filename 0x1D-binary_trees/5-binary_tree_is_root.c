#include "binary_trees.h"

/**
 * binary_tree_is_root - test if node is root node
 * @node: test if node is root node
 * Return: 1 if root node 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->parent)
		return (0);
	return (1);
}
