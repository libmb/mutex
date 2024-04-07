/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mb_mutex_lock.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 02:57:18 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2024/04/08 03:03:52 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mb_mutex.h"

#include <stdlib.h>

#include "internal.h"

#ifdef _WIN32

// TODO: add Windows support
void	mb_mutex_lock(t_mb_mutex *self)
{
	(void)self;
}

#else

void	mb_mutex_lock(t_mb_mutex *self)
{
	pthread_mutex_lock(&self->mutex);
}

#endif
