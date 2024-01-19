/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akar <akar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 11:54:52 by akar              #+#    #+#             */
/*   Updated: 2023/10/30 14:05:26 by akar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	res;

	i = 0;
	res = 0;
	while (dest[res])
		res++;
	while (src[i])
	{
		dest[res] = src[i];
		res++;
		i++;
	}
	dest[res] = '\0';
	return (dest);
}
