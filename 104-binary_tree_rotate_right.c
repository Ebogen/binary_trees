#include "binary_trees.h"
/**
 * binary_tree_rotate_right - a fucntion that performs a right-rotation
 *                            on a binary tree
 * @tree: represent a pointer to the root
 * Return: pointer to the new root
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	if (!tree)
		return (NULL);
	tree->parent = tree->left;
	if (tree->left)
	{
		tree->left = tree->left->right;
		tree->parent->right = tree;
		tree->parent->parent = NULL;
		if (tree->left)
			tree->left->parent = tree;
	}
	return (tree->parent);
}
