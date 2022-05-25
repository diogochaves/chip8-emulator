#ifndef CHIP8SCREEND_H
# define CHIP8SCREEND_H

#include <stdbool.h>
#include "config.h"

typedef struct chip8_screen
{
	bool	pixels[CHIP8_HEIGHT][CHIP8_WIDTH];
} t_chip8_screen;

void	chip8_screen_clear(t_chip8_screen *screen);
void	chip8_screen_set(t_chip8_screen *screen, int x, int y);
bool	chip8_screen_is_set(t_chip8_screen *screen, int x, int y);
bool	chip8_screen_draw_sprite(t_chip8_screen *screen, int x, int y, const char *sprite, int num);

#endif
