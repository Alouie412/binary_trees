#include "binary_trees.h"

/**
 * print_num - Prints a number
 *
 * @n: Number to be printed
 */
void print_num(int n)
{
	printf("%d\n", n);
}

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
	binary_tree_preorder(tree->left, tree->left->n);
	binary_tree_preorder(tree->right, tree->left->n);
}
