/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scharuka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 22:42:27 by scharuka          #+#    #+#             */
/*   Updated: 2022/07/31 22:50:58 by scharuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_isalnum(int c)
{
	if ((c <= '9' && c >= '0' ) || (c >= 'a' && c <= 'z' )
		|| (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
