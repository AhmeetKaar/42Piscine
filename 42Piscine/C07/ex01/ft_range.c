/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akar <akar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:21:16 by akar              #+#    #+#             */
/*   Updated: 2023/11/08 01:48:16 by akar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;

	i = 0;
	if (min == max || min > max)
		return (0);
	i = max - min;
	arr = malloc(sizeof(int) * i);
	if (arr == 0)
		return (0);
	i = 0;
	while (max > min)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
