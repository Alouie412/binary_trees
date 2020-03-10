#include "binary_trees.h"

/**
 * binary_tree_balance - Function that determines the balance
 * factor of a binary tree. In other words, checks the height
 * of the left and right subtree from the node and return the
 * difference
 * @tree: The node whose balance factor is to be checked
 * Return: 0 if tree is NULL, otherwise the difference in
 * height of the left and right subtree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_count = 0, right_count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left_count = 1 + binary_tree_balance(tree->left);
	if (tree->right != NULL)
		right_count = 1 + binary_tree_balance(tree->right);

	return (left_count - right_count);
}
