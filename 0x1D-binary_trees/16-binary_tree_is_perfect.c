#include "binary_trees.h"
/**
 * binary_tree_is_perfect - test if a tree is perfect or not
 * @tree: tree to be retraced
 * Return: 1 if perfect 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height, size, pow = 1, i;

	if (!tree)
		return (0);
	height = binary_tree_height(tree);
	size = binary_tree_size(tree);
	for (i = 0; i < height + 1; i++)
		pow = pow * 2;
	if (pow - 1 == size)
		return (1);
	return (0);
}
/**
 * binary_tree_size - returns the size of the tree
 * @tree: tree to be retraced
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	return (find_size(tree, 0));
}

/**
 * find_size - returns the size of the tree
 * @tree: tree to be retraced
 * @size: size of tree
 * Return: size of tree
 */
size_t find_size(const binary_tree_t *tree, int size)
{
	if (!tree)
		return (size);

	return (find_size(tree->left, size) + find_size(tree->right, size) + 1);
}
/**
 * binary_tree_height - returns the height of the tree
 * @tree: tree to be retraced
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	return (find_height(tree, 0));
}
/**
 * find_height - returns the height of the tree
 * @tree: tree to be retraced
 * @height: height of tree
 * Return: height of tree
 */
size_t find_height(const binary_tree_t *tree, int height)
{
	int lh, rh;

	if (!tree)
		return (--height);
	height++;
	lh = find_height(tree->left, height);
	rh = find_height(tree->right, height);

	if (lh > rh)
		return (lh);
	else
		return (rh);
}
