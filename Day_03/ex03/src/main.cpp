/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 07:56:16 by adel-sol          #+#    #+#             */
/*   Updated: 2021/10/01 09:59:00 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int     main( void ) {

    DiamondTrap     d1( "DT" );

    d1.attack( "sadness" );

    d1.guardGate();
    d1.highFivesGuys();

    d1.whoAmI();
    
    return 0;
}