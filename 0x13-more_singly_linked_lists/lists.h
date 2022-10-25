#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked int
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */

typedef struct listint_S
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);


#endif

