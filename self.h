/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   self.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scollet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 01:43:03 by scollet           #+#    #+#             */
/*   Updated: 2017/06/14 18:51:55 by scollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SELF_H
# define SELF_H

typedef struct  s_state {
  int   action[15][6];
  int   time;
}               t_state;

typedef struct  s_learn {
  float probability;
  int   reward;
  float gamma;
}               t_learn;

typedef struct  s_body {
  t_state state;
  t_learn limb;
}               t_body;

#endif
