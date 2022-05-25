#ifndef CHIP8_H
# define CHIP8_H

# include <stddef.h>
# include "config.h"
# include "chip8memory.h"
# include "chip8stack.h"
# include "chip8registers.h"
# include "chip8keyboard.h"
# include "chip8screen.h"

typedef struct s_chip8
{
	t_chip8_memory		memory;
	t_chip8_stack		stack;
	t_chip8_registers	registers;
	t_chip8_keyboard	keyboard;
	t_chip8_screen		screen;
} t_chip8;

void	chip8_init(t_chip8 *chip8);
void	chip8_load(t_chip8 *chip8, const char *buf, size_t size);
void	chip8_exec(t_chip8 *chip8, unsigned short opcode);

#endif
