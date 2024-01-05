#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @node: pointer to the node to measure the depth of
 *
 * Return: depth of a node in a binary tree. If node is NULL, return 0
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t _cnt = 0;

	if (node == NULL)
		return (_cnt);
	while (node->parent != NULL)
	{
		_cnt++;
		node = node->parent;
	}
	return (_cnt);
}
