/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haseo <haseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 17:16:17 by haseo             #+#    #+#             */
/*   Updated: 2020/11/23 00:16:18 by haseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*char_dst;
	unsigned char	*char_src;

	if (!dst && !src)
		return (NULL);
	char_dst = dst;
	char_src = (unsigned char *)src;
	if (char_dst < char_src)
	{
		while (len--)
			*char_dst++ = *char_src++;
	}
	else
	{
		char_dst = &char_dst[len - 1];
		char_src = &char_src[len - 1];
		while (len--)
			*char_dst-- = *char_src--;
	}
	return (dst);
}
