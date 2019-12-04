#include "binary_trees.h"
/**
 * binary_tree_is_complete - test if a tree is complete or not
 * @tree: tree to be tested
 * Return: void
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int size;

	if (!tree)
		return (0);

	size = binary_tree_size(tree);
	return (is_complete(tree, 0, size));
}
/**
 * is_complete - test if a tree is complete or not
 * @tree: tree to be tested
 * @index: index
 * @size: size of the tree
 * Return: void
 */
int is_complete(const binary_tree_t *tree, int index, int size)
{
	if (!tree)
		return (1);
	if (index >= size)
		return (0);
	return (is_complete(tree->left, 2 * index + 1, size) &&
		is_complete(tree->right, 2 * index + 2, size));
}
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
