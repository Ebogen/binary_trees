#include "binary_trees.h"
/**
 * binary_tree_inorder - a function that goes through a binary tree using
 *                       inorder traversal
 * @tree: represents a pointer to the root node
 * @func: represents a pointer to a function to call for each node
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func) (int))
{
	if (!tree || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
