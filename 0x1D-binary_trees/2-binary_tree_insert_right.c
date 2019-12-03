#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node to right
 * @parent: node to insert from
 * @value: value of new node
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node, *old_right;

	node = malloc(sizeof(binary_tree_t));
	if (!node || !parent)
		return (0);
	node->n = value;
	node->parent = parent;
	node->left = 0;
	old_right = parent->right;
	parent->right = node;
	node->right = old_right;
	if (old_right)
		old_right->parent = node;
	return (node);
}
