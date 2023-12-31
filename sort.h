#ifndef SORT_H
#define SORT_H
#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);
listint_t *s_node(listint_t *node, listint_t **list);
void swap(int *array, ssize_t item1, ssize_t item2);
int lomuto_partition(int *array, ssize_t first, ssize_t last, size_t size);
void quick_sort_implementation(int *array, ssize_t first, ssize_t last, int size);
void swap_shell(int *array, int item1, int item2);
listint_t *node_swap(listint_t *node, listint_t **list);
void *_calloc(unsigned int nmemb, unsigned int size);
void merge(int *arr, int *tmp, int start, int mid, int end);
void mergesort(int *array, int *tmp, int start, int end);
void swap_heap(int *a, int *b);
void maxHeapify(int *array, size_t size, int idx, size_t n);
void heap_sort(int *array, size_t size);
int getMax(int *arr, int n);
void countSort(int *arr, size_t n, int exp, int *output);
void swap_bitonic(int arr[], int item1, int item2, int order);
void merge_bitonic(int arr[], int low, int nelemnt, int order);
void bitonicsort(int arr[], int low, int nelemnt, int order, int size);
void swap_hoare(int *array, ssize_t item1, ssize_t item2);
int hoare_partition(int *array, int first, int last, int size);
void qs(int *array, ssize_t first, ssize_t last, int size);

#endif /* SORT_H */
