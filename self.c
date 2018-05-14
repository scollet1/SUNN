/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   self.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scollet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 01:42:58 by scollet           #+#    #+#             */
/*   Updated: 2017/06/14 01:42:59 by scollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void  init(t_body mind)
{
  memset(&mind, 0, sizeof(mind));
  memset(&mind.state, 0, sizeof(mind.state));
  memset(&mind.update, 0, sizeof(mind.update));
  mind.update.reward = 5;
  return ;
}

int   main()
{
  t_body mind;
  init(mind);
  while (1)
  {
    play(mind);
  }
  return (0);
}
