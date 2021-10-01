/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 07:36:34 by adel-sol          #+#    #+#             */
/*   Updated: 2021/10/01 11:22:56 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) {
    std::cout << "ScavTrap default constructor called" << std::endl;
	this->_name = "Unknown";
	this->_hp = 100;
	this->_ep = 50;
	this->_damage = 20;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap( name, 20 ) {
    std::cout << "ScavTrap constructor with parameter called" << std::endl;
	this->_hp = 100;
	this->_ep = 50;
}

ScavTrap::ScavTrap( ScavTrap const & cpy ) {
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = cpy;
}

ScavTrap::~ScavTrap( void ) {
    std::cout << "ScavTrap destructor called" << std::endl;
}

void        ScavTrap::attack( std::string const & target ) {
    std::cout << "ScavTrap " << this->_name << " attacks " << target;
    std::cout << ", causing " << this->_damage << " points of damage!";
    std::cout << std::endl;
}

void		ScavTrap::guardGate( void ) const {
	std::cout << "ScavTrap " << this->_name << " has entered in Gate keeper mode.";
	std::cout << std::endl;
}