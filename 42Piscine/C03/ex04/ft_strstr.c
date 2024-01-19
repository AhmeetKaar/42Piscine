/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akar <akar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 14:01:12 by akar              #+#    #+#             */
/*   Updated: 2023/10/30 14:12:18 by akar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	x;

	i = 0;
	x = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i])
	{
		while (str[i + x] == to_find[x] && str[i + x])
			x++;
		if (to_find[x] == '\0')
			return (str + i);
		i++;
		x = 0;
	}
	return (0);
}
