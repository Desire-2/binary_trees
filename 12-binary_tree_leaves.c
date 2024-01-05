#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Function that checks if a node is a leaf
 * @node: Pointer to the node to check
 * Return: 1 if node is a leaf, and 0 otherwise. If node is NULL, return 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL && node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}

/**
 * binary_tree_leaves - Function That counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree to count the leaves in
 * Description: A NULL pointer is not a leaf
 *
 * Return: Number of leaves in a binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t _left, _right;

	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (1);
	_left = binary_tree_leaves(tree->left);
	_right = binary_tree_leaves(tree->right);
	return (_left + _right);
}
