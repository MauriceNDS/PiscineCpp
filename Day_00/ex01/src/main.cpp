/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 09:17:51 by adel-sol          #+#    #+#             */
/*   Updated: 2021/09/23 11:45:23 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contact.class.hpp"
#include "Phonebook.class.hpp"

void	main_view( Phonebook *phonebook );

bool	isNumber( const std::string& s )
{
    std::string::const_iterator it = s.begin();
	
	if ( *it != '+' && !std::isdigit( *it ) )
		return false; 
	++it;
    while ( it != s.end() && std::isdigit( *it ) )
		++it;

    return !s.empty() && it == s.end();
}

void	addNewContact( Phonebook *phonebook ) {

	std::string	firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;

	if ( phonebook->getTotal() == 8 ) {

		std::cout << "Your phonebook is full !" << std::endl;
		return ;
	}

	std::cout << std::endl << "Please insert contact data ." << std::endl;

firstname:
	std::cout << "First Name : ";
	if ( !std::getline( std::cin, firstName ) )
		exit( 1 );
	if ( firstName.length() < 1 ) {
		
		std::cout << "Invalid name, please try again !" << std::endl;
		goto firstname;
	}

lastname:
	std::cout << "Last Name : ";
	if ( !std::getline( std::cin, lastName ) )
		exit( 1 );
	if ( lastName.length() < 1 ) {
		
		std::cout << "Invalid name, please try again !" << std::endl;
		goto lastname;
	}
	std::cout << "Nickname : ";
	if ( !std::getline( std::cin, nickname ) )
		exit( 1 );

phone:
	std::cout << "Phone number : ";
	if ( !std::getline( std::cin, phoneNumber ) )
		exit( 1 );
	if ( !isNumber( phoneNumber ) || phoneNumber.length() < 6)  {
		
		std::cout << "Wrong phone number format ! ( Ex: 06942..., +33692... 6 chars)" << std::endl;
		goto phone;
	}
	
	std::cout << "Darkest secret : ";
	if ( !std::getline( std::cin, darkestSecret ) )
		exit( 1 );

	phonebook->addContact( firstName, lastName, nickname, phoneNumber, darkestSecret );
	std::cout << "New contact created !" << std::endl << std::endl;

	main_view( phonebook );
	
	return ;
}

void	getContactInfo( Phonebook * pb ) {

	int		i;
	bool	res;

reindex:
	std::cout << "Please insert a contact index !" << std::endl;
	std::cout << "> ";
	std::cin >> i;
	res = std::cin.good();
	std::cin.ignore(100000, '\n');

	if ( std::cin.eof() )
		exit( 1 );
	if ( !res || i <= 0 || i > pb->getTotal() ) {

		std::cout << "Wrong index !" << std::endl;
		std::cin.clear();
		std::cin.ignore(100000, '\n');
		goto reindex;
	}

	std::cout << "First Name : " << pb->contacts[i - 1].getFirstName() << std::endl;
	std::cout << "Last Name : " << pb->contacts[i - 1].getLastName() << std::endl;
	std::cout << "Nickname : " << pb->contacts[i - 1].getNickname() << std::endl;
	std::cout << "Phone number : " << pb->contacts[i - 1].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret : " << pb->contacts[i - 1].getDarkestSecret() << std::endl;
	std::cout << std::endl;

	return ;
}

void	searchContact( Phonebook *pb ) {

	std::cout << std::setw(10) << "Index" << std::setw(1) << " | ";
	std::cout << std::setw(10) << "First Name" << std::setw(1) << " | ";
	std::cout << std::setw(10) << "Last Name" << std::setw(1) << " | ";
	std::cout << std::setw(10) << "Nickname" << std::setw(1) << std::endl;
	std::cout << "_________________________________________________" << std::endl;

	for ( int i = 0; i < pb->getTotal(); i++ ) {

		std::cout << std::setw(10) << i + 1 << std::setw(1) << " | ";
		std::cout << std::setw(10);
		( pb->contacts[i].getFirstName().length() > 10 ) ? std::cout << std::setw(9) << pb->contacts[i].getFirstName().substr(0, 9) << "." :
		std::cout << pb->contacts[i].getFirstName();
		std::cout << std::setw(1) << " | ";
		std::cout << std::setw(10);
		( pb->contacts[i].getLastName().length() > 10 ) ? std::cout << std::setw(9) << pb->contacts[i].getLastName().substr(0, 9) << "." :
		std::cout << pb->contacts[i].getLastName();
		std::cout << std::setw(1) << " | ";
		std::cout << std::setw(10);
		( pb->contacts[i].getNickname().length() > 10 ) ? std::cout << std::setw(9) << pb->contacts[i].getNickname().substr(0, 9) << "." :
		std::cout << pb->contacts[i].getNickname();
		std::cout << std::setw(1) << std::endl;
	}

	if ( pb->getTotal() == 0 )
		std::cout << "There contact list is empty ! " << std::endl << std::endl;
	else
		getContactInfo( pb );
		
	main_view( pb );

	return ;
}

void	main_view( Phonebook *phonebook ) {

	std::string	cmd;

retry:

	std::cout << "Enter a command, please ( ADD, SEARCH, EXIT )" << std::endl;
	std::cout << "> ";
	if ( !std::getline( std::cin, cmd ) )
		exit( 1 );
	if ( !cmd.compare( "EXIT" ) )
		exit( 0 );
	else if ( !cmd.compare( "ADD" ) )
		addNewContact( phonebook );
	else if ( !cmd.compare( "SEARCH" ) )
		searchContact( phonebook );
	else {
		
		std::cout << "Unknown command ! " << std::endl;
		goto retry;
	}

	return ;
}

int		main( int argc, char *argv[] ) {

	Phonebook	phonebook;

	( void ) argv;

	if ( argc > 1 ) {

		std::cerr << "Error: too many arguments ! " << std::endl;
		return 1;
	}

	main_view( &phonebook );
	
	return 0;
}