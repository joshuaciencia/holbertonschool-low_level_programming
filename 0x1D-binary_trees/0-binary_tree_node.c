#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree
 * @parent: root node
 * @value: value of root node
 * Return: pointer to root node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *root_node;

	root_node = malloc(sizeof(binary_tree_t));
	if (!root_node)
		return (0);
	root_node->n = value;
	root_node->right = 0;
	root_node->left = 0;
	root_node->parent = parent;
	return (root_node);
}
