#include "span.hpp"

Span::Span( unsigned int size ) : _size( size ), _current( 0 ) {}

Span::Span( Span const & copy ) {
    *this = copy;
}

Span::~Span( void ) {
    this->_array.clear();
}

Span&           Span::operator=( Span const & rhs ) {
    this->_current = rhs._current;
    this->_size = rhs._size;
    this->_array = rhs._array;
    return *this;
}

void            Span::addNumber( int number ) {
    if ( this->_current == this->_size )
        throw Span::FullClassException();
    this->_array.push_back( number );
    this->_current++;
}

void            Span::generate( int amount, int ( *gen )( void ) ) {
    this->_array.clear();
    this->_size = amount;
    this->_current = amount;
    this->_array.resize( amount );
    std::generate( this->_array.begin(), this->_array.end(), gen );
}

unsigned int    Span::shortestSpan( void ) const {
    if ( this->_current < 2 )
        throw Span::NotEnoughElementsException();
    unsigned int     diff = std::numeric_limits<unsigned int>::max();
    std::vector<int> copy = this->_array;

    std::sort( copy.begin(), copy.end() );
    for (std::vector<int>::const_iterator it = copy.begin() + 1; it != copy.end(); it++ ) {
        if ( static_cast<unsigned int>(*it - *( it - 1 )) < diff )
            diff = *it - *( it - 1 );
    }
    return diff;
}

unsigned int    Span::longestSpan( void ) const {
    if ( this->_current < 2 )
        throw Span::NotEnoughElementsException();
    int    max = *std::max_element( this->_array.begin(), this->_array.end() );
    int    min = *std::min_element( this->_array.begin(), this->_array.end() );
    return max - min;
}

const char* Span::FullClassException::what( void ) const throw() {
    return "A class has reached its maximum capacity";
}

const char* Span::NotEnoughElementsException::what( void ) const throw() {
    return "There is not enough elements for fucntion execution";
}