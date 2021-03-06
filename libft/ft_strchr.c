/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjulienn <cjulienn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 13:00:46 by cjulienn          #+#    #+#             */
/*   Updated: 2022/04/01 19:19:11 by cjulienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_vanilla.h"

char	*ft_strchr(const char *s, int c)
{
	char			*new_ptr;
	char			d;
	size_t			iter;

	iter = 0;
	d = (char)c;
	new_ptr = (char *)s;
	while (s[iter])
	{
		if (s[iter] != d)
			new_ptr++;
		else
			return (new_ptr);
		iter++;
	}
	if (s[iter] == d)
		return (new_ptr);
	else
		return (NULL);
}
