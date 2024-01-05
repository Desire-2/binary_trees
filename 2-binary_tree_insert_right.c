#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - Function thatinserts node as the
 * right-child of another Node
 * @parent: binary_tree_t Node
 * @value: int Variable
 * Return: new Node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *_nw, *_temp;

	if (parent == NULL)
		return (NULL);

	_nw = binary_tree_node(parent, value);
	if (_nw == NULL)
		return (NULL);

	if (parent->right == NULL)
	{
		parent->right = _nw;
		return (_nw);
	}
	_temp = parent->right;
	parent->right = _nw;
	_nw->right = _temp;
	_temp->parent = _nw;

	return (_nw);
}
