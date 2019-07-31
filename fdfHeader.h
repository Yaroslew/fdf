/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   record_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorlys- <pcorlys-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/24 10:48:44 by pcorlys-          #+#    #+#             */
/*   Updated: 2019/06/01 17:13:03 by pcorlys-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_FDFHEADER_H
#define FDF_FDFHEADER_H

# include "libft/includes/libft.h"
# include <math.h>
# include <mlx.h>
# include <fcntl.h>

/*
 *  ---writed_map---
 */
typedef struct	s_map
{
	int			x;
	int			y;
	int			z;
	int			color;
}				t_map;
/*
 * ---Draw line---
 */

typedef struct	s_line
{
	t_map		one;
	t_map		two;
	t_map		start;
	int			posCenterVer;
	int			posCenterHor;
	int			deltaX;
	int			deltaY;
	int			diry;
	float		stepErr;
}				t_line;

/*
 *  ---base_data---
 */
typedef struct s_base
{
	int			size_map[2];
	int			scale;
	int			standart_color;
	t_map		*map;
	t_map		*mapDraw;

	void		*mlx_ptr;
	void		*win_ptr;
	void		*img_ptr;
	int			win_hor;
	int			win_ver;
	int			*data_img;

	t_line		*lineDraw;
}				t_base;

void			mess_err(int a);
void			valid(int ac, char *av, t_base *base);
void			record_map(char *argv, t_base *base);
int				get_color(t_map current, t_map start, t_map end, int flag);
void			draw_map(t_base *base);
void			stdOutput(t_base *base);


#endif
