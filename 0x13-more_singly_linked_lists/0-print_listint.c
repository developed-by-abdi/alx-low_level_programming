#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a linked list
 * @h: pointer to the listint list to print
 * Return: the number of nodes printed
 */
size_t print_listint(const listint_t *h)
{
    size_t i = 0;

    while(h)
    {
        if(h == NULL)
            return (1);
        else
        {
            printf("%d", h->n);
            i++;
            h = h->next;
        }
    }
    return (i);
}
