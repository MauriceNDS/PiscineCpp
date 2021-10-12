#include <iostream>
#include <ctime>

#include "span.hpp"

int     randomNumber( void ) {
    return std::rand() % 1000000;
}


int     main( void ) {
    std::srand ( int ( std::time(0) ) );
    {
        Span sp = Span( 5 );

        sp.addNumber( 5 );
        sp.addNumber( 3 );
        sp.addNumber( 17 );
        sp.addNumber( 9 );
        sp.addNumber( 11 );
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    {
        try {
            Span sp = Span( 3 );

            sp.addNumber( 5 );
            sp.addNumber( 3 );
            sp.addNumber( 17 );
            sp.addNumber( 9 );
            std::cout << "Span is filled correctly" << std::endl;
        }
        catch ( Span::FullClassException& e ) {
            std::cout << e.what() << std::endl;
        }
    }
    {
        try {
            Span sp = Span( 5 );

            sp.addNumber( 5 );
            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
        }
        catch ( Span::NotEnoughElementsException& e ) {
            std::cout << e.what() << std::endl;
        }
    }
    {
        Span sp = Span( 5 );

        sp.addNumber( -2147483648 );
        sp.addNumber( 3 );
        sp.addNumber( 2147483647 );
        sp.addNumber( 9 );
        sp.addNumber( 11 );
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    {
        Span sp = Span( 1 );

        sp.generate( 10000, randomNumber );
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    return 0;
}