#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: pointer to the node to check
 *
 * Return: 1 if node is a leaf, and 0 otherwise. If node is NULL, return 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL && node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}

/**
 * binary_tree_height - Function that Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height of
 * Return: The height of the tree. If tree is NULL, return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t _left, _right;

	if (tree == NULL || binary_tree_is_leaf(tree))
		return (0);
	_left = binary_tree_height(tree->left);
	_right = binary_tree_height(tree->right);
	if (_left >= _right)
		return (1 + _left);
	return (1 + _right);
}
