/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akar <akar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 20:27:43 by akar              #+#    #+#             */
/*   Updated: 2023/11/05 22:09:31 by akar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		if (s1[i] < s2[i] || s1[i] > s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main(int ac, char **av)
{
	int		y;
	int		x;

	x = 1;
	while (x < ac - 1)
	{
		y = 1;
		while (y < ac - 1)
		{
			if (ft_strcmp(av[y], av[y + 1]) > 0)
			{
				ft_swap(&av[y], &av[y + 1]);
			}
			y++;
		}
		x++;
	}
	y = 1;
	while (y < ac)
	{
		ft_putstr(av[y]);
		ft_putchar('\n');
		y++;
	}
	return (0);
}
