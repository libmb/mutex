/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mb_mutex_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 02:57:18 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2024/04/08 02:59:53 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mb_mutex.h"

#include <stdlib.h>

#include "internal.h"

#ifdef _WIN32

// TODO: add Windows support
t_mb_err	mb_mutex_init(t_mb_mutex **out)
{
	(void)out;
	return (true);
}

#else

t_mb_err	mb_mutex_init(t_mb_mutex **out)
{
	t_mb_mutex *const	result = malloc(sizeof(t_mb_mutex));

	if (!result)
		return (true);
	if (pthread_mutex_init(&result->mutex, NULL) != 0)
	{
		free(result);
		return (true);
	}
	*out = result;
	return (false);
}

#endif
