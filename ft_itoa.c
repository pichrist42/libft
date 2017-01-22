/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichrist <pichrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 17:46:36 by pichrist          #+#    #+#             */
/*   Updated: 2017/01/17 05:17:47 by pichrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_itoa_get_length(int nbr)
{
	int i;
	int again;

	again = 1;
	i = (nbr < 0) ? 1 : 0;
	while (again)
	{
		nbr /= 10;
		i++;
		if (ft_abs(nbr) <= 9)
			again = 0;
	}
	return (i + 1);
}

char		*ft_itoa(int nbr)
{
	char	*s;
	int		i;

	if (nbr == 0)
		return (ft_strdup("0"));
	if ((s = ft_strnew(ft_itoa_get_length(nbr))) == NULL)
		return (NULL);
	i = 0;
	while (i++ < ft_itoa_get_length(nbr))
		s++;
	i = (nbr < 0) ? 1 : 0;
	while (nbr != 0)
	{
		*--s = ft_abs(nbr % 10) + '0';
		nbr /= 10;
	}
	if (i)
		*--s = '-';
	return (s);
}
