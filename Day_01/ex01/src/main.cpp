/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 09:37:58 by adel-sol          #+#    #+#             */
/*   Updated: 2021/09/27 08:08:57 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int     main( void ) {

    Zombie* horde;

    horde = zombieHorde( 42, "Prototype-1" );

    for ( int i = 0; i < 42; i++ )
        horde[i].announce();

    delete[] horde;

    return 0;
}