# 0x19 C - Stacks, Queues - LIFO, FIFO :pencil2:

> C is a powerful general-purpose programming language. It can be used to develop software like operating systems, databases, compilers, and so on. This projects covers concepts of Stacks, Queues, LIFO, FIFO implementation.
This was a duo project with the awesome partner [Karen Herrera](https://github.com/karenaHV/)

At the end of this project, We were able to solve these questions:
  
* What do LIFO and FIFO mean
* What is a stack, and when to use it
* What is a queue, and when to use it
* What are the common implementations of stacks and queues
* What are the most common use cases of stacks and queues
* What is the proper way to use global variables

## Tasks :heavy_check_mark:

0. Implement the push and pall opcodes
1. Implement the pint opcode.
2. Implement the pop opcode.
3. Implement the swap opcode.
4. Implement the add opcode.
5. Implement the nop opcode.
6. Implement the sub opcode.
7. Implement the div opcode.
8. Implement the mul opcode.
9. Implement the mod opcode.
10. When the first non-space character of a line is #, treat this line as a comment (don’t do anything).
11. Implement the pchar opcode.
12. Implement the pstr opcode.
13. Implement the rotl opcode.
14. Implement the rotr opcode.
15. Implement the stack and queue opcodes.
16. Write a Brainf*ck script that prints Holberton (at bf/dir)
17. Read the two digits from stdin, add them, and print the result (at bf/dir)
18. Read the two digits from stdin, multiply them, and print the result (at bf/dir)
19. Multiply two digits given by the user. (at bf/dir)

## Results :chart_with_upwards_trend:

| Filename |
| ------ |
| [bf](https://github.com/edward0rtiz/monty/tree/df9ab3ad3ae6d985abefed3d2b5919577256f8b5/bf)|
| [builtins1.c](https://github.com/edward0rtiz/monty/blob/df9ab3ad3ae6d985abefed3d2b5919577256f8b5/builtins1.c)|
| [builtins2.c](https://github.com/edward0rtiz/monty/blob/df9ab3ad3ae6d985abefed3d2b5919577256f8b5/builtins2.c)|
| [builtins3.c](https://github.com/edward0rtiz/monty/blob/df9ab3ad3ae6d985abefed3d2b5919577256f8b5/builtins3.c)|
| [error_1.c](https://github.com/edward0rtiz/monty/blob/df9ab3ad3ae6d985abefed3d2b5919577256f8b5/error_1.c)|
| [error_2.c](https://github.com/edward0rtiz/monty/blob/df9ab3ad3ae6d985abefed3d2b5919577256f8b5/error_2.c)|
| [free.c](https://github.com/edward0rtiz/monty/blob/df9ab3ad3ae6d985abefed3d2b5919577256f8b5/free.c)|
| [get_ops.c](https://github.com/edward0rtiz/monty/blob/df9ab3ad3ae6d985abefed3d2b5919577256f8b5/get_ops.c)|
| [linked_list.c](https://github.com/edward0rtiz/monty/blob/df9ab3ad3ae6d985abefed3d2b5919577256f8b5/linked_list.c)|
| [main_monty.c](https://github.com/edward0rtiz/monty/blob/df9ab3ad3ae6d985abefed3d2b5919577256f8b5/main_monty.c)|
| [monty.h](https://github.com/edward0rtiz/monty/blob/df9ab3ad3ae6d985abefed3d2b5919577256f8b5/monty.h)|
| [stacks.c](https://github.com/edward0rtiz/monty/blob/df9ab3ad3ae6d985abefed3d2b5919577256f8b5/stacks.c)|
| [str3.c](https://github.com/edward0rtiz/monty/blob/df9ab3ad3ae6d985abefed3d2b5919577256f8b5/str3.c)|
| [tokerr.c](https://github.com/edward0rtiz/monty/blob/df9ab3ad3ae6d985abefed3d2b5919577256f8b5/tokerr.c)|
| [bytecodes](https://github.com/edward0rtiz/monty/tree/df9ab3ad3ae6d985abefed3d2b5919577256f8b5/bytecodes)|


## Additional info :construction:
### Resources

- GLIBC 2.24
- gcc 4.8.4
- betty linter 0.32



### Try It On Your Machine computer:	
```bash
git clone https://github.com/edward0rtiz/holbertonschool-low_level_programming.git
cd monty
gcc -Wall -Werror -Wextra -pedantic *.c -o monty
USAGE
cat -e bytecodes/000.m

FORT TESTING WITH BYTECODES:
cd bytecodes
cat bytecodes/FILENAME.m
./monty bytecodes/FILENAME.m
```
