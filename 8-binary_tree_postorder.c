#include "binary_trees.h"

/**
 * binary_tree_postorder - Function that traverses and prints
 * the binary tree values using postorder method
 * @tree: The current node
 * @func: The passed in function
 * Return: Nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, &print_num);
	binary_tree_postorder(tree->right, &print_num);
	print_num(tree->n);
}
