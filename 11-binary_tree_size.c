#include "binary_trees.h"

/**
 * binary_tree_size - Function that measures the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure the size of
 * Return: Size of a Binary Tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t _left, _right;

	if (tree == NULL)
		return (0);
	_left = binary_tree_size(tree->left);
	_right = binary_tree_size(tree->right);
	return (1 + _left + _right);
}
