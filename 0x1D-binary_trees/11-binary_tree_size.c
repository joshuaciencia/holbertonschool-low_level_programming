#include "binary_trees.h"
/**
 * binary_tree_size - returns the size of the tree
 * @tree: tree to be retraced
 * Return: void
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	return (find_size(tree, 0));
}

/**
 * find_size - returns the size of the tree
 * @tree: tree to be retraced
 * @size: size
 * Return: void
 */
size_t find_size(const binary_tree_t *tree, int size)
{
	if (!tree)
		return (size);

	return (find_size(tree->left, size) + find_size(tree->right, size) + 1);
}
