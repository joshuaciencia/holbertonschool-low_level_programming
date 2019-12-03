#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node
 * @parent: pointer to node to insert
 * @value: value of node
 * Return: pointer to created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node, *old_left;

	node = malloc(sizeof(binary_tree_t));
	if (!node || !parent)
		return (0);
	node->n = value;
	node->parent = parent;
	node->left = 0;
	old_left = parent->left;
	parent->left = node;
	node->left = old_left;
	if (old_left)
		old_left->parent = node;
	return (node);
}
