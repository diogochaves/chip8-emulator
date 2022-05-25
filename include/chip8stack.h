#ifndef CHIP8STACK_H
# define CHIP8STACK_H

# include "config.h"

typedef struct s_chip8 t_chip8;

typedef struct chip8_stack
{
	unsigned short	stack[CHIP8_TOTAL_STACK_DEPTH];
} t_chip8_stack;

void			chip8_stack_push(t_chip8 *chip8, unsigned short val);
unsigned short	chip8_stack_pop(t_chip8 *chip8);

#endif
