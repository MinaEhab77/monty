#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

/**
 * struct st - dll stack or queue.
 * @n: int.
 * @prev: previous element of stack
 * @next: next element of stack
 * Description: doubly linked list n
 */

typedef struct st
{
	int n;
	struct st *prev;
	struct st *next;
} stack_t;

/**
 * struct bus_s - variable
 * @arg: val
 * @file: ptr to monty f
 * @content: just content
 * @lifi: a flag
 * Description: values carrying
 */

typedef struct bus
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_t;
extern bus_t bus;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its functions
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
int execute(char *content, stack_t **head, unsigned int counter, FILE *file);
void free_stack(stack_t *h);
void _pop(stack_t **h, unsigned int c);
void _swap(stack_t **h, unsigned int c);
void _add(stack_t **h, unsigned int c);
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);
void _push(stack_t **h, unsigned int c);
void _pall(stack_t **h, unsigned int c);
void _pintt(stack_t **h, unsigned int c);
void _nop(stack_t **h, unsigned int c);
void addnode(stack_t **h, int n);
void addqueue(stack_t **h, int n);
void _queue(stack_t **h, unsigned int c);
void _stack(stack_t **h, unsigned int c);

#endif
