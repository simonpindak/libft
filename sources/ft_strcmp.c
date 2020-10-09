/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calpha <calpha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 03:00:31 by calpha            #+#    #+#             */
/*   Updated: 2019/10/05 10:21:11 by calpha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 - *s2 == 0 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	return ((int)(*(unsigned char *)s1 - *(unsigned char *)s2));
}