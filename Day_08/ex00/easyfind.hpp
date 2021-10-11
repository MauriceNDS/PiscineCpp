#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iterator>

template< typename T >
int&		easyfind( T const & container, int toFind ) {
	for ( typename T::iterator it = container.begin(); it != container.end(); it++ ) {
		if ( *it == toFind )
			return it;
	}
	throw std::exception();
}

#endif