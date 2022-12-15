build:
	clear;
	gcc -g -Wall -Werror -Wextra -pedantic *.c -o monty
	betty-style *.c
	
