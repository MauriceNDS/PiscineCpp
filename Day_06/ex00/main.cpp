#include <iostream>
#include <string.h>
#include <iomanip>
#include <math.h>

int		getPrecision( char* str ) {
	int		i = -1;
	int		j = 0;
	bool	checker = false;

	while ( str[++i] ) {
		if ( str[i] == '.' )
			checker = true;
		if ( checker && str[i] >= '0' && str[i] <= '9' )
			j++;
	}
	return ( j == 0 ) ? 1 : j;
}

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
	std::cout << std::fixed;
	std::cout << std::setprecision( getPrecision( argv[1] ) );
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
	return 0;
}