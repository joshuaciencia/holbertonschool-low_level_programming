#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node to right
 * @parent: node to insert from
 * @value: value of new node
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
        binary_tree_t *node, *old_left;

        if (!parent)
                return (0);
        node = binary_tree_node(parent, value);
        if (!node)
                return (0);
        old_left = parent->left;
        parent->left = node;
        node->left = old_left;
        if (old_left)
                old_left->parent = node;
        return (node);
}
