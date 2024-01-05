#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Function that creates a node
 * @parent: Binary_tree_t Node
 * @value: int Variable
 * Return: New Node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *_nw;

	_nw = malloc(sizeof(binary_tree_t));
	if (_nw == NULL)
		return (NULL);

	_nw->left = NULL;
	_nw->right = NULL;
	_nw->parent = parent;
	_nw->n = value;
	return (_nw);
}
