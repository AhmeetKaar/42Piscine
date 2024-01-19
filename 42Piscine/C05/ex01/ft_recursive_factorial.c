/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akar <akar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 22:23:08 by akar              #+#    #+#             */
/*   Updated: 2023/11/05 00:51:17 by akar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	unsigned int	res;

	res = 1;
	if (nb < 0)
		return (0);
	if (nb > 0)
	{
		res = nb * ft_recursive_factorial(nb - 1);
		nb--;
	}
	return (res);
}
