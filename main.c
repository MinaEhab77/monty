#include "monty.h"
#include <stdio.h>
bus_t bus = {NULL, NULL, NULL, 0};

/**
 * main - monty code interpreter
 * @argc: number of arguments
 * @argv: monty file location
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
char buffer[1024];
FILE *file;
size_t size;
stack_t *stack = NULL;
unsigned int counter = 0;
if (argc != 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}
file = fopen(argv[1], "r");
bus.file = file;

if (!file)
{
fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
exit(EXIT_FAILURE);
}
while (fgets(buffer, sizeof(buffer), file) != NULL)
{
size = strlen(buffer);
counter++;
if (size > 0 && buffer[size - 1] == '\n')
{
buffer[size - 1] = '\0';
size--;
}
bus.content = buffer;
execute(buffer, &stack, counter, file);
}

free_stack(stack);
fclose(file);
return 0;
}

