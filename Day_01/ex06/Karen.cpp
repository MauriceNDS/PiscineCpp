/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 13:59:17 by adel-sol          #+#    #+#             */
/*   Updated: 2021/09/28 08:19:41 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen( void ) {
	this->_func[(int)'D'] = &Karen::debug;
	this->_func[(int)'I'] = &Karen::info;
	this->_func[(int)'W'] = &Karen::warning;
	this->_func[(int)'E'] = &Karen::error;
}

void	Karen::debug( void ) {
	std::cout << "DEBUG : ";
	std::cout << "I love to get extra bacon for my";
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!";
	std::cout << std::endl;
}

void	Karen::info( void ) {
	std::cout << "INFO : ";
	std::cout << "I cannot believe adding extra bacon cost more money.";
	std::cout << "You don’t put enough! If you did I would not have to ask for it!";
	std::cout << std::endl;
}

void	Karen::warning( void ) {
	std::cout << "WARNING : ";
	std::cout <<  "I think I deserve to have some extra bacon for free. I’ve been";
	std::cout << "coming here for years and you just started working here last month.";
	std::cout << std::endl;
}

void	Karen::error( void ) {
	std::cout << "ERROR : ";
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void	Karen::complain( std::string level ) {
	if ( level != "DEBUG" && level != "INFO" && level != "WARNING" && level != "ERROR" ) {
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return ;
	}
	switch ( level[0] ) {
		case 'E' : (this->*_func[(int)'E'])(); break;
		case 'W' : {
			(this->*_func[(int)'W'])();
			(this->*_func[(int)'E'])();
			break;
		}
		case 'I' : {
			(this->*_func[(int)'I'])();
			(this->*_func[(int)'W'])();
			(this->*_func[(int)'E'])();
			break;
		}
		case 'D' : {
			(this->*_func[(int)'D'])();
			(this->*_func[(int)'I'])();
			(this->*_func[(int)'W'])();
			(this->*_func[(int)'E'])();
			break;
		}
	}
}