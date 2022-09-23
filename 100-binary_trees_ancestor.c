#include "binary_trees.h"
/**
 * binary_trees_ancestor - a function that finds the lowest common
 *                         ancestor of two nodes
 * @first: represent a pointer to the first node
 * @second: represent a pointer to the second node
 * Return: a pointer to the lowest common ancestor node
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	binary_tree_t *temp;

	if (first == NULL || second == NULL)
		return (NULL);

	temp = (binary_tree_t *)second;
	while (first)
	{
		while (second)
		{
			if (first == second)
				return ((binary_tree_t *)first);
			second = second->parent;
		}
		second = temp;
		first = first->parent;
	}
	return (NULL);
}
