#include "Array.hpp"

int		main( void ) {
	Array<int>	arri(5);
	Array<int>	arrc(4);

	arri[2] = 42;
	try {
		std::cout << arri[5] << std::endl;
	}
	catch ( std::exception& e ) {
		std::cout << "Segfault" << std::endl;
	}

	std::cout << "arrc_size: " << arrc.size() << std::endl;
	arrc = arri;
	std::cout << "arrc_size: " << arrc.size() << std::endl;
	std::cout << arrc[2] << std::endl;
	arrc[2]++;
	std::cout << arri[2] << " " << arrc[2] << std::endl;

	return 0;
}