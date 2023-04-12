#include <stdio.h>
#include "main.h"

/**
* main - print each argument passed to program on a line
* @argc: argument counter
* @argv: pointer to array of arguments
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	int j;
	for (j = 0; j < argc; j++)
		printf("%s\n", argv[j]);
	return (0);
}
