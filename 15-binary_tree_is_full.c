#include "binary_trees.h"

/**
 * binary_tree_is_full - Function that checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if a binary tree is full, otherwise 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_node, right_node;

	if (tree == NULL)
	{
		return (0);
	}
	else if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else
	{
		left_node = binary_tree_is_full(tree->left);
		right_node = binary_tree_is_full(tree->right);
	}
	return (left_node * right_node);
}
