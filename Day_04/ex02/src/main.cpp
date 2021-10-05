/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 13:28:34 by adel-sol          #+#    #+#             */
/*   Updated: 2021/10/04 07:43:15 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main( void ) {
	
	Animal*		animals[6];
	Dog			dog1;
	// Animal		animal; // does not work with this line

	std::cout << std::endl;
	std::cout << std::endl;

	for ( int i = 0; i < 6; i++ ) {
		if ( i < 3 )
			animals[i] = new Cat();
		else	
			animals[i] = new Dog();
	}

	for ( int i = 0; i < 6; i++ )
		delete animals[i];

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	
	dog1.getBrain()->ideas[0] = "vegetables";
	Dog	dog2( dog1 );

	std::cout << "dog1 = " << dog1.getBrain()->ideas[0];
	std::cout << " dog2 = " << dog2.getBrain()->ideas[0] << std::endl;

	std::cout << "Change dog2" << std::endl;

	dog2.getBrain()->ideas[0] = "meat";

	std::cout << "dog1 = " << dog1.getBrain()->ideas[0];
	std::cout << " dog2 = " << dog2.getBrain()->ideas[0] << std::endl;


	return 0;
}