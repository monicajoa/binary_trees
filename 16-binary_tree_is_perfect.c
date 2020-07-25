#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Function that checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if a binary tree is perfect, otherwise 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_node, right_node;

	if (tree == NULL)
	{
		return (0);
	}
	if (binary_tree_balance(tree) == 0)
	{
		if (tree->left == NULL && tree->right == NULL)
		{
			return (1);
		}
		left_node = binary_tree_is_perfect(tree->left);
		right_node = binary_tree_is_perfect(tree->right);
		return (left_node * right_node);
	}
	return (0);
}

/**
 * binary_tree_height_new - Function that measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: The height of the tree
 */

size_t binary_tree_height_new(const binary_tree_t *tree)
{
	size_t left_height_tree, right_height_tree = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		left_height_tree = binary_tree_height_new(tree->left);
		right_height_tree = binary_tree_height_new(tree->right);
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

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: The balance factor of a binary tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t sub_left, sub_right;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		sub_left = binary_tree_height_new(tree->left);
		sub_right = binary_tree_height_new(tree->right);
		return (sub_left - sub_right);
	}
}
