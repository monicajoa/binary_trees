#include "binary_trees.h"

/**
 * binary_tree_insert_left - Function that inserts a node as the left-child
 * @parent: Pointer to the node to insert the left-child in
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_child;
	binary_tree_t *current;

	if (parent == NULL)
	{
		return (NULL);
	}
	new_left_child = malloc(sizeof(binary_tree_t));
	if (new_left_child == NULL)
	{
		return (NULL);
	}
	new_left_child->n = value;
	new_left_child->parent = parent;
	new_left_child->left = NULL;
	new_left_child->right = NULL;
	if (parent->left == NULL)
	{
		parent->left = new_left_child;
	}
	else
	{
		current = parent->left;
		new_left_child->left = current;
		current->parent = new_left_child;
		parent->left = new_left_child;
	}
	return (new_left_child);
}
