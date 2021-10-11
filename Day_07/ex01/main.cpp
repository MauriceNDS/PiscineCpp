#include "iter.hpp"

int		main( void ) {
	int		array[3] = { 1, 2, 3 };

	iter( array, 3, printI );
	iter( array, 3, inc );
	iter( array, 3, printI );

	return 0;
}