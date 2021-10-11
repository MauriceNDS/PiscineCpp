#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template< typename T >
class Array {

	private:

		T*				_values;
		unsigned int	_size;

	public:

		Array<T>( void ) {
			this->_size = 0;
			this->_values = NULL;
		}

    	~Array<T>( void ) {
			if ( this->_size )
				delete[] this->_values;
		}

    	Array<T>( Array const & ref ) {
			*this = ref;
		}

    	Array<T>( unsigned int n ) {
			this->_size = n;
			this->_values = new T[n];
		}

    	Array<T>&	operator=( const Array<T>& ref ) {
			if ( this->_size )
				delete[] this->_values;
			this->_size = ref._size;
			this->_values = new T[ref._size];
			for ( size_t i = 0; i < ref._size; i++ )
				this->_values[i] = ref._values[i];
			return *this;
		}

    	T&		operator[]( unsigned int i ) {
			if ( i >= this->_size )
				throw std::exception();
			return this->_values[i];
		}

		unsigned int	size( void ) const {
			return this->_size;
		}

};

#endif