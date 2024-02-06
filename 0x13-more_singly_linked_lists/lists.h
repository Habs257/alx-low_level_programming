#ifndef _LISTS_H_
#define _LISTS_H_

#include <stdio.h>
#include <stdlib.h>
/**
 *struct listint_s - self referencial struct
 *for creating node of singly linked list
 *
 *@n: integer data
 *@next:self referential pointer
 *pointer to the next node of the list
*/

typedef struct listint_s
{
	int n;
	struct listint_s *next;

} listint_t;
size_t print_listint(const listint_t *h);

#endif
