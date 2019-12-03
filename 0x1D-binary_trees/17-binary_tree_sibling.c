#include "binary_trees.h"
/**
 * binary_tree_sibling - returns the sibling of a node
 * @node: node to find the sibling
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
