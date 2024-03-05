/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01_codesDope_lv2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <tsoares-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 05:50:02 by tsoares-          #+#    #+#             */
/*   Updated: 2024/03/05 08:00:03 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Write a program to store and print the roll no., name , age and marks of a student using structures.
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct	Student
{
	int	rollnum;
	char	*name;
	int	age;
	int	marks;
} Student;

int	ft_atoi(char *s)
{
	long	n;
	size_t	i;
	int	sign;

	n = 0;
	i = 0;
	sign = 1;
	if (s[0] == '-' || s[0] == '+')
	{
		if (s[0] == '-')
			sign = -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		n = (n * 10) + (s[i] - 48);
		i++;
	}
	return ((int)n * sign);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(int argc, char **argv)
{
	if (argc == 5)
	{
		Student	a;
		size_t	namelen;

		a.rollnum = ft_atoi(argv[1]);
		namelen = ft_strlen(argv[2]);
		a.name = (char *)malloc(namelen * sizeof(char) + 1);
		if (a.name == NULL)
			return (1);
		a.name = ft_strcpy(a.name, argv[2]);
		a.age = ft_atoi(argv[3]);
		a.marks = ft_atoi(argv[4]);
		printf(" _______________________________________\n");
		printf("| Roll |       Name       | Age | Marks |\n");
		printf("|  %d  | %s | %d  |   %d   |\n", a.rollnum, a.name, a.age, a.marks);
		free(a.name);
	}
	else
		printf("\n");
	return (0);
}
