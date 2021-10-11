#include <iostream>
#include <vector>

#include "easyfind.hpp"

int		main( void ) {
	std::vector<int>	arr1;

	arr1.push_back( 2 );
	arr1.push_back( 4 );
	arr1.push_back( 8 );
	arr1.push_back( 16 );
	arr1.push_back( 42 );
	arr1.push_back( 64 );

	try {
		int&	a = easyfind( arr1, 32 );
		std::cout << "We've found " <<  a << " in vector arr1" << std::endl;
	}
	catch ( std::exception& e ) {
		std::cout << "Unable to find the desired element" << std::endl;
	}

	try {
		int&	a = easyfind( arr1, 42 );
		std::cout << "We've found " << a << " in vector arr1" << std::endl;
	}
	catch ( std::exception& e ) {
		std::cout << "Unable to find the desired element" << std::endl;
	}

	return 0;
}