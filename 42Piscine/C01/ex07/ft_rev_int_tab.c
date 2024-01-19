/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akar <akar@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 03:49:33 by akar              #+#    #+#             */
/*   Updated: 2023/10/24 19:20:42 by akar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	reverse;

	a = 0;
	b = size - 1;
	while (a < size / 2)
	{
		reverse = tab[a];
		tab[a] = tab[b];
		tab[b] = reverse;
		a++;
		b--;
	}
}
