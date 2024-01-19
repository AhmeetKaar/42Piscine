/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akar <akar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 12:29:10 by akar              #+#    #+#             */
/*   Updated: 2023/10/30 13:46:12 by akar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	res;

	i = 0;
	res = 0;
	while (dest[res])
		res++;
	while (src[i] && i < nb)
	{
		dest[res] = src[i];
		res++;
		i++;
	}
	dest[res] = '\0';
	return (dest);
}
