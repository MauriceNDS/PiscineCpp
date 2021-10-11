#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template< typename T >
void	printI( T a ) {
	std::cout << a << std::endl;
}

template <typename T>
void	inc( T& value ) {
   value += 1;
}

template< typename T >
void	iter( T* array, size_t const length, void (*f)( T& v ) ) {
	for ( size_t i = 0; i < length; i++ )
		f( array[i] );
}

#endif