/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   internal.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 02:54:44 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2024/04/08 02:57:04 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERNAL_H
# define INTERNAL_H

# include "mb_mutex_type.h"

# ifdef _WIN32
#  include <windows.h>
# else
#  include <pthread.h>
# endif

# ifdef _WIN32

// TODO: add Windows support
struct s_mb_mutex
{
};

# else

struct s_mb_mutex
{
	pthread_mutex_t	mutex;
};

# endif

#endif
