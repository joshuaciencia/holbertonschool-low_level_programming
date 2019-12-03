#include "binary_trees.h"
/**
 * binary_tree_is_full - test if a tree is full or not
 * @tree: tree to be retraced
 * Return: 1 if full 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left && tree->right)
	{
		/* test if left/right subtrees are full trees */
		int is_left_full = binary_tree_is_full(tree->left);
		int is_right_full = binary_tree_is_full(tree->right);

		if (is_left_full && is_right_full)
			return (1);
	}
	return (0);
}
