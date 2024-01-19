/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akar <akar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:39:57 by akar              #+#    #+#             */
/*   Updated: 2023/11/08 01:48:11 by akar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*arr;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	i = max - min;
	arr = malloc(sizeof(int) * i);
	if (arr == 0)
	{
		*range = 0;
		return (-1);
	}
	*range = arr;
	i = 0;
	while (max > min)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (i);
}
