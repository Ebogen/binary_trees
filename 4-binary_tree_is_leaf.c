#include "binary_trees.h"
/**
 * binary_tree_is_leaf - a function that checks if a node is a leaf
 * @node: represents a pointer to the node
 * Return: 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node && !node->left && !node->right)
		return (1);
	return (0);
}
