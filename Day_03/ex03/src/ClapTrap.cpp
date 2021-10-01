/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 07:56:19 by adel-sol          #+#    #+#             */
/*   Updated: 2021/09/30 08:31:43 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _name( "Unknown" ), _hp( 10 ), _ep( 10 ), _damage( 0 ) {
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name, size_t dmg ) : _name( name ), _hp( 10 ), _ep( 10 ), _damage( dmg ) {
    std::cout << "ClapTrap constructor with parameter called" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const & cpy ) {
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = cpy;
}

ClapTrap::~ClapTrap( void ) {
    std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap&   ClapTrap::operator=( ClapTrap const & rhs ) {
    this->_name = rhs._name;
    this->_hp = rhs._hp;
    this->_ep = rhs._ep;
    this->_damage = rhs._damage;
    return *this;
}

void        ClapTrap::attack( std::string const & target ) {
    std::cout << "ClapTrap " << this->_name << " attacks " << target;
    std::cout << ", causing " << this->_damage << " points of damage!";
    std::cout << std::endl;
}

void        ClapTrap::takeDamage( unsigned int amount ) {
    std::cout << "ClapTrap " << this->_name << " has taken " << amount;
    std::cout << " points of damage!" << std::endl;

    if ( this->_hp > amount )
        this->_hp -= amount;
    else {
        std::cout << "ClapTrap " << this->_name << " has been broken!" << std::endl;
        this->_hp = 0;
    }
}

void        ClapTrap::beRepaired( unsigned int amount ) {
    std::cout << "ClapTrap " << this->_name << " has been upgraded!" << std::endl;
    this->_hp += amount;
}