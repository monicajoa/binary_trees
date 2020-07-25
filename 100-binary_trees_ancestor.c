#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 * Return: Pointer to the lowest common ancestor node of the two given nodes
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	const binary_tree_t *temp_a;
	const binary_tree_t *temp_b;

	if (first == NULL || second == NULL)
	{
		return (NULL);
	}
	if (first == second)
	{
		return ((binary_tree_t *)first);
	}
	for (temp_a = first; temp_a != NULL; temp_a = temp_a->parent)
	{
		for (temp_b = second; temp_b != NULL; temp_b = temp_b->parent)
		{
			if (temp_a == temp_b)
			{
				return ((binary_tree_t *)temp_a);
			}
		}
	}
	return (NULL);
}
