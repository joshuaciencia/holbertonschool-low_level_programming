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

	if (!parent)
		return (0);
	node = binary_tree_node(parent, value);
	if (!node)
		return (0);
	old_right = parent->right;
	parent->right = node;
	node->right = old_right;
	if (old_right)
		old_right->parent = node;
	return (node);
}
