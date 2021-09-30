/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 07:56:16 by adel-sol          #+#    #+#             */
/*   Updated: 2021/09/30 08:29:06 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int     main( void ) {

    ClapTrap    a( "Prototype-42", 3 );
    ClapTrap    b( "Bar-19", 2 );

    a.attack( "Bar-19" );
    b.takeDamage( 3 );
    a.attack( "Bar-19" );
    b.takeDamage( 3 );
    a.attack( "Bar-19" );
    b.takeDamage( 3 );
    a.attack( "Bar-19" );
    b.takeDamage( 3 );

    b.beRepaired( 100 );
    a.beRepaired( 4242 );

    return 0;
}