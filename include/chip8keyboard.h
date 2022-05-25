#ifndef CHIP8KEYBOARD_H
# define CHIP8KEYBOARD_H

# include <stdbool.h>
# include "config.h"

typedef struct chip8_keyboard
{
	bool		keyboard[CHIP8_TOTAL_KEYS];
	const char	*keyboard_map;
} t_chip8_keyboard;

void	chip8_keyboard_set_map(t_chip8_keyboard *keyboard, const char *map);
int		chip8_keyboard_map(t_chip8_keyboard *keyboard, char key);
void	chip8_keyboard_down(t_chip8_keyboard *keyboard, int key);
void	chip8_keyboard_up(t_chip8_keyboard *keyboard, int key);
bool	chip8_keyboard_is_down(t_chip8_keyboard *keyboard, int key);

#endif
