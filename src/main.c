/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main
*/

#include <stdio.h>
#include <unistd.h>
#include "include.h"

int main(int argc, char **argv)
{
	int len = 0;
	int arg = 1;

	if (argc == 1) {
		my_putchar('\n');
		return (0);
	}
	while (argv[arg][len] != '\0' && argc > 1)  {
		len = len + 1;
	}
	if (argc > 1) {
		stumper(len, argv);
	}
	return (0);
}
