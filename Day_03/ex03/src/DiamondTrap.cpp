/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 09:15:44 by adel-sol          #+#    #+#             */
/*   Updated: 2021/10/01 12:23:38 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) {
    std::cout << "DiamondTrap default constructor called" << std::endl;
    ClapTrap::_name += "_clap_name";
}

DiamondTrap::DiamondTrap( std::string name ) {
    std::cout << "DiamondTrap constructor with parameter called" << std::endl;
	this->_name = name;
    ClapTrap::_name = name + "_clap_name";
}

DiamondTrap::DiamondTrap( DiamondTrap const & cpy ) {
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    *this = cpy;
}

DiamondTrap::~DiamondTrap( void ) {
    std::cout << "DiamondTrap destructor called" << std::endl;
}

void	DiamondTrap::whoAmI( void ) const {
	std::cout << "Name : " << this->_name;
	std::cout << "\tClapTrap name : " << ClapTrap::_name;
	std::cout << std::endl;
}