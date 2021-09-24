/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 09:37:57 by adel-sol          #+#    #+#             */
/*   Updated: 2021/09/24 09:59:58 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ) : _name( "No name" ) {

    cout << this->_name << " has been created" << endl;
}

Zombie::Zombie( string const str ) : _name( str ) {

    cout << this->_name << " has been created" << endl;
}

Zombie::~Zombie( void ) {

    cout << this->_name << " is more than just dead" << endl;
}

void    Zombie::announce( void ) {

    cout << "<" << this->_name << "> BraiiiiiiinnnzzzZ..." << endl;
}