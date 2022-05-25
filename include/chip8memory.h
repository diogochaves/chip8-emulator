#ifndef CHIP8MEMORY_H
# define CHIP8MEMORY_H

# include "config.h"

typedef struct s_chip8_memory
{
	unsigned char	memory[CHIP8_MEMORY_SIZE];
} t_chip8_memory;

void			chip8_memory_set(t_chip8_memory *memory, int index, unsigned char val);
unsigned char	chip8_memory_get(t_chip8_memory *memory, int index);
unsigned short	chip8_memory_get_short(t_chip8_memory *memory, int index);

#endif
