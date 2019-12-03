#include "binary_trees.h"
/**
 * binary_tree_leaves - returns the leaves of the tree
 * @tree: tree to be retraced
 * Return: leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	return (find_leaves(tree, 0));
}

/**
 * find_leaves - returns the leaves of the tree
 * @tree: tree to be retraced
 * @leaves: leaves count
 * Return: leaves
 */
size_t find_leaves(const binary_tree_t *tree, int leaves)
{
	if (!tree)
		return (leaves);

	if (!tree->left && !tree->right)
		return (++leaves);
	return (find_leaves(tree->left, leaves) + find_leaves(tree->right, leaves));
}
