#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Function that inserts node as the
 * left-child of Another Node
 * @parent: binary_tree_t Node
 * @value: int Variable
 * Return: new Node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *_nw, *_temp;

	if (parent == NULL)
		return (NULL);

	_nw = binary_tree_node(parent, value);
	if (_nw == NULL)
		return (NULL);

	if (parent->left == NULL)
	{
		parent->left = _nw;
		return (_nw);
	}
	_temp = parent->left;
	parent->left = _nw;
	_nw->left = _temp;
	_temp->parent = _nw;

	return (_nw);
}
