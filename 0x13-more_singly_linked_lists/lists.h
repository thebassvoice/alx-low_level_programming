#ifndef _LISTS_
#define _LISTS_
#include <stdlib.h>
#include <stdio.h>
/**
 * struct listint_s - lists function
 * @num: int
 * @next: node pointer
 */
typedef struct listint_s
{
	int num;
	struct listint_s *next;
} listint_t;
/* Prototypes */
size_t print_listint(const listint_t *h);
#endif
