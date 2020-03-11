#include "binary_trees.h"

/**
 * binary_tree_preorder - Function that traverses and prints
 * the binary tree values using preorder method
 * @tree: The current node
 * @func: The passed in function
 * Return: Nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	print_num(tree->n);
	binary_tree_preorder(tree->left, print_num);
	binary_tree_preorder(tree->right, print_num);
}
