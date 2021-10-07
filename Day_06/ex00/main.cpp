#include <iostream>
#include <string.h>
#include <math.h>

int		main( int argc, char **argv ) {

	if ( argc != 2 )
		return 1;

	char		c;
	int			i;
	float		f;
	double		d;

	d = atof( argv[1] );
	i = static_cast<int>( d );
	f = static_cast<float>( d );
	c = static_cast<char>( d );

	if ( isnan( d ) || isinf( d ) || i > 127 || i < 0 )
		std::cout << "char: impossible" << std::endl;
	else if ( c < 32 || c > 126 )
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << c << "'" << std::endl;
	if ( isnan( d ) || isinf( d ) )
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << i << std::endl;
	if ( f - i == 0 )
		std::cout << "float: " << f << ".0f" << std::endl;
	else
		std::cout << "float: " << f << "f" << std::endl;
	if ( d - i == 0 )
		std::cout << "double: " << d << ".0" << std::endl;
	else
		std::cout << "double: " << d << std::endl;
	return 0;
}