#include "binary_trees.h"

/**
 * bst_search - searches for a value in a binary search tree
 * @tree: pointer to the root node of the BST to search
 * @value: value to search in the tree
 *
 * Return: pointer to the node containing a value equal to value, or NULL
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *_tmp;

	_tmp = (bst_t *)tree;
	while (_tmp)
	{
		if (_tmp->n == value)
			return (_tmp);
		if (_tmp->n < value)
			_tmp = _tmp->right;
		else
			_tmp = _tmp->left;
	}
	return (NULL);
}
