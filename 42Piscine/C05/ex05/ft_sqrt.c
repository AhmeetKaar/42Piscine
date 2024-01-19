/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akar <akar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:53:34 by akar              #+#    #+#             */
/*   Updated: 2023/11/05 14:39:31 by akar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	num;

	num = 1;
	if (nb <= 0)
		return (0);
	while (num <= nb / num)
	{
		if (num * num == nb)
			return (num);
		num++;
	}
	return (0);
}