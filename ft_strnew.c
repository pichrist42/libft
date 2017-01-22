/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichrist <pichrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 17:27:54 by pichrist          #+#    #+#             */
/*   Updated: 2017/01/14 01:32:54 by pichrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*new;
	size_t	i;

	i = 0;
	new = (char*)ft_memalloc(size + 1);
	if (new)
	{
		while (i * sizeof(*new) < size)
			new[i++] = '\0';
		return (new);
	}
	return (NULL);
}
