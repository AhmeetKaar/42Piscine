/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akar <akar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 22:31:29 by akar              #+#    #+#             */
/*   Updated: 2023/11/08 07:24:41 by akar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	d;
	int	res;

	d = 1;
	res = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		d *= (*str == '-') * -1 + !(*str == '-');
		str++;
	}
	while (*str >= '0' && *str <= '9')
		res = res * 10 + *str++ - 48;
	return (res * d);
}