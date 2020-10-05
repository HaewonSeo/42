/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haseo <haseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 22:07:53 by haseo             #+#    #+#             */
/*   Updated: 2020/09/30 22:07:53 by haseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = dest;
	while (i < len)
		str[i++] = (unsigned char)c;
	return (dest);
}

int		main(void)
{
	char str[] = "aaa aaa";

	printf("%s\n", str);
	memset(str, '-', 3);
	printf("%s\n", str);
	ft_memset(str, '*', 3);
	printf("%s\n", str);

	return (0);
}
