#include "binary_trees.h"
/**
 * print_current_level - function that prints the given level of the tree
 * @tree: represent a pointer to the root
 * @level: represent the level to be printed
 * @func: function to be applied on each node
 */

void print_current_level(const binary_tree_t *tree,
			 int level, void (*func) (int))
{
	if (!tree)
		return;
	if (level == 1)
		func(tree->n);
	else
	{
		print_current_level(tree->left, level - 1, func);
		print_current_level(tree->right, level - 1, func);
	}
}
/**
 * bt_height - a function that computes  the height of a tree
 * @tree: represent the root of the tree
 * Return: the height
 */

int bt_height(const binary_tree_t *tree)
{
	int lheight, rheight;

	if (tree == NULL)
		return (0);
	lheight = bt_height(tree->left);
	rheight = bt_height(tree->right);

	if (lheight > rheight)
		return (lheight + 1);
	else
		return (rheight + 1);
}
/**
 * binary_tree_levelorder - a function that goes through binary tree using
 *                          level-order traversal
 * @tree: represents a pointer to the root
 * @func: represents a pointer to a function to call for each node
 *
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int height, i;

	if (tree == NULL || func == NULL)
		return;

	height = bt_height(tree);
	for (i = 1; i <= height; i++)
		print_current_level(tree, i, func);
}
