#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm>
# include <vector>
# include <limits>

class Span {

    private:

        unsigned int         _size;
        unsigned int         _current;
        std::vector<int>     _array;
        
        Span( void );

    public:

        Span( unsigned int size );
        Span( Span const & copy );
        ~Span( void );

        Span&           operator=( Span const & rhs );

        void            addNumber( int number );
        void            generate( int amount, int ( *gen )( void ) );
        unsigned int    shortestSpan( void ) const;
        unsigned int    longestSpan( void ) const;

        class FullClassException : std::exception {
            
            public:

                virtual const char* what( void ) const throw();
        };

        class NotEnoughElementsException : std::exception {
            
            public:

                virtual const char* what( void ) const throw();
        };

};

#endif