#include "binary_trees.h"

/**
 * binary_tree_node - Create a binary tree node
 * @parent: Pointer to the parent node
 * @value: Value to be stored in the new node
 *
 * Description: This function creates a new binary tree node with the given
 * value and parent node.
 *
 * Return: Pointer to the newly created node, or NULL on failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    /* Allocate memory for the new node*/
    new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL)
    {
        return (NULL); /* Memory allocation failed, return NULL*/
    }

    // Initialize the new node's values and pointers
    new_node->n = value;          /* Set the value */
    new_node->parent = parent;    /* Set the parent pointer */
    new_node->left = NULL;        /* Initialize left child as NULL */
    new_node->right = NULL;       /* Initialize right child as NULL */

    return (new_node); /* Return the pointer to the new node */
}
