/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   razradl.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calpha <calpha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 14:25:26 by calpha            #+#    #+#             */
/*   Updated: 2020/01/30 14:26:34 by calpha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	razradl(long long int m)
{
	int j;

	j = 0;
	while (m != 0)
	{
		j++;
		m = m / 10;
	}
	return (j);
}