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
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height of
 * Return: the height of the tree. If tree is NULL, return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t _left, _right;

	if (tree == NULL)
		return (0);
	_left = binary_tree_height(tree->left);
	_right = binary_tree_height(tree->right);
	if (_left >= _right)
		return (1 + _left);
	return (1 + _right);
}

/**
 * binary_tree_balance - Function that measures
 * The balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor of
 * Description: If tree is NULL, Return 0
 * Return: Balance Factor of a binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int _left, _right;

	if (tree == NULL)
		return (0);
	_left = binary_tree_height(tree->left);
	_right = binary_tree_height(tree->right);
	return (_left - _right);
}
