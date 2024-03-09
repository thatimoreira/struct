/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02_returnnpass_struct2function.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <tsoares-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 14:43:55 by tsoares-          #+#    #+#             */
/*   Updated: 2024/03/09 15:28:56 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct Point
{
	double x, y;
} Point;

void	getMiddlePoint(const Point *a, const Point *b, Point *out)
{
	out->x = (a->x + b->x) / 2;
	out->y = (a->y + b->y) / 2;
}

int	main(void)
{
	Point	p1 =
	{
		p1.x = 1,
		p1.y = 1
	};
	Point	p2 =
	{
		p2.x = 3,
		p2.y = 2
	};
	Point	middle;
	getMiddlePoint(&p1, &p2, &middle);
	printf("middle = (%.2lf, %.2lf)\n", middle.x, middle.y);
	return (0);
}

