#include "binary_trees.h"

/**
 * binary_tree_height - Function that measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: The height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height_tree, right_height_tree;

	if (tree == NULL || (tree->right == NULL && tree->left == NULL))
	{
		return (0);
	}
	else
	{
		left_height_tree = binary_tree_height(tree->left);
		right_height_tree = binary_tree_height(tree->right);
		if (left_height_tree >= right_height_tree)
		{
			return (left_height_tree + 1);
		}
		else
		{
			return (right_height_tree + 1);
		}
	}
}
