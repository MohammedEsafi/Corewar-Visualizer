/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visualizer.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesafi <mesafi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 18:49:10 by mesafi            #+#    #+#             */
/*   Updated: 2020/12/17 18:49:12 by mesafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VISUALIZER_H

/*
 ** Definitions
*/

# define VISUALIZER_H

# define MEM_SIZE 4096
# define WIDTH 1400
# define HEIGHT 910 
# define NEW 6
# define OLD 5

/*
 ** Includes
*/

# include <stdio.h>
# include <GLUT/glut.h>
# include <GLUT/glutbitmap.h>
# include "../includes/virtual_machine.h"
# include "../ft_printf/libft/headers/deque.h"
# include "../ft_printf/libft/headers/dlist.h"

/*
 ** Functions ProtoType
*/

void	visualizer(t_deque *deque);
void	draw_map(t_dlist *node);
void	rectangle(int x1, int y1, int x2, int y2, int background);
void	renderBitmapString(float x, float y, char *str, int foreground);

#endif
