/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rgba_to_uint32.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcanteau <jcanteau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 18:40:52 by jcanteau          #+#    #+#             */
/*   Updated: 2020/06/23 19:20:55 by jcanteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	rgba_to_uint32(unsigned char r, unsigned char g,
				unsigned char b, unsigned char a)
{
	return ((r << 24) + (g << 16) + (b << 8) + a);
}
