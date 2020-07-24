#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure the depth
 *
 * Return: The depth of the tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth_tree = 0;

	if (tree == NULL || tree->parent == NULL)
	{
		return (0);
	}
	else
	{
		depth_tree = binary_tree_depth(tree->parent);
		return (depth_tree + 1);
	}
}
