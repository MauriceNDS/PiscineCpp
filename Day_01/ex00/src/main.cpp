/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 09:37:58 by adel-sol          #+#    #+#             */
/*   Updated: 2021/09/24 10:15:26 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int     main( void ) {

    Zombie* a;
    Zombie* b;

    cout << "Created by randomChump() :" << endl;
    randomChump( "Nifnif" );
    cout << endl;
    randomChump( "Nafnaf" );
    cout << endl;
    randomChump( "Nufnuf" );
    cout << endl;

    cout << endl;

    cout << "Created by newZombie() :" << endl;
    a = newZombie( "Adolf" );
    b = newZombie( "Bryan" );

    cout << endl;

    cout << "Destroyed by me :" << endl;
    delete a;
    delete b;

    return 0;
}