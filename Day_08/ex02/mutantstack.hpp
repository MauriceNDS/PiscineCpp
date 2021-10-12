#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iterator>
# include <cstddef>
# include <stack>

template< class T >
class MutantStack : public std::stack<T> {

    public:

        MutantStack<T>( void ) : std::stack<T>() {}

        MutantStack<T>( MutantStack<T> const & copy ) : std::stack<T>( copy ) {}

        ~MutantStack<T>( void ) {}

        MutantStack<T>&    operator=( MutantStack<T> const & rhs ) {
            std::stack<T>::operator=( rhs );
            return *this;
        }

        struct iterator 
        {
            using iterator_category = std::bidirectional_iterator_tag;
            using difference_type   = std::ptrdiff_t;
            using value_type        = T;
            using pointer           = T*;
            using reference         = T&;

            iterator( pointer ptr ) : _m_ptr( ptr ) {}
            
            reference   operator*( void ) {
                return *_m_ptr;
            }

            pointer     operator->( void ) {
                return _m_ptr;
            }

            iterator&   operator++( void ) {
                _m_ptr--; return *this;
            }

            iterator    operator++( int ) {
                iterator tmp = *this; --(*this);
                return tmp;
            }

            iterator&   operator--( void ) {
                _m_ptr++; return *this;
            }

            iterator    operator--( int ) {
                iterator tmp = *this; ++(*this);
                return tmp;
            }

            bool        operator==( const iterator& b ) {
                return this->_m_ptr == b._m_ptr;
            }

            bool        operator!=( const iterator& b ) {
                return this->_m_ptr != b._m_ptr;
            }

            private:

                pointer _m_ptr;

        };

        iterator    begin() { return iterator( &this->top() ); }
        iterator    end()   { return iterator( &this->top() - this->size() + 1 ); }
        
};

#endif