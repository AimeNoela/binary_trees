#include "binary_trees.h"

/**
 * array_to_heap - Builds a Max Binary Heap tree from an array of integers.
 *
 * @array: Pointer to the first element of the integer array.
 * @size: Number of elements in the array.
 *
 * Description: This function creates a Max Binary Heap tree (binary tree where
 * the parent nodes are greater than or equal to their children) from an array
 * of integers. It inserts each element from the array into the Max Binary Heap
 * one by one using the heap_insert function.
 *
 * Return: Pointer to the root node of the Max Binary Heap tree if successful,
 * or NULL if any memory allocation fails.
 */
heap_t *array_to_heap(int *array, size_t size)
{
	heap_t *tree;
	size_t i;

	tree = NULL; /*Initialize the tree as NULL*/

	for (i = 0; i < size; i++)
	{
		heap_insert(&tree, array[i]);
		/*Insert each element from the array into the Max Binary Heap*/
	}

	return (tree); /*Return a pointer to the root node of Max Binary Heap tree*/
}
