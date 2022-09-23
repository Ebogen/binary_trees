#include <limits.h>
#include "binary_trees.h"

/**
 * isBST - a fucntion that checks if a binary tree is a BST
 *        using maximum and minimum
 * @tree: represent a pointer to the root
 * @min: represent the minimum value
 * @max: represent the maximum value
 * Return: 1 if BST, otherwise 0
 */
int isBST(const binary_tree_t *tree, int min, int max)
{
	if (!tree)
		return (1);
	if (tree->n < min || tree->n > max)
		return (0);
	return
		(isBST(tree->left, min, tree->n - 1) &&
		 isBST(tree->right, tree->n + 1, max));
}

/**
 * binary_tree_is_bst - a function that checks if a binary tree is
 *                      a valid BST
 * @tree: represent a pointer to the root
 * Return: 1 if it is BST, otherwise 0
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (isBST(tree, INT_MIN, INT_MAX));
}
