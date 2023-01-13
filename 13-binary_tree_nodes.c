#include "binary_trees.h"

/**
 * binary_tree_nodes - count
 * @tree: binary_tree_t
 * Return: size_t
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));

	else
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
