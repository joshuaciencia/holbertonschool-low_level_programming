#include "binary_trees.h"
/**
 * binary_tree_balance - returns the balance fact of the tree
 * @tree: tree to be retraced
 * Return: void
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
/**
 * binary_tree_height - returns the height of the tree
 * @tree: tree to be retraced
 * Return: void
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	return (find_height(tree, 0));
}
/**
 * find_height - returns the height of the tree
 * @tree: tree to be retraced
 * @height: tree to be retraced
 * Return: height
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
