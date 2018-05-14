/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   play.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scollet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 01:54:38 by scollet           #+#    #+#             */
/*   Updated: 2017/06/14 01:54:39 by scollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int   is_a_loss(t_body mind)
{
  int   i;
  int   j;
  int   k;

  i = 1 + mind.state.time;
  j = -1;
  k = -1;
  while (--i >= 0)
  {
    if (mind.state.action[i][j][k])
  }
  return (0);
}

t_body  probable_loss(t_body mind)
{
  int loss;

  if (loss = is_a_loss(mind.state.action[][][]) > 0)
  {
    return (1);
  }
  else if (loss < 0)
  {
    find_move(mind);
    mind.state.action[mind.state.time][mind.move][mind.link]
  }
  else
  {

  }
  return (mind)
}

t_body find_move(t_body mind)
{
  return (mind);
}

void  play(t_body mind)
{
  while (mind.state.time < 15)
  {
    mind.limb.probability = probable_loss(mind).limb.probability;
    mind.limb.reward = action_reward(mind).limb.reward;
    /*
    * TODO : Find optimal values!
    * mind.state.state[15] is a set of states
    * mind.state.state[t] is the state at the current time
    * mind.state.action[6] is the set of possible actions
    * mind.state.action[t] is the action at state[t]
    * mind.limb.probability is the result of function probable_loss(
    *   mind) that action[t] at state[t] will lead to state[t + 1]
    * mind.limb.reward is the result of function action_reward(
    *   mind) after transitioning from state[t] to state[t + 1] due to
    *   action[t]
    * mind.limb.discount is the discount factor which represents the
    *   difference of importance between future rewards and present
    *   rewards
    */
  }
  return ;
}
