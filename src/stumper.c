/*
** EPITECH PROJECT, 2018
** stumper.c
** File description:
** stumper
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "include.h"

int stumper(int len, char **argv)
{
	int max_index = 0;
	int index = 0;
	char *str;
	int nel = 0;
	str = malloc(sizeof(char) * len);
	while (index != len) {
		str[index] = argv[1][index];
		index ++;
	}
	max_index = index;
	while (str[index] != ' ' && index) {
		nel ++;
		index--;
	}
	world1(index, nel, str, max_index);
	return (0);
}

int world1(int index, int nel, char *str, int max_index)
{
	int second = 0;
	char *first;
	first = malloc(sizeof(char) * nel);

	while (str[index] == ' ') {
		index++;
	}
	while (str[index] != '\0') {
		first[second] = str[index];
		index ++;
		second ++;
	}
	my_putstr(first);
	scan(nel, str, max_index);
	return (0);
}

int scan(int nel, char *str, int max_index)
{
	int token = 1;
	max_index = max_index - nel;
	int index = 0;

	while (index != max_index) {
		if (token == 1){
			my_putchar(' ');
			token = 0;
		}
		if (str[index] != ' ') {
			my_putchar(str[index]);
			token = 0;
			index ++;
		}
		if (token == 0 && str[index] == ' ') {
			token = 1;
		}
		while (str[index] == ' ') {
			index++;
		}
		index++;
	}
	my_putchar('\n');
	return (0);
}
