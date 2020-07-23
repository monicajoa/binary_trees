#include "binary_trees.h"

/**
 * binary_tree_insert_right - Function that inserts a node as the right-child
 * @parent: Pointer  to the node to insert the right-child in
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right_child;
	binary_tree_t *current;

	if (parent == NULL)
	{
		return (NULL);
	}
	new_right_child = malloc(sizeof(binary_tree_t));
	if (new_right_child == NULL)
	{
		return (NULL);
	}
	new_right_child->n = value;
	new_right_child->parent = parent;
	new_right_child->left = NULL;
	new_right_child->right = NULL;
	if (parent->right == NULL)
	{
		parent->right = new_right_child;
	}
	else
	{
		current = parent->right;
		new_right_child->right = current;
		current->parent = new_right_child;
		parent->right = new_right_child;
	}
	return (new_right_child);
}
