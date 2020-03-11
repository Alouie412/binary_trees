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
 * binary_tree_inorder - Function that traverses and prints
 * the binary tree values using inorder method
 * @tree: The current node
 * @func: The passed in function
 * Return: Nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, &print_num);
	print_num(tree->n);
	binary_tree_inorder(tree->right, &print_num);
}
