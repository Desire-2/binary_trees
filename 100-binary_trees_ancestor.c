#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_trees_ancestor - Function that finds
 * the lowest common ancestor of two nodes
 * @first: The pointer to the first node
 * @second: The pointer to the second node
 * Return: Pointer to the lowest common ancestor node of the two given nodes
 * If no common ancestor was found, function must return NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *_reload;

	if (!first && !second)
		return (NULL);

	while (first)
	{
		_reload = (binary_tree_t *)second;
		while (second)
		{
			if (first == second)
				return ((binary_tree_t *)first);
			if (second->parent)
				second = second->parent;
			else
				break;
		}
		second = _reload;
		if (first->parent)
			first = first->parent;
		else
			break;
	}
	return (NULL);
}
