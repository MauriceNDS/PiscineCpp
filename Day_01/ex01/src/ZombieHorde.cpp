/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 07:59:12 by adel-sol          #+#    #+#             */
/*   Updated: 2021/09/27 08:10:31 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, string name ) {
	
	Zombie*	horde = new Zombie[N];

	for ( int i = 0; i < N; i++ )
		horde[i].setName( name );
	
	return horde;
}