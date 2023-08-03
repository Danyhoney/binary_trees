#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new binary tree node.
 * @parent: Pointer to the parent node.
 * @value: Value to be stored in the new node.
 *
 * Return: Pointer to the newly created node, otherwise NULL.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node != NULL)
	{
		/* Initialize left and right children as NULL */
		new_node->left = NULL;
		new_node->right = NULL;

		/* Set the parent node */
		new_node->parent = parent;

		/* Set the value of the new node */
		new_node->n = value;
	}

	/* Return the newly created node */
	return (new_node);
}
