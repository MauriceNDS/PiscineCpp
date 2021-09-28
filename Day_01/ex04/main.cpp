/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 12:34:17 by adel-sol          #+#    #+#             */
/*   Updated: 2021/09/27 15:09:11 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

using std::string;

int		main( int argc, char *argv[] ) {

	std::stringstream	buffer;
	string				str;
	size_t				found;
	size_t				s1;
	size_t				s2;

	if ( argc != 4 || !strlen( argv[2] ) || !strlen( argv[3] ) )
		exit( 1 );
	
	std::ifstream		ifs( argv[1] );
	
	if ( ifs.fail() ) {
		std::cerr << "Error: " << strerror( errno ) << std::endl;
		return errno;
	}

	buffer << ifs.rdbuf();
	ifs.close();

	str = buffer.str();
	s1 = strlen( argv[2] );
	s2 = strlen( argv[3] );
	found = 0;
	
	while ( ( found = str.find( argv[2], found ) ) != string::npos ) {
		
		str.erase( found, s1 );
		str.insert( found, argv[3] );
		found += s2;
	}

	std::ofstream		ofs( strcat( argv[1], ".replace" ) );

	if ( ofs.fail() ) {
		std::cerr << "Error: " << strerror( errno ) << std::endl;
		return errno;
	}
	ofs << str;
	ofs.close();

	return 0;
}