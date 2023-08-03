#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct binary_tree_s - Structure representing a binary tree node.
 * @n: Integer value stored in the node.
 * @parent: Pointer to the parent node.
 * @left: Pointer to the left child node.
 * @right: Pointer to the right child node.
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;

/**
 * binary_tree_print - Prints a binary tree using ASCII art.
 * @tree: Pointer to the root node of the tree to print.
 */
void binary_tree_print(const binary_tree_t *tree);

/* Task 0 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/* Task 1 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

/* Task 2 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

/* Task 3 */
void binary_tree_delete(binary_tree_t *tree);

/* Task 4 */
int binary_tree_is_leaf(const binary_tree_t *node);

/* Task 5 */
int binary_tree_is_root(const binary_tree_t *node);

/* Task 6 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

/* Task 7 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));

/* Task 8 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

/* Task 9 */
size_t binary_tree_height(const binary_tree_t *tree);

/* Task 10 */
size_t binary_tree_depth(const binary_tree_t *tree);

/* Task 11 */
size_t binary_tree_size(const binary_tree_t *tree);

/* Task 12 */
size_t binary_tree_leaves(const binary_tree_t *tree);

/* Task 13 */
size_t binary_tree_nodes(const binary_tree_t *tree);

/* Task 14 */
int binary_tree_balance(const binary_tree_t *tree);

/* Task 15 */
int binary_tree_is_full(const binary_tree_t *tree);

/* Task 16 */
int binary_tree_is_perfect(const binary_tree_t *tree);

/* Task 17 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node);

/* Task 18 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node);

/* Task 19 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
	const binary_tree_t *second);

/* Task 20 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));

/* Task 21 */
int binary_tree_is_complete(const binary_tree_t *tree);

/* Task 22 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);

/* Task 23 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);

/* Task 24 */
int binary_tree_is_bst(const binary_tree_t *tree);

/* Task 25 */
bst_t *bst_insert(bst_t **tree, int value);

/* Task 26 */
bst_t *array_to_bst(int *array, size_t size);

/* Task 27 */
bst_t *bst_search(const bst_t *tree, int value);

/* Task 28 */
bst_t *bst_remove(bst_t *root, int value);

/* Task 29 */
int binary_tree_is_avl(const binary_tree_t *tree);

/* Task 30 */
avl_t *avl_insert(avl_t **tree, int value);

/* Task 31 */
avl_t *array_to_avl(int *array, size_t size);

/* Task 32 */
avl_t *avl_remove(avl_t *root, int value);

/* Task 33 */
avl_t *sorted_array_to_avl(int *array, size_t size);

/* Task 34 */
int binary_tree_is_heap(const binary_tree_t *tree);

/* Task 35 */
heap_t *heap_insert(heap_t **root, int value);

/* Task 36 */
heap_t *array_to_heap(int *array, size_t size);

/* Task 37 */
int heap_extract(heap_t **root);

/* Task 38 */
int *heap_to_sorted_array(heap_t *heap, size_t *size);

#endif /* BINARY_TREES_H */
