#include "binary_trees.h"

/**
 * binary_tree_levelorder - traverse a tree with level-order way
 * @tree: binary tree
 * @func: print node value func
 * Return: height
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int level;

	if (!tree || !func)
		return;
	for (level = 0; level < (int)binary_tree_height(tree) + 1; level++)
		traverse_level(tree, func, level);
}
/**
 * traverse_level - traverse a level in the tree
 * @tree: tree to be traversed
 * @func: print node value func
 * @level: level
 * Return: void
 */
void traverse_level(const binary_tree_t *tree, void (*func)(int), int level)
{
	if (!tree)
		return;
	if (level == 0)
		(*func)(tree->n);
	else if (level >= 1)
	{
		traverse_level(tree->left, func, level - 1);
		traverse_level(tree->right, func, level - 1);
	}
}

/**
 * binary_tree_height - returns the height of the tree
 * @tree: tree to be retraced
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	return (find_height(tree, 0));
}
/**
 * find_height - returns the height of the tree
 * @tree: tree to be retraced
 * @height: height count
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
