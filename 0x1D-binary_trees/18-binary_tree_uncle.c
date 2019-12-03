#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: node to find the uncle
 * Return: uncle node or null if no uncle found
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (0);

	return (binary_tree_sibling(node->parent));
}

/**
 * binary_tree_sibling - returns the sibling of a node
 * @node: node to find the sibling from
 * Return: sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (0);
	/* test if node is left then return right and viceversa */
	if (node == node->parent->left)
		return (node->parent->right);
	else
		return (node->parent->left);
}
