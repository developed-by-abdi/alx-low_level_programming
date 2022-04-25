#include "lists.h"

/**
 * listint_len - finds the number of elements in a linked list
 * @h: pointer to the start of the linked list
 *
 * Return: number of elements in the linked list
 */
 
 size_t listint_len(const listint_t *h);
 {
    size_t i;
    const listint_t *temp;
    
    temp = h;

    for(i = 0; temp; i++)
    {
        temp = temp->next;
    }
    return (i);
 }
