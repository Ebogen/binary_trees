#include "binary_trees.h"
/**
 * bst_search - a function that searches a value in BST
 * @tree: represent a pointer to the root
 * @value: represent the value to be searched
 * Return: a pointer to the node with the value
 */

bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *temp;

	if (!tree)
		return (NULL);
	temp = (bst_t *)tree;
	while (temp)
	{
		if (temp->n == value)
			return (temp);
		if (value < temp->n)
			temp = temp->left;
		if (value > temp->n)
			temp = temp->right;
	}
	return (NULL);
}
