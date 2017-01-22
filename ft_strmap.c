/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichrist <pichrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 17:32:38 by pichrist          #+#    #+#             */
/*   Updated: 2017/01/09 21:02:47 by pichrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*new;
	size_t	i;

	new = NULL;
	if (s && f)
	{
		if ((new = (char*)ft_memalloc(ft_strlen(s) + 1)) == NULL)
			return (NULL);
		i = -1;
		while (++i < ft_strlen(s))
			new[i] = f(s[i]);
	}
	return (new);
}
