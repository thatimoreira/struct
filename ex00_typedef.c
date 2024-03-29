/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00_typedef.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <tsoares-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 03:46:31 by tsoares-          #+#    #+#             */
/*   Updated: 2024/03/05 04:38:23 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct	Point
{
	double	x;
	double	y;
} Point;

int	main(void) //int argc, char **argv)
{
	Point	p;
	p.x = 0.24;
	p.y = 0.78;
	printf("(%.2lf, %.2lf)", p.x, p.y);
	return (0);
}
