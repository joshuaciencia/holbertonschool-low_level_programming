#include "binary_trees.h"

/**
 * binary_trees_ancestor - returns lowest ancestor of the node
 * @first: first node
 * @second: second node
 * Return: lowest ancestor node
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	const binary_tree_t **path_first;
	const binary_tree_t *tmp;
	int i = 0, j = 0;

	path_first = malloc(sizeof(binary_tree_t *) * 32);
	if (!path_first)
		return (0);

	tmp = first;
	while (tmp)
	{
		path_first[i++] = tmp;
		tmp = tmp->parent;
	}
	tmp = second;
	while (tmp)
	{
		tmp = tmp->parent;
		for (j = 0; j < i; j++)
			if (path_first[j] == tmp)
				return ((binary_tree_t *)tmp);
	}
	return (0);
}
