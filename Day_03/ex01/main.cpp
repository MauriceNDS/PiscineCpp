/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 07:56:16 by adel-sol          #+#    #+#             */
/*   Updated: 2021/10/01 08:40:38 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int     main( void ) {

    // ClapTrap    a( "Prototype-42", 3 );
    // ClapTrap    b( "Bar-19", 2 );

    // a.attack( "Bar-19" );
    // b.takeDamage( 3 );
    // a.attack( "Bar-19" );
    // b.takeDamage( 3 );
    // a.attack( "Bar-19" );
    // b.takeDamage( 3 );
    // a.attack( "Bar-19" );
    // b.takeDamage( 3 );

    // b.beRepaired( 100 );
    // a.beRepaired( 4242 );

    ClapTrap    c1( "Jackie-55", 5 );
    ScavTrap    s1( "Mgk-12" );

    c1.attack( "nothing" );
    s1.attack( "Jackie-55" );
    c1.takeDamage( 20 );

    s1.guardGate();
    
    return 0;
}