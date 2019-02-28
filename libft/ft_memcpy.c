/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 18:16:36 by phtruong          #+#    #+#             */
/*   Updated: 2019/02/25 09:41:29 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DESCRIPTION
** The memcpy() function copies n bytes from mem src to mem dst.
** If dst and src overlap, behavior is undefined.
** When dst, src overlap, use memmove() instead.
** RETURN VALUES
** The memcpy() function returns the original value of dst.
** Examples:
** src starts @4; dst starts @8; src = "12345678";
** after memcpy dst = "12341234"
*/

/*
** PSEUDOCODE
** Initialize pointers for dst and src
** |--> point them to dst and src
** While n is true
** |--> set dst equals to src and increment pointer
** Return dst after n bytes are copied
*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dest;
	const char	*source;

	dest = dst;
	source = src;
	while (n--)
		*dest++ = *source++;
	return (dst);
}
