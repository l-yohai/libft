/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 14:26:43 by yohlee            #+#    #+#             */
/*   Updated: 2020/02/28 00:51:58 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*new;

	if (!(new = (unsigned char *)malloc(sizeof(size) * nmemb)))
		return (NULL);
	ft_memset(new, 0, nmemb * size);
	return ((void *)new);
}
