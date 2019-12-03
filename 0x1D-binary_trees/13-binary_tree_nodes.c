#include "binary_trees.h"
/**
 * binary_tree_nodes - returns the nodes with atleast one child
 * @tree: tree to be retraced
 * Return: void
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	return (count_nodes(tree, 0));
}
/**
 * count_nodes - returns the nodes of atleast one child
 * @tree: tree to be retraced
 * @nodes: nodes count
 * Return: nodes
 */
size_t count_nodes(const binary_tree_t *tree, int nodes)
{
	if (!tree)
		return (0);
	if (tree->left || tree->right)
	{
		return (
		count_nodes(tree->left, nodes) + count_nodes(tree->right, nodes) + 1);
	}
	return (nodes);
}
