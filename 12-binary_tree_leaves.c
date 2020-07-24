#include "binary_trees.h"

/**
 * binary_tree_leaves - Function that counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of leaves
 *
 * Return: leaves count in a binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

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
		leaves = (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
	}
	return (leaves);
}
