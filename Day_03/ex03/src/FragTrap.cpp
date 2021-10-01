/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 09:01:14 by adel-sol          #+#    #+#             */
/*   Updated: 2021/10/01 11:23:37 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap( void ) {
    std::cout << "FragTrap default constructor called" << std::endl;
	this->_name = "Unknown";
	this->_hp = 100;
	this->_ep = 100;
	this->_damage = 30;
}

FragTrap::FragTrap( std::string name ) : ClapTrap( name, 30 ) {
    std::cout << "FragTrap constructor with parameter called" << std::endl;
	this->_hp = 100;
	this->_ep = 100;
}

FragTrap::FragTrap( FragTrap const & cpy ) {
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = cpy;
}

FragTrap::~FragTrap( void ) {
    std::cout << "FragTrap destructor called" << std::endl;
}

void        FragTrap::attack( std::string const & target ) {
    std::cout << "FragTrap " << this->_name << " attacks " << target;
    std::cout << ", causing " << this->_damage << " points of damage!";
    std::cout << std::endl;
}

void		FragTrap::highFivesGuys( void ) const {
	std::cout << "FragTrap " << this->_name << " gives high fives to everyone!";
	std::cout << std::endl;
}